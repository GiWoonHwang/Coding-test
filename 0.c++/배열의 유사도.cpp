/*

1 ≤ s1, s2의 길이 ≤ 100
1 ≤ s1, s2의 원소의 길이 ≤ 10
s1과 s2의 원소는 알파벳 소문자로만 이루어져 있습니다
s1과 s2는 각각 중복된 원소를 갖지 않습니다.
입출력 예
s1	            s2	                        result
["a", "b", "c"]	["com", "b", "d", "p", "c"]	2
["n", "omg"]	["m", "dot"]	            0
입출력 예 설명
입출력 예 #1

"b"와 "c"가 같으므로 2를 return합니다.
입출력 예 #2

같은 원소가 없으므로 0을 return합니다.
*/

#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> s1, vector<string> s2){
    int answer = 0;
    set<string>s3(s1.begin(), s1.end()); // 원소를 중복없이 오름차순으로 정렬
    vector<string>s4(s3.begin(),s3.end()); // 계산하기 쉽게 다시 벡터로 변환

    set<string>s5(s2.begin(),s2.end());
    vector<string>s6(s5.begin(),s5.end());
    s1 = s4; 
    s2 = s6;
    for(int i=0; i<s1.size(); i++){ // size는 length와 다르게 string 객체가 메모리에서 실제 사용하고 있는 크기를 반환한다.
        for(int j=0; j<s2.size(); j++){
            if(s1[i] == s2[j]){
                answer ++;
            }
        }

    }

    return answer;
    }