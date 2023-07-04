# 정수 제곱근 판별
# 임의의 양의 정수 n에 대해 n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 한다.
# n이 양의 정수 x의 제곱이라면 x+1을 리턴하고 n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수 완성

def Cal(num):
    squareRoot = num ** (1/2)
    if squareRoot % 1 == 0:
        return(squareRoot +1) ** 2
    return "x"

print(Cal(36))