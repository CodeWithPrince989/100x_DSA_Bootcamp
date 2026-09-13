import java.util.HashMap;
import java.util.Map;

public class hashmap {
    public static void main(String args[]) {
        // Country(key), Populaion(value)
        HashMap<String, Integer> map = new HashMap<>();

        // Insertion
        map.put("India", 120);
        map.put("US", 30);
        map.put("China", 150);
        map.put("America", 50);

        System.out.println(map);

        map.put("China", 180);
        System.out.println(map);

        // Seach Operation
        // if(map.containsKey("China")){
        // System.out.println("Key is present in the map");
        // }else{
        // System.err.println("key is not present in the map");
        // }

        System.out.println(map.get("China")); // Key exists
        System.out.println(map.get("Indonesia")); // Key doesn't exists --> Null

        // Iteration in HashMap
        for (Map.Entry<String, Integer> e : map.entrySet()) {
            System.out.println(e.getKey());
            System.out.println(e.getValue());
        }

        Set<String> keys = map.keySet();
        for(String key : keys){
            System.out.println(keys+ " "+ map.get(key));
        }
        
        map.remove("China");
        System.out.println(map);

    }
}
