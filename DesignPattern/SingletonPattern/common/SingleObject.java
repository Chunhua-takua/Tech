public class SingleObject {
	private static SingleObject instance = new SingleObject();
	
	// 让构造函数为私有，该类就不会被实例化
	private SingleObject() {}
	
	public static SingleObject getInstance() {
		return instance;
	}
	
	public void showMessage() {
		System.out.println("Hello world.");
	}
}