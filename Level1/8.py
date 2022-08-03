# 최대공약수와 최소공배수
# 두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환하는 함수, solution을 완성해 보세요. 배열의 맨 앞에 최대공약수, 그다음 최소공배수를 넣어 반환하면 됩니다. 예를 들어 두 수 3, 12의 최대공약수는 3, 최소공배수는 12이므로 solution(3, 12)는 [3, 12]를 반환해야 합니다.
# 예 자연수 2와 5의 최대공약수는 1, 최소공배수는 10이므로 [1, 10]을 리턴해야 합니다.

# 유클리드 호제법
# 큰 수를 작은수로 나눈 후 나머지를 구한다. 1121 mod 695 = 417
# 그 다음 나눴떤 수와 다시 또 연산을 진행 695 mod 417 = 278
# 이 과정을 반복한다. 나머지가 0이 됐을 떄 마지막 계산에서 나누는 수로 사용된 값이 최대공약수가 된다
# 최소공배수는 두 수의 곱을 최대공약수로 나우어 주면 된다


def gcd(a,b):
    c, d = max(a,b), min(a,b)
    e = 1
    while e > 0:
        e = c % d 
        c,d = d,e
        print("c",c)
        print("d",d) 
    answer = [c,int(a*b/c)]
    return answer

print(gcd(12,5))
        