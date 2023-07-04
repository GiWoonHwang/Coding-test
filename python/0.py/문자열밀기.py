'''
문자열 "hello"에서 각 문자를 오른쪽으로 한 칸씩 밀고 마지막 문자는 맨 앞으로 이동시키면 "ohell"이 됩니다. 이것을 문자열을 민다고 정의한다면 문자열 A와 B가 매개변수로 주어질 때, A를 밀어서 B가 될 수 있다면 몇 번 밀어야 하는지 횟수를 return하고 밀어서 B가 될 수 없으면 -1을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 < A의 길이 = B의 길이 < 100
A, B는 알파벳 소문자로 이루어져 있습니다.
입출력 예
A	B	result
"hello"	"ohell"	1
"apple"	"elppa"	-1
입출력 예 설명
입출력 예 #1

"hello"를 오른쪽으로 한 칸 밀면 "ohell"가 됩니다.
입출력 예 #2

"apple"은 몇 번을 밀어도 "elppa"가 될 수 없습니다.
'''
from typing import * 

a:str = "hello"
b:str = "ohell"
result:int = 0

#  while문을 사용해서 a == b 일떄까지 밀어보자

while result != len(a):
    if a == b:
        result

    a = a[-1] + a[:-1] # 같지않으면 a의 맨 뒤 문자를 맨 앞으로 보낸다 == 오른쪽으로 밀어준다
    result +=1

result = -1 # a문자열의 수만큼 돌아도 없으면 밀어도 안되는 것


