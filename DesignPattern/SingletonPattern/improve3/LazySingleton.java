class LazySingleton {
    // volatile: 每个线程都可以修改这个变量
    private volatile static LazySingleton instance = null;

    private LazySingleton() {}

    /**
     * double-check locking
     * 双重检查锁定技术
     */
    public LazySingleton getInstance() {
        if (instance == null) {
            synchronized (LazySingleton.class) {
                if (instance == null) {
                    instance = new LazySingleton();
                }
                
            }
        }
        return instance;
    }
}