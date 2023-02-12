/*
첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 <numer1, denom1, numer2, denom2 < 1,000
입출력 예
numer1	denom1	numer2	denom2	result
1	    2	    3	    4	    [5, 4]
9	    2	    1	    3	    [29, 6]
입출력 예 설명
입출력 예 #1

1 / 2 + 3 / 4 = 5 / 4입니다. 따라서 [5, 4]를 return 합니다.
입출력 예 #2

9 / 2 + 1 / 3 = 29 / 6입니다. 따라서 [29, 6]을 return 합니다.
*/


#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int denum = (denum1 * num2) + (denum2 * num1);
    int num = num1 * num2;

    for(int i = min(denum, num); i >= 2 ; i--) // 분수와 분모의 최대공약수를 구한다.
    {
        if(denum % i == 0 && num % i == 0) // 두 수의 공통된 약수중에 가장 큰 수
        {
            denum /= i;
            num /= i;
            break;
        }
    }
    answer.push_back(denum);
    answer.push_back(num);

    return answer;
}