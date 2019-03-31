public interface MySet<E> extends Iterable<E> {
    public void clear();

    public boolean constains(E e);

    public boolean add(E e);

    public boolean remove(E e);

    public boolean isEmpty();

    public int size();
}
