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
    public boolean containsKey(Object key) {
        return false;
    }

    @Override
    public boolean containsValue(Object value) {
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
    public Object get(Object key) {
        return null;
    }

    @Override
    public boolean isEmpty() {
        return false;
    }

    @Override
    public Set keySet() {
        return null;
    }

    @Override
    public V put(K key, V value) {
        return null;
    }

    @Override
    public void remove(Object key) {

    }

    @Override
    public int size() {
        return 0;
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
}
