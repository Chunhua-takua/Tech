
public class TestMyHashSet {
    public static void main(String[] args) {


        MySet<String> set = new MyHashSet<>();

        set.add("Smith");
        set.add("Anderson");
        set.add("Anderson");
        set.add("Lewis");
        set.add("Cook");
        set.add("Smith");

        System.out.println("Elements in set: " + set);
        System.out.println("Number of elements in set: " + set.size());
        System.out.println("Is Smith in set? " + set.contains("Smith"));

        set.remove("Smith");
        System.out.print("Names in set in uppercase: ");
        for (String s : set)
            System.out.print(s.toUpperCase() + " ");


    }
}
