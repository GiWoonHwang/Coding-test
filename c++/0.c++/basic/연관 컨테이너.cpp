/*
연관 컨테이너(associate container)는 키(key)와 값(value)처럼 관련있는 데이터를 하나의 쌍으로 저장하는 컨테이너입니다.

키와 값을 이용한 연관 컨테이너는 요소들에 대한 빠른 접근을 제공해 줍니다.

하지만 연관 컨테이너는 삽입되는 요소의 위치를 지정할 수는 없습니다.

 

이러한 연관 컨테이너는 보통 균형 잡힌 이진 탐색 트리(balanced binary search tree)나 해시 테이블(hash table)을 이용하여 구현합니다.
*/

#include <string>
#include <iostream>
using namespace std;

/*
집합과 멀티집합

집합 컨테이너는 저장하는 데이터 그 자체를 키로 사용하는 단순한 연관 컨테이너다. 이 컨테이너는 벡터와 달리 오름차순으로 정렬된 위치에 요소를 삽입하므로 검색 속도가 매우 빠름
집합에서 키는 유일해야 하므로 키의 중복을 허용하지 않는다.
하지만 멀티집합은 키의 중복을 허용
*/
int arr[5] = {10, 20, 30, 40, 50}; // 배열 생성 및 초기화

set<int> st(arr, arr+3); // 배열의 일부 요소를 가지고 셋 컨테이너를 생성함.

cout << "현재 집합의 모든 요소는 다음과 같습니다." << endl;

copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));

cout << endl;

 

st.insert(60); // 요소의 추가

st.insert(70); // 요소의 추가

st.erase(20); // 요소의 삭제

cout << "현재 집합의 모든 요소는 다음과 같습니다." << endl;

copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));


/*
맵과 멀티맵

맵 컨테이너는 키와 값의 쌍으로 데이터를 관리하는 진정한 연관 컨테이너이다. 검색속도가 매우 빠르다.
*/
map<string, int> mp;

mp.insert(pair<string, int>("국어", 80)); // 익명의 pair 객체를 생성하여 추가함.

mp["수학"] = 100; // 첨자 연산자를 이용하여 추가함.

 

cout << "현재 맵의 모든 요소는 다음과 같습니다." << endl;

map<string, int>::iterator it;

for(it = mp.begin(); it != mp.end(); it++)

{

    cout << it->first << " : " << it->second << endl;

}