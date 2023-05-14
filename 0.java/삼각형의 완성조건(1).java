/*
 * 가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 한다.
 * 세 변으로 삼각형을 만들 수 있다면 1, 만들 수 없다면 2를 return하라
 */

 import java.util.Arrays;

class Solution {
    public int solution(int[] sides) {
        int answer = 0;

        Arrays.sort(sides);
        
        return sides[2] >= sides[0] + sides[1] ? 2 : 1;
    }
}
