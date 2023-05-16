class Solution {
    public int[] solution(int start, int end) {
        int[] answer = new int[start - end + 1]; // 길이에 맞는 배열 선언
        for(int i =0; i <= start - end; i ++){
            answer[i] = start - i;
        }
        return answer;
    }
}
