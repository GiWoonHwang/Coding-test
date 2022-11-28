'''
정수 num과 k가 매개변수로 주어질 때, num을 이루는 숫자 중에 k가 있으면 num의 그 숫자가 있는 자리 수를 return하고 없으면 -1을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 < num < 1,000,000
0 ≤ k < 10
num에 k가 여러 개 있으면 가장 처음 나타나는 자리를 return 합니다.
입출력 예
num	k	result
29183	1	3
232443	4	4
123456	7	-1
입출력 예 설명
입출력 예 #1

29183에서 1은 3번째에 있습니다.
입출력 예 #2

232443에서 4는 4번째에 처음 등장합니다.
입출력 예 #3

123456에 7은 없으므로 -1을 return 합니다.
'''
from typing import *

num:int = 29183
k:int = 1
answer:int  = 1

def solution(num, k):
    answer = 1 # 초기값이 1인이유: k가 첫자리에 있을 수도 있으니
    while answer != -1: #
        for i in str(num): # i는 num을 순회하며
            if i == str(k): # 만약 i가 k와 같다면
                return answer # answer를 return 해줌
            else:
                answer += 1 # 아니라면 1씩 더해준다
        answer = -1 # 모든 반복이 끝난 후에도 없다면 answer는 -1을 대입해준다
    return answer

# 다른 사람의 풀이
def solution(num, k):
    return -1 if str(k) not in str(num) else str(num).find(str(k)) + 1


