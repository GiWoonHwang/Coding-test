/*
우주여행을 하던 머쓱이는 엔진 고장으로 PROGRAMMERS-962 행성에 불시착하게 됐습니다. 입국심사에서 나이를 말해야 하는데, PROGRAMMERS-962 행성에서는 나이를 알파벳으로 말하고 있습니다. a는 0, b는 1, c는 2, ..., j는 9입니다. 예를 들어 23살은 cd, 51살은 fb로 표현합니다. 나이 age가 매개변수로 주어질 때 PROGRAMMER-962식 나이를 return하도록 solution 함수를 완성해주세요.

제한사항
age는 자연수입니다.
age ≤ 1,000
PROGRAMMERS-962 행성은 알파벳 소문자만 사용합니다.
입출력 예
age	result
23	"cd"
51	"fb"
100	"baa"
입출력 예 설명
입출력 예 #1

age가 23이므로 "cd"를 return합니다.
입출력 예 #2

age가 51이므로 "fb"를 return합니다.
입출력 예 #3

age가 100이므로 "baa"를 return합니다.
*/

// 알파벳이 0부터 시작하니까 배열에 넣고(배열도 0부터 시작) 반복문을 돌며 알파벳을 더한다. -> 라고 했지만 cpp은 다르다

#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(int age){
    string answer = "";
    string aage   = to_string(age); // 입력받은 숫자를 문자로 바꾼다. -> 반복문을 돌려야 하니까
    map<int, string> my_map; // key가 int, value가 string인 map
    for(int i =0; i< 10; i ++){ // 알파벳 a - j 는 0부터 9까지다
        
        // map 객체에 아스키 코드를 이용하여 key:value를 넣는다 i값(0-9)가 key, a-j가 value
        // 아스키 코드를 이용한 방식으로 'a' + 0 = a, 'a' + 1 = b 이렇게 된다.
        my_map[i] = 'a' + i; 
    }
    for(int i = 0; i<aage.length(); i++){ // 받아온 인수의 길이만큼 반복문을 돌면서
        
        // aage[i] = '2','3'이 나온다 (문자열인 숫자)
        // 문자열 - '0' == 정수로 변형해서 my_map에 키에 대한 값을 answer에 더해준다.
        answer += my_map[aage[i]-'0'];
        
    }

    return answer;
}