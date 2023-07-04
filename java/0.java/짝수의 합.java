/*
 정수 n이 주어질 때, n이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.
 */

 class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i=2; i<=n; i+= 2){ // 짝수만 구하면 되니 2부터 시작해서 2씩 더한다.
            answer += i;
        }
        return answer;
    }
}