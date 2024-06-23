from collections import deque

def bfs(start, end, maps):
    dy = [0,1,-1,0]
    dx = [1,0,0,-1]

    n = len(maps) # 세로
    m = len(maps[0]) # 가로

    visited = [[False] * m for _ in range(n)]

    que = deque()
    flag = False

    # 시작점 좌표 찾기
    for i in range(n):
        for j in range(m):
            # 시작 지점이라면 시작점 좌표를 기록
            if maps[i][j] == start:
                que.append((i,j,0))
                visited[i][j] = True # 좌표 방문 처리
                flag = True; break  # 시작점 체크에 대한 변수
        if flag: break # 시작점을 찾았다면, 반복문을 종료


    # bfs 수행하기
    while que:
        y, x, cost = que.popleft()

        # 좌표가 출구이면
        if maps[y][x] == end:
            return cost
        
        # 상하좌우로 이동 시도
        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]

            if 0<= ny < n and 0 <= nx < m and maps[ny][nx] != 'X':
                if not visited[ny][nx]:
                    que.append((ny,nx, cost +1))
                    visited[ny][nx] = True

    return -1 
                    

def solution(maps):
    path1 = bfs('S', 'L', maps)	# 시작 지점 --> 레버
    path2 = bfs('L', 'E', maps) # 레버 --> 출구
    
    # 둘다 -1 이 아니라면 탈출할 수 있음
    if path1 != -1 and path2 != -1:
        return path1 + path2
        
   	# 둘중 하나라도 -1 이면 탈출할 수 없음
    return -1


