/*
 * 뒤에서부터 n개의 문자열을 출력하라
 */

class Solution {
    public String solution(String my_string, int n) {
        String answer = my_string.substring(my_string.length()-n);
        return answer;
    }
}
