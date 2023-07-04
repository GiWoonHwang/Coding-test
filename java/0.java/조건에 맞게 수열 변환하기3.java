import java.util.stream.IntStream;

class Solution {
    public int[] solution(int[] arr, int k) {
        if(k%2 == 0){
            return IntStream.of(arr).map(i->i+k).toArray();
        }
        return IntStream.of(arr).map(i->i*k).toArray();
    }
}
