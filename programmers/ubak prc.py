# 콜라츠 추측을 구현한다. 
# 콜라츠 추측으로 얻은 값을 좌표에 표시한다 (좌표에 표시할 때 마다 x좌표는 1씩 증가) ex) (0,5),(1,16) ...
# 각 좌표를 이어 꺾은선 그래프로 나타낸다
# 좌표에서 주어진 범위 ranges 만큼의 넓이를 구한다

# 예시 
k = 5
ranges = [[0,0],[0,-1],[2,-3],[3,-3]]


def collatz(k):
    result = []
    while k != 1:
        result.append(k)
        if k % 2 == 0:
            k = k/2
        else:
            k = k * 3 + 1

def solution(k, ranges):
    answer = []

    # 콜라츠 추측으로 얻은 값들 [5, 16, 8, 4, 2, 1]
    ubak = collatz(k)

    for i in ranges:
        '''
        만약 i의 범위가 [1, -2]라면, 그 뜻은 넓이를 구하는 시작점의 인덱스 1에 해당하는 값(16) 부터 끝에서부터 2개의 요소 전까지의 값(4)
        len(ubak) + i[1] = 6 - 2 == ubak[4]와 같다. (인덱스의 마지막은 -1을 해주기 때문이다)
        ubak[i[0]:len(ubak)+ i[1]] => ubak[1:4] == [16,4] (파이썬은 배열범위 계산은 [시작:끝 -1] 이다)
        '''
        total = 0
        ubak_range = ubak[i[0]:len(ubak)+ i[1]]

        # 위에서 말한 범위가 시작점을 넘어서는 경우
        if i[0] >= i[1] + len(ubak):
            answer.append(-1)
            continue

        # 사다리꼴 구하는 공식: x는 높이, ubak_range의 요소가 윗변과 아랫변이 된다
        # -1 해주는 이유: 사다리꼴의 넓이를 계산하기 위해서는 현재 좌표과 다음좌표가 필요하다. 마지막 좌표는 다음 좌표가 없기 때문에 넓이를 구할 수 없다. 마지막 요소는 단독으로 사다리꼴을 형성할 수 없다
        for i in range(len(ubak_range)-1):
            total += ((ubak_range[0]+ubak_range[1])*1 /2 )
        answer.append(total)
    return answer