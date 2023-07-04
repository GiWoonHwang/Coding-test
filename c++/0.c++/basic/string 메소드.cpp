/*
string 메소드는 string 클래스에 정의된 문자열과 관련된 작업을 할 때 사용하는 메소드이다.
string 클래스에서 제공하는 대표적인 문자열 처리 함수는 다음과 같다.

1. length() 메소드와 size() 메소드
2. appned() 메소드
3. find() 메소드
4. compare() 메소드
5. replace() 메소드
6. capacity() 메소드와 max_size() 메소드

length() 메소드와 size() 메소드
length() 메소드는 문자열의 길이를 반환하는 메소드입니다. size() 메소드도 length() 메소드와 언제나 같은 값을 반환하지만, 그 의미는 약간 다르다.
length() 메소드는 문자열의 길이를 나타내지만, size() 메소드는 해당 string 객체가 메모리에서 실제 사용하고 있는 크기를 나타냅니다.

string str1;

string str2 = "C++ Programming"; 

cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << endl;

cout << "문자열 str2의 길이는 " << str2.size() << "입니다.";

append() 메소드 
하나의 문자열 끝에 다른 문자열을 추가하는 메소드 입니다.

문자열.appned(추가할 문자열); // 추가할 문자열을 맨끝 추가함.
문자열.appned(추가할 문자열, 시작위치, 개수) // 추가할 문자열의 시작 위치부터 개수만큼만 맨 끝에 추가함
문자열.append(개수, 추가할문자) // 추가할 문자를 개수만큼 맨 끝에 추가함

find() 메소드
find() 메소드는 특정 문자열을 찾아, 그 시작 위치를 반환하느 메소드이다.

문자열.find(찾을 문자열); // 인덱스 0부터 찾을 문자열 찾아 그 시작 위치를 반환함
문자열.find(찾을 문자); // 인덱스 0부터 찾을 문자를 찾아, 그 시작 위치를 반환함
문자열.find(찾을 문자열, 시작위치) // 시작 위치부터 찾을 문자열을 찾아 그 시작 위치를 반환함

compare() 메소드
두 문자열 간의 내용을 비교하는 메소드다.
compare() 메소드의 반환값이 참이 되는 경우는 다음과 같다.

str1.compare(str_02) == 0 // str1과 str2이 같을 경우
str1.compare(str_02) < 0  // str1이 str2보다 사전 편찬순으로 앞에 있을 경우
str1.compare(str_02) > 0  // str1이 str2보다 사전 편찬순으로 뒤에 있을 경우

replace() 메소드
repalce() 메소드 특정 문자열을 찾아, 그 문자열을 다른 문자열로 대체하는 메소드입니다.

문자열.replace(대체할 문자열의 시작위치, 대체할문자열의길이, 새로운문자열); // 전달된 시작 위치부터 문자열의 길이만큼을 제거한 후에 새로운 문자열을 삽입함

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1, str2, str3; 

    str1.append("C++ Programming"); 

    str2.append("C++ Programming", 4, 7); 

    str3.append(4, 'X');  

    cout << str1 << endl; // C++ Programming

    cout << str2 << endl; // Program

    cout << str3 << endl; // xxxx


    string str = "C++ Programming"; 

    cout << str.find("Pro") << endl; // 4

    cout << str.find('r') << endl;  // 5

    if (str.find("Pro", 5) != string::npos)
    {
        cout << "해당 문자열을 찾았습니다.";
    }
    else
    {
        cout << "해당 문자열을 찾지 못했습니다.";
    }

    string str1 = "ABC";
    string str2 = "ABD";

    if(str1.compare(str2) == 0){
        cout << str1 << "이" << str2 << "와 같습니다.";
    }
    else if(str1.compare(str2) < 0){
        cout << str1 << "이" << str2 << "보다 사전 편찬 순으로 앞에 있습니다.";
    }
    else{
        cout << str1 << "이" << str2 << "보다 사전 편찬 순으로 뒤에 있습니다.";
    }
    // ABC가(이) ABD보다 사전 편찬 순으로 앞에 있습니다.
    

    string str1 = "C++ is very nice!";

    string str2 = "nice";

    string str3 = "awesome";    

    string::size_type index = str1.find(str2); // std::string 클래스가 제공하는 string 이 담을 수 있는 최대 문자 개수를 저장할 수 있는 적절한 타입

    if (index != string::npos) // 만약 있으면 !
    {
        str1.replace(index, str2.length(), str3);
    }

    cout << str1; // C++ is very awesome!

    return 1;
}