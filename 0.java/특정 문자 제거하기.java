/*
 * 특정 문자를 제거한 후 return 하라.
 */

class Solution {
    public String solution(String my_string, String letter) {
        String answer = "";
        answer = my_string.replace(letter, "");
        return answer;
    }
}
