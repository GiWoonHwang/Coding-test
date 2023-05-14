import java.util.stream.IntStream;
import java.util.Arrays;


class Solution {
    public int[] solution(int[] num_list) {
        return IntStream.of( (int) Arrays.stream(num_list).filter(v-> v % 2 == 0).count(), (int) Arrays.stream(num_list).filter(v-> v % 2 ==1).count()).toArray();   }
}
