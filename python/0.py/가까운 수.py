'''
정수 배열 array와 정수 n이 매개변수로 주어질 때, array에 들어있는 정수 중 n과 가장 가까운 수를 return 하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ array의 길이 ≤ 100
1 ≤ array의 원소 ≤ 100
1 ≤ n ≤ 100
가장 가까운 수가 여러 개일 경우 더 작은 수를 return 합니다.
입출력 예
array	n	result
[3, 10, 28]	20	28
[10, 11, 12]	13	12
입출력 예 설명
입출력 예 #1

3, 10, 28 중 20과 가장 가까운 수는 28입니다.
입출력 예 #2

10, 11, 12 중 13과 가장 가까운 수는 12입니다.
'''
from typing import * 

array:List[int] = [10, 11, 12]
n:int = 20
result:int = 100 # 배열의 원소 최대값은 100이다 따라서 기준값을 100으로 잡아두었다.
answer:int = 0
array.sort() # 정렬을 하고 계산을 해줘야 통과 가능 
for i in array:
    if abs(n-i)  < result:  # 값을 비교하여
        result = abs(n-i) # 작은 값으로 계속 업데이트
        answer = i


# 다른사람의 풀이
a:List[int] = [10, 11, 12]
n:int = 20
solution=lambda a,n:sorted(a,key=lambda x:(abs(x-n),x))[0]


result = sorted(a, key=lambda x :(abs(x-n),x))
print(result)