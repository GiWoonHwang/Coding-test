triangle = [[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]


def solution(triangle):
    # 최 하위층 부터 시작한다.
    # 층 수 == 층에 있는 숫자의 개수
    floor = len(triangle) -1
    print(floor)
    while floor > 0:
        for i in range(floor):
            # 현재 층의 최대값을 바로 위층에 더해준다
            triangle[floor-1][i] += max(triangle[floor][i], triangle[floor][i+1])
        floor -= 1

    return triangle[0][0]







print(solution(triangle))




