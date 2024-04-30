from collections import deque

# BFS 메서드 정의
def bfs(graph, node, visited):
    queue = deque([node])

    visited[node] = True

    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if not (visited[i]):
                queue.append(i)
                visited[i] = True


graph = [
    [],
    [2, 3],
    [1, 8],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7, 8],
    [6, 8],
    [2, 6, 7]
]

# 노드별로 방문 정보를 리스트로 표현
visited = [False] * 9

# 정의한 BFS 메서드 호출(노드 1을 탐색 시작 노드로 설정)
bfs(graph, 1, visited)