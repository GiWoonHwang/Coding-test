/*
 * 피자 조각 수 slice와 피자 먹는 사람의 수 n이 주어질 때 최소 한 조각 이상 피자를 먹으려면 최소 몇판의 피자를 시켜야 하는가?
 */

class Solution {
    public int solution(int slice, int n) {
        return n % slice > 0 ? n/slice +1 : n /slice;
    }
}
