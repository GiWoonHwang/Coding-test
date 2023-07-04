/*
cpp에서는 함수를 호출할 때 전달되는 인수나, 함수가 종료될 때 반환되는 반되는 반환값으로도 구조체를 사용할 수 있다.
그 방식은 기본 타입과 완전히 같으며, 구조체를 가리키는 포인터나 구조체의 한 멤버 변수만을 사용할 수도 있다.

*/

#include <iostream>

using namespace std;

struct Prop
{

    int savings;

    int loan;

};

struct Name
{

    string first;

    string last;

}; 

struct Friends
{

    Name first_name;

    string address;

    string job;

};
 

int CalcProperty(int, int);

 
// 구조체를 인수로 전달하는 방식은 함수가 원본 구조체의 복사본을 가지고 작업하므로 안전하다는 장점을 가집니다.
int main(void){

    int hong_prop;

    Prop hong = {10000000, 4000000}; 

    hong_prop = CalcProperty(hong.savings, hong.loan); // 구조체의 멤버 변수를 함수의 인수로 전달함 

    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원입니다."; // 홍길동의 재산은 적금 10000000원에 대출 4000000원을 제외한 총 3000000원입니다.






    return 0;

}

 

int CalcProperty(int s, int l){

    return (s - l);

}

/*
이부분은 정확한 이해가 아직 부족함
위와 같이 구조체를 가리키는 포인터를 인수로 전달하는 방식은 구조체의 복사본이 아닌 주소 하나만을 전달하므로 빠르다는 장점을 가진다.
하지만 호출된 함수에서 원본 구조체에 직접 접근하므로, 원본 데이터의 보호 측면에서는 매우 위험합니다.
int CalcProperty(Prop*); 

int main(void)
{

    int hong_prop;

    Prop hong = {10000000, 4000000}; 

    hong_prop = CalcProperty(&hong); // 구조체의 주소를 함수의 인수로 전달함.

    cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan << "원을 제외한 총 " << hong_prop << "원입니다."; // 홍길동의 재산은 적금 10000000원에 대출 4000000원을 제외한 총 3000000원입니다.

    return 0;

} 

int CalcProperty(Prop* money)

{

    money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경

    return (money->savings - money->loan);

}  
*/

/*
const 키워드를 사용하여 함수에 전달된 인수를 함수 내에서는 집적 수정할 수 없도록 하는 것이 좋습니다.
Prop InitProperty(void);

int CalcProperty(const Prop*); 

int main(void)

{

    ...

    hong = InitProperty();

    hong_prop = CalcProperty(&hong); // 구조체의 멤버 변수를 함수의 인수로 전달함

    ...

}

Prop InitProperty(void)

{

    Prop hong_prop = {10000000, 4000000};

    return hong_prop; // 구조체를 함수의 반환값으로 반환함.

}

 

int CalcProperty(const Prop* money) // const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지함.

{

    //money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경

    return (money->savings - money->loan);

}
*/
