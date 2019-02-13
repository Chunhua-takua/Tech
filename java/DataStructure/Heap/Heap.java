public class Heap<E extends Comparable<E>> {
    /**
     * Create a default heap
     */
    public Heap() {
    }

    /**
     * Create a heap from an array of objects
     */
    public Heap(E[] objects) {
        for (E object : objects)
            add(object);
    }

    public void add(E object) {

    }
}
