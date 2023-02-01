/*
프로그램에서 정의된 함수는 프로그램이 실행될 때 모두 메인 메모리에 올라갑니다
이때 함수의 이름은 메모리에 올라간 함수의 시작 주소를 가리키는 포인터 상수가 된다.
이렇게 함수의 시작 주소를 가리키는 포인터 상수를 함수 포인터라고 부른다.

포인터 상수란 포인터 변수가 가리키고 있는 주소값을 변경할 수 없는 포인터를 의미하며, 상수 포인터란 상수를 가리키는 포인터를 의미한다.

함수 포인터의 포인터 타입은 함수의 반환값과 매개변수에 의해 결정됩니다. 즉 함수의 원형을 알아야만 해당 함수에 맞는 함수 포인터를 만들 수 있다.
void Func(int,int);

위의 함수 원형에 대한 적절한 함수 포인터는 다음과 같습니다.
void (*ptr_func)(int, int);
*/

#include <iostream>

using namespace std;

// 함수 포인터는 함수르 또 다른 함수의 인수로 전달할 때 유용하게 사용된다.
double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

double Calcultor(double, double, double(*func) (double, double));

int main(void){
    double (*calc)(double, double) = NULL; // 함수 포인터 선언
    double num1 = 3, num2 = 4, result = 0;
    char oper = '*';

    switch(oper){
        case '+':
            calc = Add;
        case '-':
            calc = Sub;
        case '*':
            calc = Mul;
        case '/':
            calc = Div;
            break;
        default:
            cout << "사칙연산(+,-,*,/)만을 지원합니다." << endl;
            break;

    }

    result = Calcultor(num1, num2, calc);
    cout << "사칙 연산의 결과는" << result << "입니다." << endl;
    return 0;
}

    double Add(double num1, double num2) { return num1 + num2; };

    double Sub(double num1, double num2) { return num1 - num2; };

    double Mul(double num1, double num2) { return num1 * num2; };

    double Div(double num1, double num2) { return num1 / num2; };

    double Calculator(double num1, double num2, double (*func)(double, double)) { return func(num1, num2); };

    /*
    위의 예제는 함수 포인터를 사용하여 입력에 따라 4개의 사칙연산 함수 중 하나를 선택한다
    이렇게 선택된 함수를 함수 포인터를 사용하여 Calculator() 함수에 인수로 전달하고 있다.

    포인터를 초기화 할 때 0이나 NULL을 대입하여 초기화한 포인터를 널 포인터라고 한다. 널 포인터는 아무것도 가리키지 않는 포인터라는 의미.

    double (*calc)(double, double) = NULL;

    이처럼 함수 포인터의 가장 큰 단점은 바로 그 표기법이 복잡한 데 있다. CPP에서는 이러한 복잡한 표기법을 단순화 하는 방법으로 다음의 두가지 키워드를 제공한다
    1. typedef 키워드
    2. auto 키워드

    typedef 키워드를 이용하면 복잡한 함수 포인터형에 새로운 이름을 붙일 수 있다.
    typedef double (*CalcFunc)(double, double); // 함수 포인터에 calcFunc이라는 새로운 이름을 붙임.
    CalcFunc ptr_func = calc;

    cpp 11부터 제공하는 auto 키워드를 이용하면 복잡한 함수 포인터형으로 자동 타입 변환할 수 있다.
    auto ptr_func = calc;
    다음 예제는 앞선 예제에 typedef 키워드를 사용하여 간략화한 예제입니다.
    */

   #include <iostream>

   using namespace std;

   typedef double(* Arith)(double, double); // typedef 키워드를 이용한 새로운 이름 선언
   double Calculator(double , double, Arith);
   
   int main(void)

  {
  
      Arith calc = NULL; // 함수 포인터 선언
  
      double num1 = 4, num2 = 5, result = 0;
  
      char oper = '+';  
  
  }
  

  double Calculator(double num1, double num2, Arith func) { return func(num1, num2); }

