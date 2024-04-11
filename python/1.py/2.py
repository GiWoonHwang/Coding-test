# x만큼 간격이 있는 n개의 숫자
# 문제 설명
# 함수 soulution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스크를 리턴해야 한다.
# 다음 제한 조건을 보고 조건을 만족하는 함수, solution을 완성해주세요.

# 제한 조건
# x는 -10000000 이상, 10000000 이하인 정수 입니다.
# n은 1000 이하인 정수입니다.


# 입출력 예
# x  n  answer
# 2  5  [2,4,6,8,10]
# 4  3  [4,8,12]
# -4 2  [-4,-8]

# 풀이
# 1. 변수값 x와 곱해진 i는 변수값 n+1이 들어간 rnage함수 만큼 반복한다. range(1, n+1)
# 
# 2. rnag(n)이 안되는 이유는 0부터 시작하기 때문에 x * 0 = 0 을 첫 번째 리스트로 반환하게 된다 따라서 불가능하다.
def answer(x,n):
 return [x * i for i in range(1,n+1)]

print(answer(2,5))