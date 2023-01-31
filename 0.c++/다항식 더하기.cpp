/*
한 개 이상의 항의 합으로 이루어진 식을 다항식이라고 합니다. 다항식을 계산할 때는 동류항끼리 계산해 정리합니다. 덧셈으로 이루어진 다항식 polynomial이 매개변수로 주어질 때, 동류항끼리 더한 결괏값을 문자열로 return 하도록 solution 함수를 완성해보세요. 같은 식이라면 가장 짧은 수식을 return 합니다.

제한사항
0 < polynomial에 있는 수 < 100

polynomial에 변수는 'x'만 존재합니다.

polynomial은 0부터 9까지의 정수, 공백, ‘x’, ‘+'로 이루어져 있습니다.

항과 연산기호 사이에는 항상 공백이 존재합니다.

공백은 연속되지 않으며 시작이나 끝에는 공백이 없습니다.

하나의 항에서 변수가 숫자 앞에 오는 경우는 없습니다.

" + 3xx + + x7 + "와 같은 잘못된 입력은 주어지지 않습니다.

"012x + 001"처럼 0을 제외하고는 0으로 시작하는 수는 없습니다.

문자와 숫자 사이의 곱하기는 생략합니다.

polynomial에는 일차 항과 상수항만 존재합니다.

계수 1은 생략합니다.

결괏값에 상수항은 마지막에 둡니다.

0 < polynomial의 길이 < 50

입출력 예
polynomial	    result
"3x + 7 + x"	"4x + 7"
"x + x + x"	    "3x"
입출력 예 설명
입출력 예 #1

"3x + 7 + x"에서 동류항끼리 더하면 "4x + 7"입니다.
입출력 예 #2

"x + x + x"에서 동류항끼리 더하면 "3x"입니다.
*/
// 공백이 들어간 문자열을 추출하기 좋음, ss을 받아 temp에 하나씩 저장한다. 마지막 인수는 제한자(delimiter) 로 이 문자에 도달시 추출이 중단된다. 이 때, 이 문자는 s 에 기록되지는 않지만 스트림에서 사라지게 된다.

#include <string>
#include <sstream>

using namespace std;

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string p) {
    stringstream ss(p);
    string temp;
    int xsum = 0, nsum = 0;

    // 공백이 들어간 문자열을 추출하기 좋음, ss을 받아 temp에 하나씩 저장한다. 마지막 인수는 제한자(delimiter) 로 이 문자에 도달시 추출이 중단된다. 이 때, 이 문자는 s 에 기록되지는 않지만 스트림에서 사라지게 된다.
    while (getline(ss, temp, ' ')) {
        
        if (temp.back() == 'x') {
            
            if (temp.size() == 1){
                cout << "temp " << temp << endl;
                xsum++;
            }             
            else{
                cout << "temp?? " << temp << endl;
                // stoi: 숫자가 아닌 문자를 만나뎜 중단한다. ex) 3x -> 3, x(중단)
                xsum += stoi(string(temp.begin(), temp.end()));
                
            } 
        }
        else if(temp!="+") nsum += stoi(temp); // 상수면 더해준다
    }

    if (xsum == 0) return to_string(nsum); // 다항식에 x가 존재하지 않으면 상수만 리턴한다.
    
    else { // x값이 존재한다면
        string xres;
        if (xsum == 1) xres = "x";
        else xres = to_string(xsum) + "x";
        if (nsum == 0) return xres;
        else return xres + " + " + to_string(nsum);
    }
}

