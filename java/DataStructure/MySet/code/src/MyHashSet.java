import java.util.Iterator;

public class MyHashSet<E> implements MySet<E> {
    @Override
    public void clear() {

    }

    @Override
    public boolean constains(E e) {
        return false;
    }

    @Override
    public boolean add(E e) {
        return false;
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
}
