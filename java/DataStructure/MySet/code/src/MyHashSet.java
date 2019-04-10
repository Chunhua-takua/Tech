import java.util.Iterator;
import java.util.LinkedList;

public class MyHashSet<E> implements MySet<E> {
    private static int DEFAULT_INITAL_CAPACITY = 4;

    // The max bucket size
    private static int MAXIMUM_CAPACITY = 1 << 30;

    private int capacity;

    private static float DEFAULT_MAX_LOAD_FACTOR = 0.75F;

    private float loadFactorThreshold;

    // The number of elements in the set
    private int size = 0;

    // Hash table is an array with each cell is a linked list
    private LinkedList<E>[] table;

    public MyHashSet() {
        this(DEFAULT_INITAL_CAPACITY, DEFAULT_MAX_LOAD_FACTOR);
    }

    public MyHashSet(int initialCapacity) {
        this(initialCapacity, DEFAULT_MAX_LOAD_FACTOR);
    }

    public MyHashSet(int initialCapacity, float initialLoadFactorThreshold) {
        if (initialCapacity > MAXIMUM_CAPACITY)
            this.capacity = MAXIMUM_CAPACITY;
        else
            this.capacity = trimToPowerOf2(initialCapacity);

        this.loadFactorThreshold = initialLoadFactorThreshold;
        table = new LinkedList[this.capacity];
    }

    private int trimToPowerOf2(int initialCapacity) {
        int capacity = 1;
        while (capacity < initialCapacity) {
            capacity <<= 1;
        }

        return capacity > MAXIMUM_CAPACITY ? MAXIMUM_CAPACITY : capacity;
    }

    @Override
    public void clear() {

    }

    @Override
    public boolean contains(E e) {
        int bucketIndex = hash(e.hashCode());
        LinkedList<E> bucket = table[bucketIndex];

        if (null != bucket) {
           for (E element : bucket) {
               if (element.equals(e))
                   return true;
           }
        }
        return false;
    }

    @Override
    public boolean add(E e) {
        // 先判断set中有没有元素e，如果有则不能加入
        if (contains(e))
            return false;

        // 元素e在set中不存在，那么加入set中
        int bucketIndex = hash(e.hashCode());

        LinkedList<E> bucket = table[bucketIndex];
        if (null == bucket)
            table[bucketIndex] = new LinkedList();

        table[bucketIndex].add(e);

        size++;
        return true;
    }

    private int hash(int hashCode) {
        return supplementalHash(hashCode) & (capacity - 1);
    }

    private int supplementalHash(int h) {
        h ^= (h >>> 20) ^ (h >>> 12);
        return h ^ (h >>> 7) ^ (h >>> 4);
    }

    @Override
    public boolean remove(E e) {
        return false;
    }

    @Override
    public boolean isEmpty() {
        return false;
    }

    @Override
    public int size() {
        return 0;
    }

    @Override
    public Iterator<E> iterator() {
        return null;
    }

    @Override
    public String toString() {
        StringBuilder builder = new StringBuilder("[");

        for (LinkedList<E> bucket : table) {
            if (null != bucket)
                for (E e : bucket)
                    builder.append(e.toString() + ", ");
        }
        builder.append("]");

        return builder.toString();
    }
}
