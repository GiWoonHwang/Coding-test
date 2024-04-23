def dfs(graph, i, visited):
    visited[i] = 1
    print('1. 매개변수로 들어온 i의 값: ',i)

    for j in graph[i]:
        print('2. graph[i]의 값: ',graph[i])
        print('3. graph[i]를 반복하는 j의 값: ',j)
        if visited[j] == 0:
            print('4. 방문하지 않은 노드를 탐색할 때, j의 값: ',j)
            dfs(graph, j, visited)

def dfs_test(graph, i, visited):
    # i 번째 노드 방문처리
    visited[i] = 1 
    # i 노드의 하위 노드를 순회한다.
    for j in graph[i]:
        # 하위 노드를 방문하지 않았다면
        if visited[j] == 0:
            dfs_test(graph, j, visited)



graph = [
    [],
    1[2, 3],
    2[1, 4, 5],
    3[1, 6, 7],
    4[2],
    5[2],
    6[3],
    7[3, 8, 9],
    8[7, 9],
    9[7, 8],
]


visited = [False] * 10

print("방문 순서는 다음과 같다")
dfs(graph,1,visited)