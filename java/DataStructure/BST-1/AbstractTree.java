public  abstract class AbstractTree<E> implements Tree<E> {
    @Override
    public void inorder() {}
    
    @Override
    public void postorder() {}
    
    @Override
    public boolean isEmpty() {
        return getSize() == 0;
    }
}