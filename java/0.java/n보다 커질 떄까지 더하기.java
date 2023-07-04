/*
 * n보다 클 때 까지 배열의 요소를 더해라
 */

import java.util.Arrays;

class Solution {
    public int solution(int[] numbers, int n) {
        int answer = 0;
            for(int i =0; i < numbers.length; i++){
                if(answer > n){
                    break;
                }else{
                answer += numbers[i];
                }
            }
        
        return answer;
    }
}

// 다른사람의 좋은 풀이가 있어 가져왔다
class Solution2 {
    public int solution(int[] numbers, int n) {
        return Arrays.stream(numbers).reduce(0,(acc,cur)-> n > acc ? acc + cur : acc);

    }
}