/*
C++이 가지는 프로그래밍 언어로서의 특징 중 하나로 일반화 프로그래밍(generic programming)을 들 수 있습니다.

이러한 일반화 프로그래밍은 데이터를 중시하는 객체 지향 프로그래밍과는 달리 프로그램의 알고리즘에 그 중점을 둡니다.

 

C++ 표준 템플릿 라이브러리인 STL도 이러한 일반화 프로그래밍 패러다임의 한 축을 담당하고 있습니다.

STL은 알고리즘을 일반화한 표현을 제공하여, 데이터의 추상화와 코드를 재활용할 수 있게 합니다.

 

STL은 1994년 휴렛팩커드연구소의 알렉스 스테파노프(Alex Sepanov)와 멩 리(Meng Lee)가 처음으로 그 구현을 발표합니다.

그 후 STL은 ISO/ANSI C++ 표준 위원회에 의해 C++ 표준 템플릿 라이브러리로 포함되게 됩니다.

C++ 표준 템플릿 라이브러리인 STL은 다음과 같은 구성 요소로 이루어진 템플릿을 제공합니다.

 

1. 반복자(iterator)

2. 컨테이너(container)

3. 알고리즘(algorithm)

컨테이너(container)
STL에서 컨테이너(container)는 같은 타입의 여러 객체를 저장하는 일종의 집합이라 할 수 있습니다.

컨테이너는 클래스 템플릿으로, 컨테이너 변수를 선언할 때 컨테이너에 포함할 요소의 타입을 명시할 수 있습니다.

 

STL 컨테이너에 대한 더 자세한 사항은 C++ 컨테이너 수업에서 확인할 수 있습니다.

 

C++ 컨테이너 수업 확인 =>

반복자(iterator)
반복자(iterator)란 STL 컨테이너에 저장된 요소를 반복적으로 순회하여, 각각의 요소에 대한 접근을 제공하는 객체입니다.

즉, 컨테이너의 구조나 요소의 타입과는 상관없이 컨테이너에 저장된 데이터를 순회하는 과정을 일반화한 표현입니다.


템플릿이 타입과 상관없이 알고리즘을 표현할 수 있게 해준다면, 반복자는 컨테이너와 상관없이 알고리즘을 표현할 수 있게 해주는 것입니다.

 

반복자가 가져야 할 요구 사항과 정의되어야 할 연산자는 다음과 같습니다.

 

1. 가리키는 요소의 값에 접근할 수 있어야 합니다. 따라서 참조 연산자(*)가 정의되어야 합니다.

2. 반복자 사이의 대입 연산, 비교 연산이 가능해야 합니다. 따라서 대입, 관계 연산자가 정의되어야 합니다.

3. 가리키는 요소의 주변 요소로 이동할 수 있어야 합니다. 따라서 증가 연산자(++)가 정의되어야 합니다.

 

위와 같은 요구 사항을 모두 갖춰야만 STL 알고리즘에서 반복자로 사용될 수 있습니다.
*/