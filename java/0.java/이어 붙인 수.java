class Solution {
    public int solution(int[] num_list) {
        String jjaksu = "";
        String holsu = "";

        for(int num : num_list) {
            if(num % 2 == 0) {
                jjaksu += num + "";
            } else {
                holsu += num + "";
            }
        }

        return Integer.parseInt(jjaksu) + Integer.parseInt(holsu);
    }
}