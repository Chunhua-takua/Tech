public class TestStackQueue {
    public static void main(String[] args) {
        // Create a stack
        GenericStack<String> stack = new GenericStack<>();

        stack.push("Tom");
        System.out.println("(1) " + stack);

        stack.push("Susan");
        System.out.println("(2) " + stack);

        stack.push("Tim");
        stack.push("Michael");
        System.out.println("(3) " + stack);

        System.out.println("(4) " + stack.pop());
        System.out.println("(5) " + stack.pop());
        System.out.println("(6) " + stack);

        // Create a queue
        GenericQueue<String> queue = new GenericQueue<>();
        queue.enqueue("Tom");
        System.out.println("(7) " + queue);

        queue.enqueue("Susan");
        System.out.println("(8) " + queue);

        queue.enqueue("Tim");
        queue.enqueue("Michael");
        System.out.println("(9) " + queue);

        System.out.println("(10) " + queue.dequeue());
        System.out.println("(11) " + queue.dequeue());
        System.out.println("(12) " + queue);
    }
}
