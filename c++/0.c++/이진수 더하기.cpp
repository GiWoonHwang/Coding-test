/*
이진수를 의미하는 두 개의 문자열 bin1과 bin2가 매개변수로 주어질 때, 두 이진수의 합을 return하도록 solution 함수를 완성해주세요.

제한사항
return 값은 이진수를 의미하는 문자열입니다.
1 ≤ bin1, bin2의 길이 ≤ 10
bin1과 bin2는 0과 1로만 이루어져 있습니다.
bin1과 bin2는 "0"을 제외하고 0으로 시작하지 않습니다.
입출력 예
bin1	    bin2	result
"10"	    "11"	"101"
"1001"	    "1111"	"11000"
입출력 예 설명
입출력 예 #1

10 + 11 = 101 이므로 "101" 을 return합니다.
입출력 예 #2

1001 + 1111 = 11000 이므로 "11000"을 return합니다.
*/

#include <string>
#include <vector>
#include <bitset>
using namespace std;


// 비트 세트의 내용을 to_ulong, unsigned =>  전체 비트를 unsigned long / unsigned long long의 값으로 바꿔준다
// 25일 다시보기
string solution(string bin1, string bin2){   

    auto tmp = bitset<32>(bitset<32>(bin1).to_ulong() + bitset<32>(bin2).to_ulong()).to_string(); // 비트로 바꿔서 계산 후 => to_string 근데 왜 32비트로 바꾸는지 모르겠다.    

    int ind = 0;

    // 이부분은 이해가 잘 안된다.. 지금의 나는 해결할 수 없는걸까.. 갑자기 우울하다 ..
    while(tmp[ind] == '0')
    {
        ind ++;
    }
    if(ind == tmp.size())
    {
        ind --;
    }
    return tmp.substr(ind);
}