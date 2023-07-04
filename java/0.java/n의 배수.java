/*
 n의 배수인지를 판단해 1 또는 0 을 리턴하라
 */

 class Solution {
    public int solution(int num, int n) {
        return num % n == 0 ? 1 : 0;
    }
}
