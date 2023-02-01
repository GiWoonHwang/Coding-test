/*
숫자와 "Z"가 공백으로 구분되어 담긴 문자열이 주어집니다. 문자열에 있는 숫자를 차례대로 더하려고 합니다. 이 때 "Z"가 나오면 바로 전에 더했던 숫자를 뺀다는 뜻입니다. 숫자와 "Z"로 이루어진 문자열 s가 주어질 때, 머쓱이가 구한 값을 return 하도록 solution 함수를 완성해보세요.

제한사항
1 ≤ s의 길이 ≤ 200
-1,000 < s의 원소 중 숫자 < 1,000
s는 숫자, "Z", 공백으로 이루어져 있습니다.
s에 있는 숫자와 "Z"는 서로 공백으로 구분됩니다.
연속된 공백은 주어지지 않습니다.
0을 제외하고는 0으로 시작하는 숫자는 없습니다.
s는 "Z"로 시작하지 않습니다.
s의 시작과 끝에는 공백이 없습니다.
"Z"가 연속해서 나오는 경우는 없습니다.
입출력 예
s	            result
"1 2 Z 3"	    4
"10 20 30 40"	100
"10 Z 20 Z 1"	1
"10 Z 20 Z"	0
"-1 -2 -3 Z"	-3
입출력 예 설명
입출력 예 #1

본문과 동일합니다.
입출력 예 #2

10 + 20 + 30 + 40 = 100을 return 합니다.
입출력 예 #3

"10 Z 20 Z 1"에서 10 다음 Z, 20 다음 Z로 10, 20이 지워지고 1만 더하여 1을 return 합니다.
입출력 예 #4, #5

*/

//z의 뒤 숫자를 빼주기 때문에 뒤의 숫자와 z를 합쳐 반복문을 돈다. 조건문을 걸어 z가 포함되지 않은 값들만 더해준다.
// 스택을 이용해 z를 만나면 가장 최근의 값을 스택에서 꺼낸다. 그 후 스택에 있는 값들을 전부 더해준다.

#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s){
    int answer = 0;

    stringstream ss;
    ss.str(s);

    stack<int> st; // 스택을 이용한 구현

    int t = 0;
    string tmp = "0";

    while(ss >> tmp){ // ss에값 들을 tmp에 하나씩 줌
        if(tmp == "Z"){ // z를 만나면 스택의 값 하나를 뺴줌 == z바로 뒤의 값을 빼준다.
            st.pop();
        }
        else{
            t = stoi(tmp); // 정수를 실수로 변환
            st.push(t); // 스택에 집어넣는다.
        }
    }

    while (!st.empty()){ 
        answer += st.top(); // 스택 최상단의 값을 더해줌
        st.pop(); // 최상단값을 바꾸기 위해 pop으로 하나씩 꺼냄
    }
    return answer;
    
    
    


}