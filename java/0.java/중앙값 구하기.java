/*
 * 배열의 중앙값을 구하라.
 */

import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        Arrays.sort(array);
        int answer = array.length / 2;
        return array[answer];
    }
}
