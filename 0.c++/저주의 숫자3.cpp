/*
3x 마을 사람들은 3을 저주의 숫자라고 생각하기 때문에 3의 배수와 숫자 3을 사용하지 않습니다. 3x 마을 사람들의 숫자는 다음과 같습니다.

10진법	3x 마을에서 쓰는 숫자	10진법	3x 마을에서 쓰는 숫자
1	1	6	8
2	2	7	10
3	4	8	11
4	5	9	14
5	7	10	16
정수 n이 매개변수로 주어질 때, n을 3x 마을에서 사용하는 숫자로 바꿔 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 100
입출력 예
n	        result
15	        25
40	        76
입출력 예 설명
입출력 예 #1

15를 3x 마을의 숫자로 변환하면 25입니다.
입출력 예 #2

40을 3x 마을의 숫자로 변환하면 76입니다.
*/

// 3마을에서 쓰는 숫자는 일반적인 숫자와 같이 증가하면서 3이 들어가는 수에 해당 될 때 1씩 커진다 따라서 변수를 하나 만들어 n의 범위만큼 증가시킨 후 특정 수(3)을 만나면 추가적으로 증가시킨다


#include <string>
#include <vector>

using namespace std;

// 3의 배수는 아니지만 3이 들어있는 값 찾기 ex 13
bool includeThree(int n){
    while (n != 0 )
    {
        if(n % 10 == 3) return true; // 15 % 10 == 5

        
        n = n / 10; 
    }
    return false;
    
}

int solution(int n){
    int answer = 0;

    for(int i =1; i <= n; i++){
        answer += 1;

        // 3의 배수인값 찾기
        while(answer % 3 == 0 || includeThree(answer)){
            answer += 1;
        }

    }
    return answer;
}