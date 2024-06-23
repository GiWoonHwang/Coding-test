def dfs(graph, i, visited):
    visited[i] = True
    print(i, end=" ")
    for j in graph[i]:
        if visited[j] == False:
            dfs(graph, j, visited)


graph = [
    [],
    [2, 3],
    [1, 4, 5],
    [1, 6, 7],
    [2],
    [2],
    [3],
    [3, 8, 9],
    [7, 9],
    [7, 8],
]


visited = [False] * 10

print("방문 순서는 다음과 같다")
dfs(graph,1,visited)