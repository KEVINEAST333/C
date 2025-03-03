package sword_point_offer;

import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

public class Test2 {
    public static void main(String[] args) {
        PriorityQueue<Integer> queue = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o1 - o2;
            }
        });
        queue.offer(1);
        queue.offer(4);
        queue.offer(2);
        queue.offer(3);
        queue.offer(5);
        System.out.println(queue.toString());
        Map<String,Integer> map = new HashMap<>();
        map.put("wang",1);
        System.out.println(map.put("wang",2));
        System.out.println(map.get("wang"));
    }
}
