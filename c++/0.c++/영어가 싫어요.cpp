/*
영어가 싫은 머쓱이는 영어로 표기되어있는 숫자를 수로 바꾸려고 합니다. 문자열 numbers가 매개변수로 주어질 때, numbers를 정수로 바꿔 return 하도록 solution 함수를 완성해 주세요.

제한사항
numbers는 소문자로만 구성되어 있습니다.
numbers는 "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" 들이 공백 없이 조합되어 있습니다.
1 ≤ numbers의 길이 ≤ 50
"zero"는 numbers의 맨 앞에 올 수 없습니다.
입출력 예
numbers	                                result
"onetwothreefourfivesixseveneightnine"	123456789
"onefourzerosixseven"	                14067
입출력 예 설명
입출력 예 #1

"onetwothreefourfivesixseveneightnine"를 숫자로 바꾼 123456789를 return합니다.
입출력 예 #1

"onefourzerosixseven"를 숫자로 바꾼 14067를 return합니다.
*/

#include <string>
#include <vector>

using namespace std;

// numbers = "onefourzerosixseven"
long long solution(string numbers){ // longlong은 아주 긴 정수 자료형이다.
    long long answer = 0;
    vector<string> num = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    int tmp;
    // i값과 num 값은 같다. i = 0 = zeor
    // num의 길이만큼 반복한다 즉 zero 부터 nine 까지
    for (int i=0; i<num.size(); i++){
        // 만약 numbers에 num에 해당하는 문자열이 존재한다면. tmp는 존재하는 문자열의 위치 인덱스가 들어감
        while((tmp = numbers.find(num[i])) != string:: npos){ // string:: npos 은 찾는 문자열이 없을 때 반환하는 값, != 이니까 있으면 ?, find는 인덱스를 반환
            
            // 문자열.replace(대체할문자열의시작위치, 대체할문자열의길이, 새로운문자열);
            // 전달된 시작 위치부터 문자열의 길이만큼을 제거한 후에, 새로운 문자열을 삽입함.        
            // tmp = 7 왜냐 zeor가 인덱스 7번부터 존재하니까, num[i].size == 'zero'만큼 i == zero로 바꿔주자
            numbers.replace(tmp, num[i].size(), to_string(i));
        }
    }
    // 문자열로 되어 있는 숫자를 정수로 바꾼다.
    answer = stoll(numbers);
    return answer;


}