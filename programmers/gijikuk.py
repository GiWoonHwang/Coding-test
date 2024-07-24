import math


n = 5
stations = [3]
w = 1


def solution(n, stations, w):
    answer = 0
    # 커버범위 = 본인기준 앞뒤 + 본인
    range = w + w + 1

    # 1번 아파트부터 체크 시작
    now = 1

    for station in stations:

        # 현재 기지국이 커버하고 있는 범위의 시작위치를 계산하여 커버되지 않은 아파트의 범위를 찾는다
        length = station - w - now

        if length > 0:
            answer += math.ceil(length/ range)

        now = station + w + 1

    # 마지막 기지국 설치 후 커버되지 않은 아파트 처리
    if n >= now:
        # 본인을 포함해야 하기 때문에 +1을 해줌 10 - 4 = 6이지만 실제로는 4도 포함
        length = n - now + 1
        answer += math.ceil(length/range)




    return answer





print(solution(5,stations,w))