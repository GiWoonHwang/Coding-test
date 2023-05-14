class Solution {
    public String solution(String my_string) {
        // 문자열을 더하거나 연결할때 StringBuilder가 메모리 측면에서 유리허다.
        return new StringBuilder(my_string).reverse().toString();
    }
}