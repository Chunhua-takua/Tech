import java.util.ArrayList;

public class Heap<E extends Comparable<E>> {
    private ArrayList<E> list = new ArrayList<>();
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
        list.add(object);
        int currentIndex = list.size() - 1;

        // 当current有parent的时候就执行
        while (currentIndex > 0) {
            int parentIndex = (currentIndex - 1) / 2;
            // 如果当前节点>parent
            if (list.get(currentIndex).compareTo(list.get(parentIndex)) > 0) {
                E temp = list.get(currentIndex);
                list.set(currentIndex, list.get(parentIndex));
                list.set(parentIndex, temp);
            }
            else
                break;
            currentIndex = parentIndex;
        }
    }

    public E remove() {
        if (list.size() == 0)
            return null;
        E removedObject = list.get(0);
        list.set(0, list.get(list.size() - 1));
        list.remove(list.size() - 1);
        int currentIndex = 0;
        while (currentIndex < list.size()) {
            int leftChildIndex = currentIndex * 2 + 1;
            int rightChildIndex = currentIndex * 2 + 2;

            if (leftChildIndex > list.size() - 1)
                break;

            // Find the max index
            int maxIndex = leftChildIndex;
            if (rightChildIndex < list.size()) {
                if (list.get(maxIndex).compareTo(list.get(rightChildIndex)) < 0)
                    maxIndex = rightChildIndex;

            }

            // Current node is smaller than maxIndex node
            if (list.get(currentIndex).compareTo(list.get(maxIndex)) < 0) {
                E temp = list.get(maxIndex);
                list.set(maxIndex, list.get(currentIndex));
                list.set(currentIndex, temp);
                currentIndex = maxIndex;
            }
            else
                break;


        }

        return removedObject;
    }

    /**
     * Remove the root from the heap
     */
//    public E remove() {
//        if (list.size() == 0)
//            return null;
//
//        E removedObject = list.get(0);
//        list.set(0, list.get(list.size() - 1));
//        list.remove(list.size() - 1);
//
//        int currentIndex = 0;
//        while (currentIndex < list.size()) {
//            int leftChildIndex = currentIndex * 2 + 1;
//            int rightChildIndex = currentIndex * 2 + 2;
//
//            // 没有leftchild，已经是heap
//            if (leftChildIndex > list.size() -  1)
//                break;
//
//            E max = list.get(leftChildIndex);
//            if (rightChildIndex < list.size()) {
//                // 有right child，那么current和其中比较大的相比决定是否要交换
//                int swapIndex = leftChildIndex;
//                if (list.get(leftChildIndex).compareTo(list.get(rightChildIndex)) < 0
//                        && list.get(rightChildIndex).compareTo(list.get(currentIndex)) > 0) {
//                    // right child is larger
//                    E temp = list.get(rightChildIndex);
//                    list.set(rightChildIndex, list.get(currentIndex));
//                    list.set(currentIndex, temp);
//
//                    currentIndex = rightChildIndex;
//                }
//                else {
//                    // left child is larger
//                    E temp = list.get(leftChildIndex);
//                    list.set(leftChildIndex, list.get(currentIndex));
//                    list.set(currentIndex, temp);
//
//                    currentIndex = leftChildIndex;
//                }
//
//            }
//            else {
//                // 只有leftchild
//                if (list.get(leftChildIndex).compareTo(list.get(leftChildIndex)) < 0) {
//                    E temp = list.get(leftChildIndex);
//                    list.set(leftChildIndex, list.get(currentIndex));
//                    list.set(currentIndex, temp);
//                }
//                break;
//            }
//
//        }
//        return removedObject;
//    }



    public int getSize() {
        return list.size();
    }

    public E get(int index) {
        return list.get(index);
    }
}
