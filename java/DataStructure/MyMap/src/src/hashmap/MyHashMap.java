package hashmap;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.Set;

public class MyHashMap<K, V> implements MyMap<K, V> {
    // 默认hash table的大小，必须是2的次幂
    private static int DEFAULT_INITIAL_CAPACITY = 4;

    // 定义hash table的最大值
    private static int MAXIMUM_CAPACITY = 1 << 30;

    // 记录当前hash table的数量，即桶的数量
    private int capacity;

    // 默认Load factor
    private static float DEFAULT_LOAD_FACTOR = 0.75F;

    // 指定load factor
    private float loadFactorThreshold;

    // 记录hash table中entry的数量
    private int size = 0;

    // Hash map的本质是一个数组，其中的每个元素是链表；因为hash冲突所以使用链表
    LinkedList<Entry<K, V>>[] table;

    public MyHashMap() {
        this(DEFAULT_INITIAL_CAPACITY, DEFAULT_LOAD_FACTOR);
    }

    public MyHashMap(int initialCapacity) {
        this(initialCapacity, DEFAULT_LOAD_FACTOR);
    }

    public MyHashMap(int initialCapacity, float loadFactorThreshold) {
        // 校验入参是否合法
        if (initialCapacity > MAXIMUM_CAPACITY)
            this.capacity = MAXIMUM_CAPACITY;
        else
            this.capacity = trimToPowerOf2(initialCapacity);

        this.loadFactorThreshold = loadFactorThreshold;
        table = new LinkedList[capacity];
    }

    /**
     * 取大于initialCapacity的2次幂的最小值
     * @param initialCapacity
     * @return
     */
    private int trimToPowerOf2(int initialCapacity) {
        int capacity = 1;
        while (capacity < initialCapacity) {
            capacity <<= 1;
        }

        return capacity > MAXIMUM_CAPACITY ? MAXIMUM_CAPACITY : capacity;
    }

    @Override
    public void clear() {
        size = 0;
        removeEntries();
    }

    private void removeEntries() {
        for (int i = 0; i < capacity; i++)
            if (table[i] != null)
                // 在使用成员方法前一定要进行判空!!!!!
                table[i].clear();
    }

    @Override
    public boolean containsKey(K key) {
        int bucketIndex = hash(key.hashCode());
        LinkedList<Entry<K, V>> bucket = table[bucketIndex];
        for (Entry<K, V> entry : bucket)
            if (entry.key.equals(key))
                return true;

        return false;
    }

    @Override
    public boolean containsValue(V value) {
        for (int i = 0; i < capacity; i++) {
            LinkedList<Entry<K, V>> bucket = table[i];
            if (bucket != null)
                for (Entry<K, V> entry : bucket)
                    if (entry.value.equals(value))
                        return true;
        }

        return false;
    }

    @Override
    public Set<Entry<K, V>> entrySet() {
        Set<Entry<K, V>> set = new HashSet<>();

        // 循环每一个table
        for (int i = 0; i < capacity; i++) {
            if (table[i] != null) {
                LinkedList<Entry<K, V>> bucket = table[i];
                for (Entry<K, V> entry : bucket)
                    set.add(entry);
            }
        }

        return set;
    }

    @Override
    /**
     * Return the value that matches the key
     */
    public V get(K key) {
        int bucketIndex = hash(key.hashCode());
        if (table[bucketIndex] != null) {
            for (Entry<K, V> entry : table[bucketIndex]) {
                if (entry.key.equals(key))
                    return entry.value;
            }
        }

        return null;
    }

    @Override
    public boolean isEmpty() {
        return size == 0;
    }

    @Override
    public Set keySet() {
        return null;
    }

    @Override
    public V put(K key, V value) {
        // map中已经存在key，放入新值返回旧值
        if (get(key) != null) {
            int bucketIndex = hash(key.hashCode());
            LinkedList<Entry<K, V>> bucket = table[bucketIndex];
            V oldValue = null;
            for (Entry<K, V> entry : bucket)
                if (entry.key.equals(key)) {
                    oldValue = entry.value;
                    entry.value = value;
//                    System.out.println("put old key: " + key + ", value:" + value + ", size = " + size);
                    return oldValue;
                }
        }

        // 加入新entry，首先校验size；容量不足则扩容
        if (size >= capacity * loadFactorThreshold) {
            if (capacity == MAXIMUM_CAPACITY)
                throw new RuntimeException("Exceeding maximum capacity");

            rehash();
        }

        int bucketIndex = hash(key.hashCode());
        // 如果这个桶之前从来没有使用过
        if (table[bucketIndex] == null) {
            table[bucketIndex] = new LinkedList<>();
        }

        // 把key, value扔到桶里
        table[bucketIndex].addLast(new Entry<>(key, value));
        size++;

//        System.out.println("put new key: " + key + ", value:" + value + ", size = " + size);
        return value;
    }

    private void rehash() {
//        System.out.println("rehash");
        Set<Entry<K, V>> set = entrySet();
        capacity <<= 1;
        table = new LinkedList[capacity];
        for (Entry<K, V> entry : set)
            put(entry.key, entry.value);
        size = set.size();
    }

    @Override
    public void remove(K key) {
        int bucketIndex = hash(key.hashCode());
        LinkedList<Entry<K, V>> bucket = table[bucketIndex];
        if (bucket != null) {
            for (Entry<K, V> entry : bucket) {
                if (entry.key.equals(key)) {
                    bucket.remove(entry);
                    size--;
                }
            }
        }
        else
            System.out.println("Key not found: " + key);
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public Set values() {
        return null;
    }

    @Override
    public String toString() {
        StringBuilder builder = new StringBuilder("[");

        for (int i = 0; i < capacity; i++) {
            if (table[i] != null) {
                for (Entry<K, V> entry : table[i])
                    builder.append(entry);
            }
        }
        builder.append("]");

        return builder.toString();
    }

    /**
     * Hash function <br>
     * @param hashCode key的哈希值
     * @return <K, V>存放的桶的编号
     */
    private int hash(int hashCode) {
        return supplementalHash(hashCode) & (capacity - 1);
    }

    /**
     * 对hashCode进行扰动，防止hashCode高位不同而低位相同导致太多的冲突
     * @param h
     * @return
     */
    private int supplementalHash(int h) {
        h ^= (h >>> 20) ^ (h >>> 12);
        return h ^ (h >>> 7) ^ (h >>> 4);
    }
}
