package test;

import hashmap.MyHashMap;
import hashmap.MyMap;

public class TestMyHashMap {
    public static void main(String[] args) {
        MyMap<String, Integer> map = new MyHashMap<>();

        map.put("Smith", 30);

        System.out.println("Entries in map: " + map);
    }
}
