'''
각 직선마다 교점을 직고
교점을 포함하는 최소 사각형을 리턴하라
'''


line = [[2, -1, 4], [-2, -1, 4], [0, -1, 1], [5, -8, -12], [5, 8, 12]]

def solution(line):
    stars = []

    # 교점 구하기
    for i in range(len(line)):
        a,b,c = line[i]
        for j in range(i+1, len(line)):
            c,d,f = line[j]
            # 분모가 0인 경우
            if a*d - b*c == 0:
                continue
            # 분모가 0이 아닌 경우, 정수일 때만
            elif (b*f - e*d) / (a*d - b*c) == int((b*f - e*d) / (a*d - b*c)) and\
                (e*c - a*f) / (a*d - b*c) == int((e*c - a*f) / (a*d - b*c)):
                x = int((b*f - e*d) / (a*d - b*c))
                y = int((e*c - a*f) / (a*d - b*c))
                stars.append((x,y)) # 교점 리스트에 추가
    # 중복 제거
    stars = list(set(stars))

    # y가 크면 위에서부터 아래로 그릴 수있다.
    # x가 크먄 작은 순서대로 그릴 수 있다
    stars.sort(key =lambda x:(x[1], -x[0]), reverse=True)

    # x,y의 최소 범위를 구해야 최소한의 사각형을 그릴 수 있다
    x_list = []
    y_list = []

    for i in stars:
        x_list.append(i[0])
        y_list.append(i[1])
    x_max = max(x_list) 
    x_min = min(x_list)
    y_max = max(y_list)
    y_min = min(y_list)


    new_coordinates = [ ['.'] for i in range(x_min,x_max+1) for _ in range(y_min,y_max+1)]
    for i in stars:
        x = i[0] - x_min
        y = y_max - i[1]
        new_coordinates[y][x] = '*'

    result = []

    for i in new_coordinates:
        result.append("".join(i))
    return result





















print(solution(line))