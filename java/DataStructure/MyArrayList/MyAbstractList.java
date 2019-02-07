public abstract class MyAbstractList<E> implements MyList<E> {
    protected int size = 0;

    public MyAbstractList() {

    }

    /**
     * Create a list from an array of objects
     */
    public MyAbstractList(E[] objects) {
        for (E object : objects)
            add(object);
    }

    @Override
    public void add(E e) {
        add(size, e);
    }

    @Override
    public boolean isEmpty() {
        return size == 0;
    }

    public boolean remove(E e) {
        if (indexOf(e) >= 0) {
            remove(indexOf(e));
            return true;
        }
        else
            return false;
    }

    public int size() {
        return size;
    }
}
