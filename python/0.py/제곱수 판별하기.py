'''
제곱수 판별하기
문제 설명
어떤 자연수를 제곱했을 때 나오는 정수를 제곱수라고 합니다. 정수 n이 매개변수로 주어질 때, n이 제곱수라면 1을 아니라면 2를 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 1,000,000
입출력 예
n	    result
144	    1
976	    2
입출력 예 설명
입출력 예 #1

144는 12의 제곱이므로 제곱수입니다. 따라서 1을 return합니다.
입출력 예 #2

976은 제곱수가 아닙니다. 따라서 2를 return합니다.
'''
from typing import *
import math
n: int = 976

# 나의생각: 루트를씌워서 정수가나오면 1, 아니면 2를 보내면 되지 않을까 ?
print(math.sqrt(n))

if int(math.sqrt(n)) == math.sqrt(n): # 소수점을 절삭한 값(int)과 그렇지 않은 값이 같다면 제곱수임 
    print(int(math.sqrt(n)))
    print(1)
else:
    print(int(math.sqrt(n)))
    print(2)

# 다른 사람의 풀이 (나 처럼 단순히 메소드를 쓰는 것보다 제곱수의 성질을 이해하고 푸는것이 훨씬 더 좋은풀이라고 생각한다.)
'''
제곱수의 성질
소인수분해 했을 때, 소인수의 지수가 모두 짝수이다.
제곱수의 약수 갯수는 항상 홀수이다.
'''
n:int = 976
num:List[int] = []

for i in range(1,n+1): # rang(n)으로 하면 0부터 나옴
    if n % i == 0 : # i 가 약수라면
        num.append(i)

if len(num) % 2 == 0: # 약수의 갯수가 홀수일 때 제곱수이다
    1
else:
    2

