# 약수의 합
# 정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수를 완성해주세요.
# 12의 약수는 1, 2, 3, 4, 6, 12입니다. 이를 모두 더하면 28입니다.

# 10의 약수는 1,2,5,10 12의 약수는 1,2,3,4,6,12
# 약수는 본인과 본인/2에서 구해진다 따라서  받아온값x + x 절반에 해당하는 수의 집합 % x == 0이면됨 

def cal(num):
    return num + sum([ i for i in range(1,((num//2) + 1)) if num % i ==0 ])
print(cal(12))