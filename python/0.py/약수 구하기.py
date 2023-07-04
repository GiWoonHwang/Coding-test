'''
정수 n이 매개변수로 주어질 때, n의 약수를 오름차순으로 담은 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 10,000
입출력 예
n	result
24	[1, 2, 3, 4, 6, 8, 12, 24]
29	[1, 29]
입출력 예 설명
입출력 예 #1

24의 약수를 오름차순으로 담은 배열 [1, 2, 3, 4, 6, 8, 12, 24]를 return합니다.
입출력 예 #2

29의 약수를 오름차순으로 담은 배열 [1, 29]를 return합니다.
'''
from typing import * 
n:int = 24
count: int = n
result: List[str] = []
while count != 0:        
    if n % count == 0:
        result.append(count)
        result.sort()
    count -= 1

# 다른 사람의 풀이
def solution(n):
    answer = [i for i in range(1,n+1) if n%i == 0]
    return answer
