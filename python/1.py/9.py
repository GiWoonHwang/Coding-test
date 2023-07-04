# 짝수와 홀수
# 정수 num이 짝수일 경우 "Even"을 반환하고 홀수일 경우 Odd를 반환하는 함수를 완성에 주세요

def Cal(num):
    return "even" if num % 2 == 0 else "odd"

print("짝수"+Cal(2))
print("홀수"+Cal(3))

    