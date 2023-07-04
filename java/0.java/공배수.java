/*
 n,m의 공배수라면 1을 아니라면 0을 리턴하라
 */

 class Solution {
    public int solution(int number, int n, int m) {
        if(number % n == 0 && number % m == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}