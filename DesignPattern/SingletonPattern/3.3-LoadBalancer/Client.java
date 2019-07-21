class Client {
    public static void main(String[] args) {
        // Make four objects from LoadBalancer class
        LoadBalancer balancer1 = LoadBalancer.getLoadBalancer();
        LoadBalancer balancer2 = LoadBalancer.getLoadBalancer();
        LoadBalancer balancer3 = LoadBalancer.getLoadBalancer();
        LoadBalancer balancer4 = LoadBalancer.getLoadBalancer();

        if (balancer1 == balancer2 && balancer2 == balancer3 && balancer3 == balancer4) {
            System.out.println("The same loader balancer");
        }

        // Add a server
        balancer1.addServer("server1");
        balancer1.addServer("server2");
        balancer1.addServer("server3");
        balancer1.addServer("server4");

        // Simulate distributing requests to servers
        for (int i = 0; i < 10; i++) {
            String server = balancer1.getServer();
            System.out.println("Distributed to server: " + server);
        }
    }
}