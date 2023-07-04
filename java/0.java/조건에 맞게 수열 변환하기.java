import java.util.*;

class Solution {
    public int[] solution(int[] arr) {
        return Arrays.stream(arr).map(v -> v >=50 && v % 2 == 0 ?  v / 2 : v < 50 && v % 2 ==  1 ? v * 2 : v ).toArray();

    }
}