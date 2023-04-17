/*
 정수 배열 numbers가 매개변수로 주어진다
 numbers의 원소 평균값을 return 하라
 */

 class Solution {
    public double solution(int[] numbers) {
        double answer = 0;
        int sum = 0;
        for(int i: numbers){
            sum += i;
        }
        answer = sum/(double)numbers.length;
        return answer;
    }
}
