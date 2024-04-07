from collections import deque

def solution(board):
    answer = -1

    n,m = len(board), len(board[0])

    directions = [(0,1), (0,-1), (1,0), (-1,0)]


    for x in range(n):
        for y in range(m):
            if board[x][y] == "R":
                sx, sy = x,y
            elif board[x][y] == "G":
                tx, ty = x,y

    visited = [[False]*m for _ in range(n)]

    q = deque() 

    q.append((sx,sy,0))


    while q:
        x, y, level = q.popleft()

        if board[x][y] == "G":
            answer = level
            break

        for dx, dy in directions:
            scope = 1
            while 1:
                # 상하좌우로 계속 이동
                nx, ny = x + dx * scope,  y + dy * scope

                # 벽을만나거나 장애물을 만나 이동할 수 없음
                if nx < 0 or nx >= n or ny < 0 or ny >= m or board[nx][ny] == "D":
                    # 이동불가 직전 좌표가 방문하지 않았다면
                    if visited[nx-dx][ny-dy] == False:
                        visited[nx-dx][ny-dy] == True
                        q.append((nx-dx,ny-dy, level+1))
                    
                    break
                scope += 1

    return answer