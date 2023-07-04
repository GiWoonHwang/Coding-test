/*
 * 불특정한 입력값을 변환하고자 하는 경우, 정규식을 사용할 수 있는 replaceAll을 더 사용한다.
 */
class Solution {
    public String solution(String my_string) {
        return my_string.replaceAll("a|e|i|o|u", "");
    }
}
