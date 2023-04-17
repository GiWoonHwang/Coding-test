/*
 * num1과 num2 나눈 값에 1000을 곱한 후 정수 부분을 return 하라
 */

 class Solution {
    public int solution(int num1, int num2) {
        double answer = 0;
        boolean val = (0 <= num1 && num1 <= 100 && 0 <= num2 && num2 <= 100);
        if(val){
        answer =  (double) num1 / (double) num2;
        }
        return (int) (answer * 1000);
    }
}
