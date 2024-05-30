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


    # y를 내림차순 정렬하여 위에서부터 아래로 그런다
    # x를 오름차순 하여 왼쪽부터 오른쪽으로 그린다
    stars.sort(key= lambda x: (x[1], -x[0]), reverse=True)


    # 교점의 범위를 구해서 최소한의 사각형을 그린다.
    x_list = []
    y_list = []

    for i in stars:
        x_list.append(i[0])
        y_list.append(i[1])

    # 각 좌표에 해당하는 최소값을 구해 범위를 잡는다.
    x_max = max(x_list)
    x_min = min(x_list)

    y_max = max(y_list)
    y_min = min(y_list)


    # 새로운 좌표를 통해 새로운 사각형을 만든다.
    new_sagak = [['.'] for i in range(x_min, x_max+1) for _ in range(y_min,y_max)]
    for i in stars:
        x = stars[0] - x_min
        y = y_max - i[1]
        new_sagak[y][x]  = '*'

    result = []

    for i in new_sagak:
        result.append("".join(i))





    return result








print(solution(line))