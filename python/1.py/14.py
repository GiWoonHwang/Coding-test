# 자릿수 더하기
# 자연수 n이 주어지면 n의 각 자릿수의 합을 구해서 return하는 함수를 만들어 주세요
# 예를 들어 n = 123이면 1 + 2 + 3 = 6 을 리턴하면 됩니다.

n = 56115

def cal(n):
    
    return sum([int(i) for i in str(n)])


