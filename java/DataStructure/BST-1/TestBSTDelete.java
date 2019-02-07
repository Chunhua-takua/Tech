public class TestBSTDelete {
    public static void main(String[] args) {
        BST<String> tree = new BST<>();
        tree.insert("George");
//        tree.insert("Michael");
//        tree.insert("Tom");
//        tree.insert("Adam");
//        tree.insert("Jones");
//        tree.insert("Peter");
//        tree.insert("Daniel");

        printTree(tree);
        System.out.println("The number of nodes is " + tree.getSize());

        System.out.println("After delete George:");
        tree.delete("George");
//        printTree(tree);
//        System.out.println("The number of nodes is " + tree.getSize());

        System.out.println("After delete Adam:");
        tree.delete("Adam");
        printTree(tree);
        System.out.println("The number of nodes is " + tree.getSize());
    }

    private static void printTree(BST tree) {
        System.out.print("Inorder (sorted): ");
        tree.inorder();
        System.out.print("\nPostorder: ");
        tree.postorder();
        System.out.print("\nPreorder: ");
        tree.preorder();
        System.out.println();
    }
}
