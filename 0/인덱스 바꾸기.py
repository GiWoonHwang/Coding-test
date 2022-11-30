'''
문자열 my_string과 정수 num1, num2가 매개변수로 주어질 때, my_string에서 인덱스 num1과 인덱스 num2에 해당하는 문자를 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.

제한사항
1 < my_string의 길이 < 100
0 ≤ num1, num2 < my_string의 길이
my_string은 소문자로 이루어져 있습니다.
num1 ≠ num2
입출력 예
my_string	    num1	    num2	result
"hello"	        1	        2	    "hlelo"
"I love you"	3	        6	    "I l veoyou"
입출력 예 설명
입출력 예 #1

"hello"의 1번째 인덱스인 "e"와 2번째 인덱스인 "l"을 바꾸면 "hlelo"입니다.
입출력 예 #2

"I love you"의 3번째 인덱스 "o"와 " "(공백)을 바꾸면 "I l veoyou"입니다.
'''
from typing import *

# 변수를 연속적으로 할당하는 것에 대한 기억을 상기시켜주는 문제 같다.
my_string: str = "hello"
num1:int = 1
num2:int = 2 

val1, val2 = my_string[num1], my_string[num2]

my_string_list = list(my_string)

my_string_list[num1],my_string_list[num2] = val2, val1


result:str = "".join(my_string_list)
print(result)


# 다른 사람의 풀이
def solution(my_string, num1, num2):
    s = list(my_string)
    s[num1],s[num2] = s[num2],s[num1]
    return ''.join(s)