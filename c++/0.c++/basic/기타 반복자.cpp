/*
iterator 헤더 파일
STL은 iterator 헤더 파일을 통해 미리 정의된 몇 가지 반복자를 제공합니다.

이 헤더 파일은 미리 정의된 반복자뿐만 아니라 스트림 반복자, 반복자의 원형 그리고 여러 지원 템플릿을 포함하고 있습니다.

스트림 반복자(stream iterator)
스트림 반복자(stream iterator)는 반복자 연산을 통해 알고리즘이 입출력 스트림에 보다 쉽게 접근할 수 있도록 해줍니다.

이때 STL은 입력과 출력 스트림을 각각 입력과 출력 반복자로 변환하는 방식으로 제공합니다.

입력 스트림 반복자는 istream_iterator, 출력 스트림 반복자는 ostream_iterator 클래스 템플릿에서 제공합니다.

 

istream_iterator 클래스 템플릿은 다음과 같이 정의됩니다.

문법
template <class T, class charT = char, class traits = char_traits<charT>, class Distance = ptrdiff_t>

class istream_iterator : public iterator<input_iterator_tag, T, Distance, const T*, const T&> { ... }

 

ostream_iterator 클래스 템플릿은 다음과 같이 정의됩니다.

문법
template <class T, class charT = char, class traits = char_traits<charT> >

class ostream_iterator : public iterator<output_iterator_tag, void, void, void, void> { ... }

 

istream_iterator와 ostream_iterator 클래스 템플릿은 첫 번째를 제외한 인수에 모두 디폴트 인수를 명시하고 있습니다.

따라서 사용자는 입출력하고자 하는 데이터의 타입만을 인수로 전달하여 간편하게 사용할 수 있습니다.


 

다음 예제는 copy() 함수를 사용하여 vertor 객체의 첫 요소부터 마지막 요소까지를 모두 출력하는 예제입니다.

예제
vector<int> vc = {1, 2, 3, 4, 5};

copy(vc.begin(), vc.end(), ostream_iterator<int>(cout));

cout << endl;

copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));



실행 결과
12345

1 2 3 4 5 

 

위의 예제에서는 C++ 표준 출력 객체인 cout 객체를 ostream_iterator 클래스 템플릿의 인수로 전달하여 모니터에 대한 출력을 수행합니다.

예제에서 사용된 vertor 객체에 대한 더 자세한 사항은 C++ 시퀀스 컨테이너 수업에서 확인할 수 있습니다.

 

C++ 시퀀스 컨테이너 수업 확인 =>

삽입 반복자(insert iterator)
알고리즘에서 출력 반복자를 사용하면 반복자가 가리키는 요소의 값을 덮어쓰게 됩니다.

하지만 삽입 반복자(insert iterator)는 값을 덮어쓰지 않고, 그 요소의 위치에 새로운 값을 삽입할 수 있게 해줍니다.

즉, 삽입 반복자는 반복자의 복사 연산을 삽입 연산으로 변환해 주는 역할을 합니다.

 

STL에서 제공하는 삽입 반복자는 다음과 같습니다.

 

1. insert_iterator

2. back_insert_iterator

3. front_insert_iterator

 

삽입 반복자	설명	사용 멤버 함수	사용가능 컨테이너
insert_iterator	해당 컨테이너의 특정 위치에 삽입함.	insert()	모든 컨테이너
back_insert_iterator	해당 컨테이너의 뒤쪽에 삽입함.	push_back()	
시퀀스 컨테이너

(vector, list, deque)

front_insert_iterator	해당 컨테이너의 앞쪽에 삽입함.	push_front()	list, deque
 

다음 예제는 push_back() 함수와 push_front() 함수의 삽입 반복자를 사용하여 리스트에 요소를 삽입하는 예제입니다.

예제
list<int> ls = {10};

ls.push_back(20); // back_insert_iterator를 사용함.

ls.push_front(30); // front_insert_iterator를 사용함.

copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));


역방향 반복자(reverse iterator)
역방향 반복자(reverse iterator)는 순방향 반복자와는 반대 방향으로 동작하는 반복자입니다.

즉, 역방향 반복자의 증가 연산자(++)는 순방향 반복자의 역방향으로 이동하게 됩니다.

rbegin()과 rend() 멤버 함수를 사용하면 자동으로 reverse_iterator를 반환합니다.

 

다음 예제는 rbegin()과 rend() 함수의 역방향 반복자를 사용하여 리스트의 요소를 역순으로 출력하는 예제입니다.

예제
 

list<int> ls = {10, 20, 30};

copy(ls.rbegin(), ls.rend(), ostream_iterator<int>(cout, " "));

 



상수 반복자(constant iterator)
앞서 살펴본 것처럼 반복자를 동작 방식으로 분류하는 것 외에도 반복자가 가리키는 값의 변경이 가능한가로 분류할 수도 있습니다.

이때 반복자가 가리키는 값의 변경이 불가능한 반복자를 상수 반복자(constant iterator)라고 합니다.


 

단, 상수 반복자란 반복자가 가리키는 요소를 상수화시킨 것이지 반복자 그 자체를 상수화시킨 것은 아닙니다.

따라서 양방향 상수 반복자라면 앞뒤로 이동하며 다른 요소를 가리키는 것이 가능합니다.

이러한 상수 반복자의 타입은 const_iterator 타입으로 정의됩니다.

 

다음 예제는 반복자를 사용하여 리스트의 첫 번째 요소의 값을 변경하는 예제입니다.

예제
list<int> ls = {10, 20, 30};

list<int>::iterator iter;

list<int>::const_iterator citer;

 

iter = ls.begin();

*iter = 100;

citer = ls.end();

// *citer = 300; // 상수 반복자이므로 값의 변경은 불가능함.

 

for(citer = ls.begin(); citer != ls.end(); citer++)

{

    cout << *citer << " ";

}





 

위의 예제에서 상수 반복자로 선언된 citer는 가리키는 값의 변경이 불가능하며, 값을 읽는 작업에만 사용할 수 있습니다.
*/