/*
 * 한 자를 가로 2cm 크기로 적으려고 하며, 편지를 가로로만 적을 때, 축하 문구 message를 적기 위해 필요한 편지지의 최소 가로길이를 return하라
 */

 class Solution {
    public int solution(String message) {
        int answer = 0;
        for(int i =0; i < message.length(); i++){
            answer += 1;
        }
        return answer * 2;
    }
}
