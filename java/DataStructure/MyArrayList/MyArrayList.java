import java.util.Iterator;

public class MyArrayList<E> extends MyAbstractList<E>{
    public static final int INITIAL_CAPACITY = 16;
    private E[] data = (E[]) new Object[INITIAL_CAPACITY];

    public MyArrayList() {
    }

    /**
     * Create a list from an array of objects
     *
     * @param
     * @param
     */
    public MyArrayList(E[] objects) {
        for (E object : objects)
            add(object);
    }

    public void add(int index, E e) {
        ensureCapacity();

        for (int i = size - 1; i > index - 1; i--) {
            data[i + 1] = data[i];
        }

        data[index] = e;
        size++;
    }

    private void ensureCapacity() {
        if (size >= data.length) {
            E[] newData = (E[]) new Object[size * 2 + 1];
            System.arraycopy(data, 0, newData, 0, size);
            data = newData;
        }
    }

    @Override
    public void clear() {
        data = (E[]) new Object[INITIAL_CAPACITY];
        size = 0;
    }

    @Override
    public boolean contains(E e) {
        for (E d : data)
            if (d.equals(e))
                return true;

        return false;
    }

    @Override
    public E get(int index) {
        checkIndex(index);
        return data[index];
    }

    private void checkIndex(int index) {
        if (index < 0 || index >= size)
            throw new IndexOutOfBoundsException("index" + index + " out of bounds");
    }

    @Override
    /**
     * Return  the index of the first matching element in this list.
     * Return -1 if no match.
     */
    public int indexOf(E e) {
        for (int i = 0; i < size; i++)
            if (data[i].equals(e))
                return i;

        return -1;
    }

    @Override
    /**
     * Return the index of the last matching element in this list.
     * Return -1 if no match.
     */
    public int lastIndexOf(E e) {
        for (int i = size - 1; i > -1; i--)
            if (data[i].equals(e))
                return i;

        return -1;
    }

    @Override
    /**
     * Remove the element at the specified position in this list.
     * Shift any subsequent elements to the left.
     * Return the element that was removed from the list.
     */
    public E remove(int index) {
        checkIndex(index);

        E e = data[index];

        for (int i = index; i < size - 1; i++)
            data[i] = data[i + 1];

        data[size - 1] = null;

        size--;
        return e;
    }

    @Override
    /**
     * Replace the element at the specified position in this list with the specified element.
     * Return the replaced element.
     */
    public E set(int index, E e) {
        checkIndex(index);

        E old = data[index];
        data[index] = e;

        return old;
    }

    public String toString() {
         StringBuilder result = new StringBuilder("[");

         for (int i = 0; i < size; i++) {
             result.append(data[i]);
             if (i < size - 1)
                 result.append(", ");
         }

         return result.toString() + "]";
    }

    @Override
    public Iterator<E> iterator() {
        return new ArrayListIterator();
    }

    private class ArrayListIterator implements Iterator<E>{
        private int current = -1;


        @Override
        public boolean hasNext() {
            return current < size - 1;
        }

        @Override
        public E next() {
            return data[++current];
        }

        @Override
        public void remove() {
            MyArrayList.this.remove(current);
        }
    }
}
