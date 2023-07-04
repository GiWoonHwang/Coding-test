/*
문자열 s가 매개변수로 주어집니다. s에서 한 번만 등장하는 문자를 사전 순으로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요. 한 번만 등장하는 문자가 없을 경우 빈 문자열을 return 합니다.

제한사항
0 < s의 길이 < 1,000
s는 소문자로만 이루어져 있습니다.
입출력 예
s	            result
"abcabcadc"	    "d"
"abdc"	        "abcd"
"hello"	        "eho"
입출력 예 설명
입출력 예 #1

"abcabcadc"에서 하나만 등장하는 문자는 "d"입니다.
입출력 예 #2

"abdc"에서 모든 문자가 한 번씩 등장하므로 사전 순으로 정렬한 "abcd"를 return 합니다.
입출력 예 #3

"hello"에서 한 번씩 등장한 문자는 "heo"이고 이를 사전 순으로 정렬한 "eho"를 return 합니다.
*/

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s){
    string answer = "";

    /*
    map은 각 노드가 key와 value 쌍으로 이루어진 트리입니다.  특히, 중복을 허용하지 않습니다.

    따라서 map은 first, second가 있는 pair 객체로 저장되는 데 first- key로 second- value로 저장됩니다. 

    C++의 map의 내부 구현은 검색, 삽입, 삭제가 O(logn) 인 레드블랙트리로 구성되어 있습니다.
    */
   map<char, int>m;
   for(const auto v : s){
    m[v]++;

   }
   for(const auto& v : m){
    // &, *의 특성이 무엇입니까. 복사가 되지않고 주소를 가리키거나 참조를 하는것이죠. 네 맞습니다. 복사가 아닌 것입니다.
    if(v.second == 1){
        answer.push_back(v.first);
    }
   }
   return answer;

}