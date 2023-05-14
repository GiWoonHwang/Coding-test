/*
 * 두 숫자의 곱이 n인 순서쌍의 개수를 구하라
 */

 import java.util.stream.IntStream;

class Solution {
    public int solution(int n) {
        return (int) IntStream.rangeClosed(1, n).filter(i -> n % i == 0).count();
    }
}
