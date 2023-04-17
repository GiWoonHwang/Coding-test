/*
 * 202년 기준 40살인 선생님의 태어난 연도를 구하라
 */

class Solution {
    public int solution(int age) {
        boolean val = (0 < age && age <= 120);
        int answer = 0;
        if(val){
            answer = 2022 - age+1;
        }
        return answer;
    }
}