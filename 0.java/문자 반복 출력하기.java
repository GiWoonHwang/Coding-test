/*
 * 알아두면 좋은 내용
 * StringBuilder
 * String은 소위 불변 객체이다. 덧셈등 연산을 하게 되면, 새로운 String을 생성하여 메모리 할당과 해제를 반복하기 때문에 성능적으로 좋지 않다.
 * StringBuilder를 사용하면 새로운 객체를 생성하는 것이 아닌, 기존의 데이터를더하는 방식이기 때문에 기존의 속도도 빠르며 상대적으로 부하가 덜하다.
 */

class Solution {
    public String solution(String my_string, int n) {
        String answer = "";
        String[] str = my_string.split("");
        for(int i = 0; i < my_string.length(); i ++){
            answer += str[i].repeat(n);
        }
        return answer;
    }
}
