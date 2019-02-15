class TreeNode<E> {
    protected E element;
    protected TreeNode<E> left;
    protected TreeNode<E> right;
    
	/**
		构造函数
		对象建立时JVM调用以初始化对象；一般函数是对象创建后，对象调用时才会执行；
		构造函数只在创建对象时调用；
		构造函数的名字要和类名一致；
		没有返回值类型。
	*/
    public TreeNode(E e) {
		System.out.println("e=", e);
        element = e;
    }
	
	/*public void printNode() {
		if (element != null)
			System.out.println(String.valueOf(element));
		else
			System.out.println("null");
	}*/
	
	public static boolean search(TreeNode<E> root, E element) {
	TreeNode<E> current = root;
	
	while (current != null) {
		if (element > current.element) {
			current = current.right;
		}
		else if (element < current.element)
			current = current.left;
		else
			return true;
	}
	return false;
    }
}