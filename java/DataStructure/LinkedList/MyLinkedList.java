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
        else {
            // Insert into the middle
            Node<E> current = head;
            for (int i = 1; i < index; i++)
                current = current.next;

            Node<E> temp = current.next;
            current.next = new Node<>(e);
            current.next.next = temp;
            size++;
        }

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
//        return null;
        Node<E> current = head;
        for (int i = 0; i < index; i++)
            current = current.next;

        return current.element;
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
        // Out of range
        if (index < 0 || index >= size)
            return null;
        else if (index == 0)
            return removeFirst();
        else if (index == size - 1)
            return removeLast();
        else {
            Node<E> previous = head;
            for (int i = 0; i < index - 1; i++)
                previous = previous.next;
            Node<E> current = previous.next;
            previous.next = current.next;
            size--;
            return current.element;
        }
    }

    private E removeLast() {
        if (size == 0)
            return null;
        else if (size == 1)
            return removeFirst();
        else {
            Node<E> previous = head;
            for (int i = 0; i < size - 2; i++)
                previous = previous.next;

            Node<E> current = previous.next;
            previous.next = null;
            size--;
            return current.element;
        }
    }

    private E removeFirst() {
        if (size == 0)
            return null;
        else {
            Node<E> temp = head;
            head = head.next;

            if (head == null)
                tail = null;

            size--;
            return temp.element;
        }
    }

    @Override
    public E set(int index, E e) {
        return null;


    }

    @Override
    public String toString() {
        StringBuilder result = new StringBuilder("[");

        Node<E> current = head;
        for (int i = 0; i < size; i++) {
            result.append(current.element.toString());
            current = current.next;

            if (current == null)
                result.append("]");
            else
                result.append(", ");
        }


        return result.toString();
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
        /**
         * Returns the next element in the iteration.
         */
        public E next() {
            Node<E> node = current;
            current = current.next;
            return node.element;
        }

        @Override
        public void remove() {
            int index = 0;
            MyLinkedList.this.remove(index);
        }
    }
}
