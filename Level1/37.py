# 3진법 뒤집기
# 자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 이를 다시 10진법으로 표현한 수를  return하도록 함수를 완성해 주세요
# 제한사항: n은 1이상 100,000,000 이하인 자연수 입니다.

from typing import * 

'''
n (10진법)	n (3진법)	앞뒤 반전(3진법)	10진법으로 표현
45	           1200	           0021	               7
'''

# 이 문제는 다른사람의 풀이를 참고했다.

bin:str = ''
n:int= 45
while n:
    bin += str(n % 3) # 나머지
    n = n // 3 # 몫
    print("1.bin",bin)
    print("2.n",n)

answr = int(bin,3)
# answer = int(ternary, 3)
# int(n, y) : 'y' 진법으로 표현된 'n'을 10진법으로 변환해준다.
print(answr)


