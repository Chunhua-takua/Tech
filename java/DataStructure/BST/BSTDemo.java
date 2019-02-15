public class BSTDemo {
   // TreeNode<Integer> root;
    
    public static void main(String[] args) {
        TreeNode<Integer> root = new TreeNode<>(60);
        root.left = new TreeNode<>(55);
        root.right = new TreeNode<>(100);
        
        System.out.println("60, ", TreeNode.search(root, 60));
        System.out.println("100, ", TreeNode.search(root, 100));
        System.out.println("55, ", TreeNode.search(root, 55));
        System.out.println("61, ", TreeNode.search(root, 61));
        System.out.println("101, ", TreeNode.search(root, 101));
    }
    

}