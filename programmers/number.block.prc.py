def check_max_divisor(n):
    data = []
    if n == 1:
        return 0
    for i in range(2, int(n**2)+1):
        # 약수라면 배열에 담는다
        if n%i == 0:
            data.append(i)

            # 문제에서 요구하는 최대값의 가장 근접한 약수라면 바로 리턴한다
            if n//i <=10000000:
                return n // i
    
    # 약수의 최대값 리턴
    if len(data) >= 1:
        return data[-1]
    return 1


def solution(begin, end):
    answer = []

    for i in range(begin, end+1):
        max_divisor = check_max_divisor(i)
        answer.append(max_divisor)
    
    return answer



print(solution(1,10))