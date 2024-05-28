'''
주변을 탐색하며 1로 이어져 있는 칸을 전부 찾아 그 개수를 저장한다
석유 덩어리가 같은 y축에 존재한다면 같은 리스트 인덱스에 누적으로 더해준다
'''
from collections import deque


def solution(land):
    answer = 0

    # x좌표 최대 길이
    n = len(land)

    # y좌표 최대 길이
    m = len(land[0])

    # 특정 좌표에서 상하좌우로 이동하기 위한 변수
    dx = [0,0,1,-1]
    dy = [1,-1,0,0]

    # 석유시추값 구하기 위한 배열
    result = [0 for i in range(m+1)]

    # 방문노드 처리
    visited = [[0 for i in range(m)] for j in range(n)]

    def bfs(a, b):
        # 특정 좌표에서 석유를 최대 몇개 시추 할 수 있는지 구하는 변수
        count = 0

        # 방문처리
        visited[a][b] = 1
        q = deque()

        # 매개변수 x,y 좌표를 큐에 넣음
        q.append((a,b)) 

        # 특정 석유 덩어리를 시추할 수 있는 좌표 범위
        min_y, max_y = b, b


        while q:
            x,y = q.popleft() 
            min_y = min(min_y, y)
            max_y = max(max_y, y)
            count += 1
            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if nx < 0 or ny < 0 or nx >= n or ny >= m:
                    continue
                if visited[nx][ny] == 0 and land[nx][ny] == 1:
                    visited[nx][ny] = 1
                    q.append((nx,ny))
        
        # 구간을 탐색하면서 현재 좌표에서 시추할 수 있는 최대 석유량을 누적해서 더해준다.
        for i in range(min_y, max_y+1):
            result[i] += count

    for i in range(n):
        for j in range(m):
            if visited[i][j] == 0 and land[i][j] == 1:
                bfs(i,j)
    answer = max(result)
    return answer



# 예제 입력
land = [[0, 0, 0, 1, 1, 1, 0, 0], [0, 0, 0, 0, 1, 1, 0, 0], [1, 1, 0, 0, 0, 1, 1, 0], [1, 1, 1, 0, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0, 1, 1]]


print(solution(land))