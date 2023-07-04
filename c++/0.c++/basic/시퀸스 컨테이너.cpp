/*
데이터를 선현으로 저장하며, 특별한 제약이나 규칙이 없는 가장 일반적인 컨테이너, 삽입된 요소 순서가 그대로 유지된다.

요구사항
1. 모든 요소가 직선 순서대로 배치되어 있어야 한다.
2. 반복자가 순방향 반복자
3. 명확한 순서를 가지므로 특정 위치를 참조하는 연산이 가능해야 한다.
*/

/*
벡터
벡터 컨테이너는 동적 베열의 클래스 템플릿 표현이라 할 수 있다. 요소가 추가되거나  삭제될 때마다 자동으로 메모리를 재할당
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> vc = {10, 20, 30}; // vector 객체의 선언 및 초기화

cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;

 

vc.push_back(40);              // vector 요소의 추가

cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;

cout << "현재 벡터의 네 번째 요소는 " << vc[3] << "입니다." << endl;

 

cout << "현재 벡터의 모든 요소는 다음과 같습니다 :" << endl;

copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));


/*
데큐
컨테이너 양 끝에서 빠르게 요소를 삽입하거나 삭제할 수 있다.
벡터와 마찬가지로 임의 접근과 동적 크기 할당의 장점을 가진다.
*/
deque<int> dq = {20}; // deque 객체의 선언 및 초기화

dq.push_back(30);     // 요소의 후방 삽입

dq.push_front(10);    // 요소의 전방 삽입

 

cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" << endl;

copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));

cout << endl << "현재 데큐의 첫 번째 요소는 " << dq.front() << "입니다." << endl;

 

dq.pop_front();       // 요소의 전방 삭제

cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" << endl;

copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));


/*
리스트 컨테이너는 이중 연결 리스트의 클래스 템플릿 표현이라 할 수 있다. 이 컨테이너는 모든 요소에서 양방향 접근, 빠른 삽입과 삭제를 할 수 있지만 임의 접근은 할 수 없다.
*/

list<int> ls = {1, 2, 2, 3, 4, 3, 5, 5}; // list 객체의 선언 및 초기화

// ls.sort(); // 1, 2, 3, 4, 5

ls.unique();  // 1, 2, 3, 4, 3, 5

cout << "현재 리스트의 모든 요소는 다음과 같습니다 :" << endl;

copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));


/*
순방향 리스트
역방향으로 접근할 수 없다.
*/
forward_list<int> fls01 = {10, 20, 400, 30}; // forward_list 객체의 선언 및 초기화

forward_list<int> fls02 = {40, 50};

forward_list<int>::iterator itr;

 

fls01.remove(400);              // 값이 400인 모든 요소를 삭제함.

cout << "현재 순방향 리스트의 모든 요소는 다음과 같습니다 :" << endl;

copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));

cout << endl;

 

itr = fls01.begin();            // fls01의 첫 번째 요소를 가리키도록 반복자를 초기화함.

fls01.splice_after(itr, fls02); // fls02의 모든 요소를 fls01의 첫 번째 요소 다음에 삽입함.

cout << "fls01 : ";

copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));

cout << endl << "fls02 : ";

copy(fls02.begin(), fls02.end(), ostream_iterator<int>(cout, " "));