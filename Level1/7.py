# 콜라츠 추측
# 콜라츠란 사람에 의해 제기된 이 추측은, 주어진 수가 1이 될 때까지 다음 작업을 반복하면, 모든 수를 1로 만들 수 있다는 추측입니다.
# 입력된 수가 짝수라면 2로 나눕니다., 입력된 수가 홀수라면 3을 곱하고 1을 더합니다. 결과로 나온 수에 같은 작업을 1이 될 떄 까지 반복합니다.
# 단 주어진 수가 1인경우에는 0을, 작업을 500번 반복 할 때까지 1이 되지 않는다면 -1을 반환해 주세요

# 6 > 3 > 10 > 5 > 16 > 8 > 4 > 2 > 1 


def collatz(num):                                                              
    answer = 0
    while answer < 500:
        answer += 1
        if num % 2 == 0:
            num = num / 2 
        else:
            num = (num * 3) + 1
        if num == 1:
            break
    if answer == 500:
        answer = -1
    
    return answer


print(collatz(10))



