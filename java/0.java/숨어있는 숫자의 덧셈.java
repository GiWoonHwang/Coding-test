class Solution {
    public int solution(String my_string) {
        int answer = 0;
        String str = my_string.replaceAll("[^0-9]",""); // 0~9를 제외한 모든 문자를 ""로 치환한다.
        System.out.println(str);
        for(char ch : str.toCharArray()) { // 문자열을 하나씩 쪼개서 넣어준다
            answer += Character.getNumericValue(ch);
        }

        return answer;
    }
}