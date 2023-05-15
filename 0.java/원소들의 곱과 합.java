class Solution {
    public int solution(int[] num_list) {
        int answer = 0;

        int temp = 1;
        int temp1 = 0;
        for(int i=0; i<num_list.length; i++){
            temp *= num_list[i];
            temp1 += num_list[i];
        }

        answer = temp1*temp1 > temp ? 1 : 0;
        return answer;
    }
}