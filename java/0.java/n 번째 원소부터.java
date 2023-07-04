/*
 n번 째 원소부터 마지막 원소까지 모든 원소를 담은 리스트를 리턴하라
 */

import java.util.*;

class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = Arrays.copyOfRange(num_list, n-1, num_list.length);
        return answer;
    }
}
