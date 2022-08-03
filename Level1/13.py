# 자연수 뒤집어 배열로 만들기
# 자연수 n을뒤집어 각 자리 숫자를 원소로 가는 배열을 리턴해 주세요. 예를 들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다

def cal(n):
    
    b = list(reversed(str(n)))
    c = "".join(b)
    return c

print(cal(123456789))