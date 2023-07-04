/*
덧셈, 뺄셈 수식들이 'X [연산자] Y = Z' 형태로 들어있는 문자열 배열 quiz가 매개변수로 주어집니다. 수식이 옳다면 "O"를 틀리다면 "X"를 순서대로 담은 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
연산 기호와 숫자 사이는 항상 하나의 공백이 존재합니다. 단 음수를 표시하는 마이너스 기호와 숫자 사이에는 공백이 존재하지 않습니다.
1 ≤ quiz의 길이 ≤ 10
X, Y, Z는 각각 0부터 9까지 숫자로 이루어진 정수를 의미하며, 각 숫자의 맨 앞에 마이너스 기호가 하나 있을 수 있고 이는 음수를 의미합니다.
X, Y, Z는 0을 제외하고는 0으로 시작하지 않습니다.
-10,000 ≤ X, Y ≤ 10,000
-20,000 ≤ Z ≤ 20,000
[연산자]는 + 와 - 중 하나입니다.
입출력 예
quiz	                                                    result
["3 - 4 = -3", "5 + 6 = 11"]	                            ["X", "O"]
["19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2"]	["O", "O", "X", "O"]
입출력 예 설명
입출력 예 #1

3 - 4 = -3 은 틀린 수식이므로 "X", 5 + 6 = 11 은 옳은 수식이므로 "O" 입니다. 따라서 ["X", "O"]를 return합니다.
입출력 예 #2

19 - 6 = 13 은 옳은 수식이므로 "O", 5 + 66 = 71 은 옳은 수식이므로 "O", 5 - 15 = 63 은 틀린 수식이므로 "X", 3 - 1 = 2는 옳은 수식이므로 "O" 따라서 ["O", "O", "X", "O"]를 return합니다.
*/

#include <string>
#include <vector>
#include <sstream> // 특히 "이름 날짜 내용"과 같은 문자열로 한 줄의 데이터로 들어오면 각각 이름, 날짜, 내용등으로 파싱해서 사용하기 위해 많이 활용
#include <iostream> // 사용자와 프로그램 사이의 입출력을 담당하는 수단

using namespace std;

vector<string> solution(vector<string> quiz){
    vector<string> answer;
    string str_buf="", op;  // op를 여기에 왜 선언하는지 모르겠음
    int order = 0;
    int num1, num2, res; // 값을 주지 않고 연달아 선언하면 초기값은 뭘까 ?? 
    for(auto s : quiz){
        stringstream ss(s); // 입력받은 문자열을 일단 저장한다.
        ss.str(s); // 차곡차곡 들어가서 반복문이 가능하게 해준다 ?? -> 추가적인 공부가 필요함
        order = 0;
        
        while(ss>> str_buf)
        {
                /*
                stoi = string to int

                stof = string to float

                stol = string to long

                stod = string to double
                */
            if(order == 0)
                num1 = stoi(str_buf);
            else if(order == 1 )
                op = str_buf;
            else if(order == 2)
                num2 = stoi(str_buf);
            else if(order == 4)
                res = stoi(str_buf);
            
            order++;
        }

        if(op == "-"){
            if((num1 - num2) == res)
                answer.push_back("0");
            else
                answer.push_back("X");
        }
        else{
            if((num1 + num2) == res)
                answer.push_back("0");
            else
                answer.push_back("x");
        }

    }
    return answer; 
}