import java.util.List;


public class TestBST {
    public static void main(String[] args) {
        // Create a BST
        BST<String> tree = new BST<>();
        tree.insert("George");
        tree.insert("Michael");
        tree.insert("Tom");
        tree.insert("Adam");
        tree.insert("Jones");
        tree.insert("Peter");
        tree.insert("Daniel");

        System.out.println("Inorder traversal:");
        tree.inorder();
        System.out.println("\nPreorder traversal:");
        tree.preorder();
        System.out.println("\nPostorder traversal:");
        tree.postorder();
		System.out.println("The number of nodes is " + tree.getSize());

		// Search for an element
		System.out.println("\nIs Peter in the tree? " + tree.search("Peter"));

		// Get a path from the root to Peter
        System.out.println("\nA path from the root to Peter is: ");
        List<BST.TreeNode<String>> path = tree.path("r");
        for (BST.TreeNode<String> p : path)
            if (p != null)
                System.out.println(p.element);

        Integer[] numbers = {2, 4, 3, 1, 8, 5, 6, 7};
        BST<Integer> intTree = new BST<>(numbers);
        System.out.println("\nInorder (sorted): ");
        intTree.inorder();
        System.out.println();
    }
}
