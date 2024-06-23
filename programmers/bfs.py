from collections import deque

# BFS 메서드 정의
def bfs (graph, node, visited):
    # 큐 구현을 위한 deque 라이브러리 활용
    queue = deque([node])
    # 현재 노드를 방문 처리
    visited[node] = True
    
    # 큐가 완전히 빌 때까지 반복
    while queue:
        # 큐에 삽입된 순서대로 노드 하나 꺼내기
        v = queue.popleft()
        # 탐색 순서 출력
        print(v, end = ' ')
        # 현재 처리 중인 노드에서 방문하지 않은 인접 노드를 모두 큐에 삽입
        for i in graph[v]:
            if not (visited[i]):
                queue.append(i)
                visited[i] = True

# 예제 그래프
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