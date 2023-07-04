/*
 * num1 에서 num2 를 더한 값을 리턴하라
 */

 class Solution {
    public int solution(int num1, int num2) {
        int answer = 0;
        boolean val = (-50000 <= num1 && num1 <= 50000 && -50000 <= num2 && num2 <= 50000 );
        if(val){
            answer =  num1 + num2;
        }
        return answer;
    }
}