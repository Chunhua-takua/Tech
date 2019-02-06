import java.util.Scanner;

public class HuffmanCode {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter text: ");
        String text = input.nextLine();

        int[] counts = getCharacterFrequency(text);

        System.out.printf("%-15s%-15s%-15s%-15s\n",
                "ASCII Code", "Character", "Frequency", "Code");

        Tree tree = getHuffmanTree(counts);
        String[] codes = getCode(tree.root);

        for (int i = 0; i < codes.length; i++) {
            if (counts[i] != 0) {
                System.out.printf("%-15d%-15s%-15d%-15s\n",
                        i, (char)i + "", counts[i], codes[i]);
            }
        }
    }

    public static Tree getHuffmanTree(int[] counts) {
        Heap<Tree> heap = new Heap<>();
        for (int i = 0; i < counts.length; i++) {
            if (counts[i] > 0)
                heap.add(new Tree(counts[i], (char)i));
        }

        while (heap.getSize() > 1) {
            Tree t1 = heap.remove();
            Tree t2 = heap.remove();
            Tree t = new Tree(t1, t2);
            heap.add(t);
        }

        return heap.remove();
    }

    public static String[] getCode(Tree.Node root) {
        if (root == null)
            return null;

        String[] codes = new String[256];
        assignCode(root, codes);
        return codes;
    }

    private static void assignCode(Tree.Node root, String[] codes) {
        if (root.left != null) {
            root.left.code = root.code + "0";
            assignCode(root.left, codes);

            root.right.code = root.code + "1";
            assignCode(root.right, codes);
        }
        else {
            codes[(int)root.element] = root.code;
        }
    }

    public static int[] getCharacterFrequency(String text) {
        int[] counts = new int[256];

        for (int i = 0; i < text.length(); i++)
            counts[(int)text.charAt(i)]++;

        return counts;
    }

    /**
     * Define a huffman coding tree
     */
    public static class Tree implements Comparable<Tree> {
        Node root;

        /**
         * Create a tree with two subtrees
         */
        public Tree(Tree tree1, Tree tree2) {
            root = new Node();
            root.left = tree1.root;
            root.right = tree2.root;
            root.weight = tree1.root.weight + tree2.root.weight;
        }

        /**
         * Create a tree containing a leaf node
         */
        public Tree(int weight, char element) {
            root = new Node();
            root.weight = weight;
            root.element = element;
        }

        @Override
        public int compareTo(Tree t) {
            if (root.element < t.root.element)
                return -1;
            else if (root.element > t.root.element)
                return 1;
            else
                return 0;
        }

        public class Node {
            char element;
            int weight;
            Node left;
            Node right;
            String code = "";

            public Node() {
            }

            public Node(int weight, char element) {
                this.weight = weight;
                this.element = element;
            }
        }
    }
}
