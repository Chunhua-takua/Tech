public class HeapSort {
    public static void main(String[] args) {
        Integer[] list = {-44, -5, -3, 3, 3, 1, -4, 0, -2, 2, 45};


        heapSort(list);
//        for (Integer i : list)
//            System.out.print(i + " ");

        for (int i = list.length - 1; i > -1; i--)
            System.out.print(list[i] + " ");
    }

    public static <E extends Comparable<E>> void heapSort(E[] list) {
        Heap<E> heap = new Heap<>();

        for (E e : list)
            heap.add(e);

        for (int i = 0; i < list.length; i++)
            list[i] = heap.remove();
    }
}
