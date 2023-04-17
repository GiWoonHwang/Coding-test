/*
 * num1을 num2로 나눈 몫을 return 하라 
 */

class Solution {
    public int solution(int num1, int num2) {
        boolean val =(0 < num1 && num1 <= 100 && 0 < num2 && num1 <= 100); // 간단한 조건문으로 제한사항을 처리함
        int answer = 0;
        if(val){
            answer = num1 / num2;
        }else{
            answer = -1;
        }

        return answer;
    }
}