public interface MyList<E> extends Iterable<E> {
    public void add(E e);

    public void add(int index, E e);

    public void clear();

    public boolean contains(E e);

    public E get(int index);

    public int indexOf(E e);

    /**
     * Returns the index of the last matching element in this list
     * Returns -1 if no match.
     *
     * @param e
     * @return
     */
    public int lastIndexOf(E e);

    /**
     * Remove the first occurrence of the eleement e from this list.
     *
     * @param e
     * @return
     */
    public boolean remove(E e);

    public E remove(int index);

    public E set(int index, E e);

    public int size();

    public boolean isEmpty();
}
