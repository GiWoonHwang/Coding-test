'''
1. 각각의 벽을 맞추지 못하는 경우의 조건을 정의한다.

2. 좌표를 대칭이동 시킨 후 피타고라스 정리를 통하여 거리를 구한다.

3. 아래쪽 벽을 맞췄을 때, y축을 대칭이동 시키면 음수, 왼쪽벽을 맞췄을 때, x축을 대칭이동 시키면 음수가 된다.
'''


m = 10
n = 3
startX= 3
startY = 7
balls=[[7, 7], [2, 7], [7, 3]]

def solve(x, y, startX, startY, ballX, ballY):
    dists = []
    # 위쪽 벽
    # 단, x좌표가 같고 목표의 y가 더 크면 안된다.
    if not (ballX == startX and ballY > startY):
        d2 = (ballX - startX)**2 + (ballY - 2*y+startY)**2
        dists.append(d2)
    # 아래쪽 벽
    # 단, x좌표가 같고 목표의 y가 더 작으면 안된다.
    if not (ballX == startX and ballY < startY):
        d2 = (ballX - startX)**2 + (ballY + startY)**2
        dists.append(d2)
    # 왼쪽 벽에 맞는 경우
    # 단, y좌표가 같고 목표의 x가 더 작으면 안된다.
    if not (ballY == startY and ballX < startX):
        d2 = (ballX + startX)**2 + (ballY - startY)**2
        dists.append(d2)
    # 오른쪽 벽
    # 단, y좌표가 같고 목표의 x가 더 크면 안된다.
    if not (ballY == startY and ballX > startX):
        d2 = (ballX - 2*x+startX)**2 + (ballY - startY)**2
        dists.append(d2)
    
    return min(dists)





def solution(m, n, startX, startY, balls):
    answer = []
    for ballX, ballY in balls:
        answer.append(solve(m, n, startX, startY, ballX, ballY))
    return answer







print(solution(m, n, startX, startY, balls))