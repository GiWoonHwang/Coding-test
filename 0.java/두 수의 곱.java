/*
 * num1과 num2 곱한 값을 return 하라
 */

class Solution {
    public int solution(int num1, int num2) {
        int answer = 0;
        boolean val = (0 <= num1 && num1 <= 100 && 0 <= num2 && num2 <= 100);
        if(val){
        answer = num1 * num2;
        }
        return answer;
    }
}