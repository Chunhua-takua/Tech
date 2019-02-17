package cn.tka;

public class MyPriorityQueue<E extends Comparable<E>> {
    private Heap<E> heap = new Heap<>();

    public void enqueue(E e) {
        if (e != null)
            heap.add(e);
        else
            return;
    }
    public E dequeue() {
        if (getSize() > 0)
            return heap.remove();
        else
            return null;
    }
    public int getSize() {
        return heap.getSize();
    }
}
