/*
 양꼬치를 10인분 먹으면 음료를 하나 준다
 양꼬치 1인분 12,000원 음료수 2000원 이다.
 양꼬치 n개와 음료수 k개를 먹었다면 지불해야 하는 값을 return 하라
 */

class Solution {
    public int solution(int n, int k) {
        return n * 12000 + k * 2000 - (n / 10 * 2000);
    }
}
