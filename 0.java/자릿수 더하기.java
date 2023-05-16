class Solution {
    public int solution(int n) {
        int answer = 0;
        while(n > 0){ // n = 1234
            answer += n%10; // 4가 더해진다
            n /= 10; // 123 이 됨
        }
        return answer; // 뒤부터 더해지는 최종 값이 나옴
    }
}