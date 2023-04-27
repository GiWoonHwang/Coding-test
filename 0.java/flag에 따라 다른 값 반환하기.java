/*
 flag에따라 a + b 또는 a - b 를 리턴하라
 */

class Solution {
    public int solution(int a, int b, boolean flag) {
        return flag == true ? a + b : a - b;
    }
}
