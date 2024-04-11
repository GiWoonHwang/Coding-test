# 하샤드 수
# 양의 정수가 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 예를 들어 18의 자릿수 합은 1+8 = 9이고, 18은 9로 나누어 떨지므로 18은 하샤드 수 입니다. 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해 주세요.
# 10의 모든 자릿수 합은 1입니다. 
# 12의 모든 자릿수 합은 3 입니다. 12는 3으로 나누어 떨어지므로 12는 하샤드 수 입니다
# 11의 모든 자릿수 합은 2 입니다. 11은 2로 나누어 떨어지지 않으므로 11은 하샤드 수가 아닙니다.

def Harshad(n):
    return n % sum([int(c) for c in str(n)]) == 0