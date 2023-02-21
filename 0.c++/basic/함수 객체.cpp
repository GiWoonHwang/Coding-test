/*
함수 객체(function object)
STL 알고리즘에 데이터를 전달하기 위해서는 다음과 같은 방법을 사용할 수 있습니다.

 

1. 함수 포인터

2. 함수 객체

3. 람다 표현식

 

많은 STL 알고리즘이 데이터를 처리하기 위해 매개변수로 함수 객체(function object)를 받아들입니다.

펑크터(functor)라고도 불리는 함수 객체는 호출 연산자(())와 함께 사용할 수 있는 객체를 의미합니다.

이러한 함수 객체는 우선 타입을 선언하고, 해당 클래스에서 호출 연산자(())를 오버로딩하여 구현하게 됩니다.

함수 객체의 장점
직접적인 함수 호출과 비교하여 함수 객체를 사용하면 다음과 같은 장점을 가집니다.

 

1. 함수 객체는 상태(state)를 포함할 수 있습니다.

2. 함수 객체는 타입이므로, 템플릿 인수로 사용할 수 있습니다


일반 함수와 다르게 '상태'를 저장할 수 있다.
    상태란? int _value=0; 과 같은 멤버 데이터

객체를 만들어주는 시점과 실행하는 시점을 분리할 수 있다.
    예를 들어 100만 명의 플레이어가 게임에 접속하려 할 때 한 번에 접속을 시키는 것은 힘들다. 하지만 함수 객체를 활용하면 각 플레이어에게 '접속 요청'을 받아놓고, 여유가 되는대로 접속을 시켜주도록 만들어 줄 수 있다.

함수 포인터의 단점을 어느정도 극복할 수 있다.
함수 포인터는 시그니쳐가 동일해야만 사용할 수 있지만, 함수 객체는 operator()를 오버로딩하여 쉽게 다른 시그니쳐를 만들어서 사용할 수 있다.
*/

#include<iostream>
#include<vector>
using namespace std;

// 요청서 클래스
class Command
{
public:
	Command(int playerId, int posX, int posY)
		: _playerId(playerId), _posX(posX), _posY(posY)
	{	}

	void Printer()
	{
		cout << "ID: " << _playerId << ", X: " << _posX << ", Y: " << _posY << endl;
	}

private:
	int _playerId;
	int _posX;
	int _posY;
};

// 요청들을 저장 및 실행할 클래스
class MoveTask
{
public:
	void operator() ()
	{
		cout << "해당 좌표로 플레이어 이동" << endl;
		for (auto cmd : commands)
			cmd->Printer();
	}

	void AddRequest(Command* cmd)
	{
		commands.push_back(cmd);
	}

private:
	vector<Command*> commands;
};

int main()
{
	// 함수 객체(Functor) : 함수처럼 동작하는 객체

	// MMO에서 함수 객체를 활용하는 예시
	// 클라 <-> 서버
	// 서버 : 클라가 보내준 네트워크 패킷을 받아서 처리
	// ex) 클라 : 나 (5,0) 좌표로 이동시켜줘!

	// 함수 객체의 장점 : 만들어주는 시점과 실행하는 시점을 분리할 수 있다!

	MoveTask task;

	// 1) 요청
	Command cmd1(1000, 5, 5);
	Command cmd2(2000, 40, 10);
	Command cmd3(3000, 20, -5);
	// 무수히 많은 요청서들....

	// 2) 저장
	task.AddRequest(&cmd1);
	task.AddRequest(&cmd2);
	task.AddRequest(&cmd3);
	
	// 3) 실행
	// 여유가 생기면 요청들을 처리한다
	task();

	// 위와 같이 단계를 분리해줄 수 있겠다.

	return 0;
}