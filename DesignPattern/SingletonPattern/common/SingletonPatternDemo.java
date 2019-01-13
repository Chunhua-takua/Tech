public class SingletonPatternDemo {
	public static void main(String[] args) {
		SingleObject instance = SingleObject.getInstance();
		instance.showMessage();
		
		// 构造函数是private，对象无法被实例化
		// SingleObject i = new SingleObject();
	}
}