'''
주변을 탐색하며 1로 이어져 있는 칸을 전부 찾아 그 개수를 저장한다
석유 덩어리가 같은 y축에 존재한다면 같은 리스트 인덱스에 누적으로 더해준다
'''
from collections import deque

land = [[0, 0, 0, 1, 1, 1, 0, 0], [0, 0, 0, 0, 1, 1, 0, 0], [1, 1, 0, 0, 0, 1, 1, 0], [1, 1, 1, 0, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0, 1, 1]]


def solution(land):
    answer = 0
    # 행의 길이
    n = len(land)

    # 열의 길이
    m = len(land[0])

    dx = [0,0, 1, -1]
    dy = [1,-1,0,0]

    result = [0 for i in range(m+1)]

    visited = [[0 for i in range(m+1)] for j in range(n)]

    def bfs(x,y):
        count = 0
        visited[x][y] = 1
        q = deque()
        q.append((a,b))
        
















solution(land)