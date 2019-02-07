import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class MyLinkedList<E> extends MyAbstractList<E> {
    private Node<E> head, tail;
    
    public MyLinkedList() {}
    
    public MyLinkedList(E[] objects) {
        super(objects);
    }

    public E getFirst() {
        List<String> l = new LinkedList<>(); l.iterator();

        if (size == 0)
            return null;
        else
            return head.element;



    }

    @Override
    // TODO
    public void add(int index, E e) {
        if (index == 0)
            addFirst(e);
        else if (index >= size)
            addLast(e);
    }

    public void addFirst(E e) {
        Node<E> newNode = new Node<>(e);
        newNode.next = head;
        head = newNode;
        size++;

        // The new node is the only node in list
        if (tail == null)
            tail = head;
    }

    public void addLast(E e) {
        Node<E> newNode = new Node<>(e);
        tail.next = newNode;
        tail = newNode;
        size++;

        // The new node is the only node in list
        if (head == null)
            head = tail;
    }

    @Override
    public void clear() {

    }

    @Override
    public boolean contains(E e) {
        return false;
    }

    @Override
    public E get(int index) {
        return null;
    }

    @Override
    public int indexOf(E e) {
        return 0;
    }

    @Override
    public int lastIndexOf(E e) {
        return 0;
    }

    @Override
    public E remove(int index) {
        return null;
    }

    @Override
    public E set(int index, E e) {
        return null;
    }

    @Override
    public Iterator<E> iterator() {
        return new LinkedListIterator();
    }

    private class LinkedListIterator implements Iterator<E>{
        private Node<E> current = head;

        @Override
        public boolean hasNext() {
            return current.next != null;
        }

        @Override
        public E next() {
            return current.next.element;
        }

        @Override
        public void remove() {
            int index = 0;
            MyLinkedList.this.remove(index);
        }
    }
}
