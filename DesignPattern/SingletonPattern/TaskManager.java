/**
 * Singleton pattern
 * 一个类只有一个实例，且自行实例化并向整个系统提供这个实例。这个类称为单例类，提供全局访问方法
 * 单例模式示例
 * OS中的资源管理器不论启动多少次都只显示一个窗口
 */

class TaskManager {
	// static 保证系统中只有一个实例
    private static TaskManager tm = null;

    // 构造方法为private，保证外部无法调用构造方法新建实例
    private TaskManager {
    }

	// public 保证外部可以得到实例
	// static 保证不需要实例化这个类就可以调用实例
    public static getInstance() {
        // 并发时，多个线程在此处判断tm == null为true
        // 于是会new多个TaskManager对象，违背了单例模式的初衷
        if (tm == null)
            tm = new TaskManager();
        return tm;
    }

	// 其他方法
	public void displayProcesses() {}

	public void displayServices() {}
        
}
