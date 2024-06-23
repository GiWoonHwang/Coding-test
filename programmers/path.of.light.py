'''
1. 시작점과 시작 방향에 대한 완전탐색을 진행한다.

2. 빛을 어디서 발사시키는지는 언급되지 않았기 때문에, 모든 경우에 대해 빛을 발사시킨 후 사이클을 판단한다.

3. 사이클이란 이미 방문했던 좌표를 동일한 방향으로 재 방문한다는 것을 의미한다.

4. visited[a][b][c] 좌표 (a,b)에 진행방향 c로 방문한 적이 있습니다.
'''



def solution(grid):
    dy = (1,0,-1,0)
    dx = (0,-1,0,1)


    ly, lx = len(grid), len(grid[0])

    visited =  [[[False] * 4 for _ in range(lx)]  for _ in range(ly)]


    for y in range(ly):
        for x in range(lx):
            for d in range(4):
                if visited[y][x][d]:
                    continue

                count = 0

                ny, nx  = y,x

                # 방문하지 않았다면
                while not visited[ny][nx][d]:
                    # 방문처리 후
                    visited[ny][nx][d] = True
                    count += 1





    


    return '서현식'

grid = ["SL","LR"]


print(solution(grid))