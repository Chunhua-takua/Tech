class LazySingleton {
    /**
     * 使用synchronized解决线程安全问题
     * 类加载时不实例化，而是调用getInstance时，称为延迟加载技术
     * 在高并发情形下性能比较低
     */
    private static LazySingleton instance = null;

    /**
     * synchronized在高并发情形下性能比较低
     * @return
     */
    public synchronized LazySingleton getInstance() {
        if (instance == null) {
            instance = new LazySingleton();
        }
        return instance;
    }

}