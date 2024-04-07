from collections import deque
def solution(board):
    answer = -1
    
    # 행과 열 
    n, m = len(board), len(board[0])

    # 움직일 수 있는 상하좌우 방향
    direction = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    
    for x in range(n):
        for y in range(m):
            if board[x][y] == "R":
                # 시작위치 좌표 설정
                sx, sy = x, y
            elif board[x][y] == "G":
                # 목표위치 좌표 설정
                tx, ty = x, y
    
    # bfs 방문노드 체크
    visited = [[False]*m for _ in range(n)]

    q = deque()

    # 큐에 처음 방문 좌표 기록: 현재 위치와 위치까지 도달하는데 필요한 이동횟수 저장
    q.append((sx, sy, 0))
    
    while q:
        # 큐에서 좌표 꺼내기
        x, y, level = q.popleft()
        
        # 방문한 좌표가 목표위치라면 종료
        if board[x][y] == "G":
            answer = level
            break
        
        # 한방향으로 미끄러져 이동
        for dx, dy in direction:
            print('dx',dx)
            print('dy',dy)
            scope = 1
            while 1:
                nx, ny = x+dx*scope, y+dy*scope
                
                if nx < 0 or nx >= n or ny < 0 or ny >= m or board[nx][ny] == "D":
                    if visited[nx-dx][ny-dy] == False:
                        visited[nx-dx][ny-dy] = True
                        q.append((nx-dx, ny-dy, level+1))
                    
                    break
                
                scope += 1
    
    
    
    return answer