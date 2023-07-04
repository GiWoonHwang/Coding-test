/*
 배열 요소를 곱해 만들 수 있는 최댓값을 return 하라
 */

import java.util.*;

class Solution {
    public int solution(int[] numbers) {
        Arrays.sort(numbers);
        return numbers[numbers.length -1]*numbers[numbers.length-2];
    }
}
