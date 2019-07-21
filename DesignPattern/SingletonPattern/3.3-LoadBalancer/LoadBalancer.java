import java.util.ArrayList;
import java.util.List;
import java.util.Random;

class LoadBalancer {
    // The only instance
    private static LoadBalancer instance = null;

    private List<String> serverList = null;

    private LoadBalancer() {
        serverList = new ArrayList<String>();
    }

    public static LoadBalancer getLoadBalancer() {
        if (instance == null) {
            instance = new LoadBalancer();
        }
        return instance;
    }

    // Add a server
    public void addServer(String server) {
        if (server != null) {
            serverList.add(server);
        }
    }

    // Remove a server
    public void removeServer(String server) {
        if (server != null) {
            serverList.remove(server);
        }
    }

    // Get a server using Random
    public String getServer() {
        Random random = new Random();
        int i = random.nextInt(serverList.size());
        return (String) serverList.get(i);
    }
}