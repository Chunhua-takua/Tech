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
                parent.left = new TreeNode<>(e);
            if (e.compareTo(parent.element) > 0)
                parent.right = new TreeNode<>(e);
        }

        size++;
        return true;
    }

    @Override
    public boolean delete(E e) {
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
    public Iterator<E> iterator() {
        return null;
    }
}