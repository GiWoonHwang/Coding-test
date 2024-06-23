def f(n,k):
    if n == 1:
        return k if k <= 2 else k - 1
    
    div = 5 ** (n-1)
    mul = 4 ** (n-1)
    loc = k // div  # 5개로 나누었을 때 인덱스 위치 (인덱스는 0부터 시작한다)

    # k가 5의 배수라면 loc이 가르키는 인덱스의 바로 전 인덱스 끝 값에 위치하게 된다.
    # k = 10,  div = 5   10 % 5 == 0  ->  세 번째 그룹이 아닌 두 번 째 그룹에 마지막에 위치한다.
    if k % div == 0:
        loc -= 1

    # 첫 두구간 
    # 5개로 나누어진 구간 + 다음 구간의 위치에 해당하는 인덱스 
    if loc <2:
        return mul * loc + f(n-1, k - mul * div )
    
    # 0만 존재하는 구간
    elif loc == 2:
        return mul * loc
    
    # 마지막 두 구간, 1의 개수를 구할 때 곱하길르 하기 때문에 0인 구간을 포함시키지 않아야 한다.
    else:
        return mul * (loc -1) + + f(n-1, k - mul * div )
    


def solution(n, l, r):
    return f(n,r) - f(n,l-1)