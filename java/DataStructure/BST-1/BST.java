import java.util.Iterator;

public class BST<E extends Comparable<E>> extends AbstractTree<E> {
    protected TreeNode<E> root;
    protected int size = 0;
    
    /**
     * no-arg constructor
     * Create a default BST
     */
    public BST() {}

    /**
     * Create a BST from an array of objects
     */
    public BST(E[] objects) {
        for (int i = 0; i < objects.length; i++) {
            insert(objects[i]);
        }
    }

    @Override
    /**
     * 如果找到那么返回true
     */
    public boolean search(E e) {
        TreeNode<E> current = root;
        while (current != null) {
            if (e.compareTo(current.element) < 0)
                current = current.left;
            else if (e.compareTo(current.element) > 0)
                current = current.right;
            else
                return true;
        }
        return false;
    }

    @Override
    /**
     * Insert element e into the BST.
     * Return true if the element is inserted successfully.
     */
    public boolean insert(E e) {
        if (e == null)
            return false;

        if (root == null) {
            root = createNewNode(e);
        }
        else {
            // Locate the parent ndoe
            TreeNode<E> parent = null;
            TreeNode<E> current = root;

            while (current != null) {
                if (e.compareTo(current.element) < 0) {
                    parent = current;
                    current = current.left;
                }
                else if (e.compareTo(current.element) > 0) {
                    parent = current;
                    current = current.right;
                }
                else
                    return false; // 重复的节点不加入
            }

            if (e.compareTo(parent.element) < 0)
                parent.left = createNewNode(e);
            if (e.compareTo(parent.element) > 0)
                parent.right = createNewNode(e);
        }

        size++;
        return true;
    }

    @Override
    public boolean delete(E e) {
        TreeNode<E> current = root;
        TreeNode<E> parent = null;

        while (current != null) {
            if (e.compareTo(current.element) < 0) {
                parent = current;
                current = current.left;
            }
            else if (e.compareTo(current.element) > 0) {
                parent = current;
                current = current.right;
            }
            else {
                // Find the tree node and delete it

                // case 0: Current is the root node
                if (parent == null) {
					// 0-1. root node has no child nodes
					if  (current.left == null && current.right == null) {
						current = null;
					}

					// 0-2. root node has only left child
					if (current.left != null && current.right == null) {
						current = current.left;
					}

					// 0-3. root node has only right child
					if (current.left == null && current.right != null) {
						current = current.right;
					}
                }

                // case 1: current is leaf node
                if (current.right == null && current.left == null) {
                    if (e.compareTo(parent.element) < 0)
                        parent.left = null;
                    else
                        parent.right = null;
                }

                // case 2: current has only left node
                if (current.left != null && current.right == null) {
                    if (e.compareTo(parent.element) < 0) {
                        parent.left = current.left;
                    }
                    else {
                        parent.right = current.left;
                    }
                }

                // case 3: current has only right node
                if (current.left == null && current.right != null) {
                    if (e.compareTo(parent.element) < 0) {
                        parent.left = current.right;
                    }
                    else {
                        parent.right = current.right;
                    }
                }

                // case 4: current has both right and left nodes
                if (e.compareTo(parent.element) < 0) {
					TreeNode<E> min = current.right;
					TreeNode<E> minParent = current;
					while (min.left != null) {
						minParent = min;
						min = min.left;
					}
					
					minParent.left = min.right;
					min.right = current.right;
					min.left = current.left;
					parent.left = min;
				}
                else {
					TreeNode<E> min = current.left;
					TreeNode<E> minParent = current;
					while (min.left != null) {
						minParent = min;
						min = min.left;
					}
					minParent.left = min.right;
					min.right = current.right;
					min.left = current.left;
					parent.right = min;
                }

                size--;
                return true;
            }
        }

        return false;
    }

    @Override
    public int getSize() {
        return size;
    }

    protected TreeNode<E> createNewNode(E e) {
        return new TreeNode<>(e);
    }

    @Override
    /** 从root开始前序遍历 */
    public void inorder() {
        inorder(root);
    }

    /**
     * Inorder traversal from a subtree
     */
    protected void inorder(TreeNode<E> root) {
        if (root == null)
            return;

        inorder(root.left);
        System.out.println(root.element);
        inorder(root.right);
    }

    @Override
    /**
     * Preorder traversal from root
     */
    public void preorder() {
        preorder(root);
    }

    /**
     * Preorder traversal from a subtree
     * @param root
     */
    protected void preorder(TreeNode<E> root) {
        if (root == null)
            return;

        System.out.println(root.element);
        preorder(root.left);
        preorder(root.right);
    }

    @Override
    public void postorder() {
        postorder(root);
    }

    protected void postorder(TreeNode<E> root) {
        if (root == null)
            return;

        postorder(root.left);
        postorder(root.right);
        System.out.println(root.element);
    }

    @Override
    public Iterator<E> iterator() {
        return null;
    }

}
