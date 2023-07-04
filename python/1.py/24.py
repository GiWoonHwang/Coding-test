# 문자열 내 p와 y의 개수
# 대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 같으면 True, 다르면 False를 return 하는 solution를 완성하세요. 'p', 'y' 모두 하나도 없는 경우는 항상 True를 리턴합니다. 단, 개수를 비교할 때 대문자와 소문자는 구별하지 않습니다.
# 예를 들어 s가 "pPoooyY"면 true를 return하고 "Pyy"라면 false를 return합니다.
# 제한사항 문자열 s의 길이 : 50 이하의 자연수, 문자열 s는 알파벳으로만 이루어져 있습니다.

from typing import *

def cal(n: str)-> str:
    answer: bool = True
    p: int = 0
    y: int = 0
    n = n.lower()
    
    for i in len(n):
        if n[i] == p:
            p+= p +1
        elif n[i] == y:
            y+= y +1
    if p == y :
        answer = answer
    elif p and y == 0:
        answer = answer
    else:
        answer == False
    return answer

# ---------------------------------------------------------------------------------------------------------------
# 다른사람의 간결한 풀이
# 대소문자 구분을하지 않으니 lower함수를 사용한 후 count함수로 p와 y의 개수를 비교했다. 나보다 훨씬 깔끔하다 부럽다

def numPY(s):
    # 함수를 완성하세요
    return s.lower().count('p') == s.lower().count('y')