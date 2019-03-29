package test;

import hashmap.MyHashMap;
import hashmap.MyMap;

public class TestMyHashMap {
    public static void main(String[] args) {
        MyMap<String, Integer> map = new MyHashMap<>();

        map.put("Smith", 30);
        map.put("Anderson", 31);
        map.put("Lewis", 29);
        map.put("Cook", 29);
        map.put("Smith", 65);
        System.out.println("Size: " + map.size());

        System.out.println("Entries in map: " + map);

        System.out.println("The age for Lewis is " + map.get("Lewis"));
        System.out.println("The age for Smith is " + map.get("Smith"));

        System.out.println("Is Smith in the map? " + map.containsKey("Smith"));
        System.out.println("Is 33 in the map? " + map.containsValue(33));
        System.out.println("Is 65 in the map? " + map.containsValue(65));

        map.remove("Smith");
        System.out.println("After Smith removed: " + map);
        System.out.println("Size: " + map.size());
    }
}
