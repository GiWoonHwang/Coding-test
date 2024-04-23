# # 수정된 함수 실행 및 결과 출력

# # 주어진 노드의 루트를 찾는 함수
# def find(parent, i):
#     if parent[i] != i:
#         parent[i] = find(parent, parent[i])
#     return parent[i]

# # 두 서브트리를 합치는 함수
# def union(parent, rank, x, y):
#     xroot = find(parent, x)
#     yroot = find(parent, y)
    
#     if rank[xroot] < rank[yroot]:
#         parent[xroot] = yroot
#     elif rank[xroot] > rank[yroot]:
#         parent[yroot] = xroot
#     else:
#         parent[yroot] = xroot
#         rank[xroot] += 1

# # 모든 도시를 연결하는 최소 비용을 계산하는 함수
# def minimumCost(n, costs, offers):
#     edges = [(costs[i] + costs[j], i, j) for i in range(n) for j in range(i+1, n)]
#     edges += [(k, i-1, j-1) for i, j, k in offers]
#     edges.sort(key=lambda x: x[0])
    
#     parent = [i for i in range(n)]
#     rank = [0] * n

#     min_cost = 0
#     for cost, u, v in edges:
#         if find(parent, u) != find(parent, v):
#             union(parent, rank, u, v)
#             min_cost += cost

#     return min_cost

# # 예제 데이터로 함수 테스트 및 정답 출력
# n = 5
# costs = [3, 1, 2, 3, 1]
# offers = [[3, 4, 1], [1, 5, 5]]
# answer = minimumCost(n, costs, offers)
# print(f"모든 도시를 연결하는 데 필요한 최소 비용은 {answer}입니다.")


def find(parent, i):
    if parent[i] != i:
        parent[i] = find(parent, parent[i])
    return parent[i]

def union(parent, rank, x, y):
    xroot = find(parent, x)
    yroot = find(parent, y)
    
    if rank[xroot] < rank[yroot]:
        parent[xroot] = yroot
    elif rank[xroot] > rank[yroot]:
        parent[yroot] = xroot
    else:
        parent[yroot] = xroot
        rank[xroot] += 1

def minimumCost(n, costs, offers):
    # 도시 쌍과 각 도시에서 다른 도시로의 간접 비용을 계산
    edges = []
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            # i와 j 사이의 직접 연결 비용을 계산합니다.
            direct_cost = costs[i-1] + costs[j-1]
            edges.append((direct_cost, i, j))
    
    # offers에 있는 제안된 연결 추가
    for cost, u, v in offers:
        edges.append((cost, u, v))
    
    # 모든 간선을 비용 기준으로 정렬
    edges.sort()
    
    # Union-Find 구조 초기화
    parent = [i for i in range(n+1)]
    rank = [0] * (n+1)

    min_cost = 0
    for cost, u, v in edges:
        if find(parent, u) != find(parent, v):
            union(parent, rank, u, v)
            min_cost += cost

    return min_cost

# 예제 데이터로 함수 테스트 및 정답 출력
n = 5
costs = [3, 1, 2, 3, 1]
offers = [(1, 3, 4), (5, 1, 5)]
answer = minimumCost(n, costs, offers)
print(f"모든 도시를 연결하는 데 필요한 최소 비용은 {answer}입니다.")
