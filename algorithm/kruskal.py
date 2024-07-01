'''
최소 신장 트리를 구하는 알고리즘 
최소 신장 트리란 만들 수 있는 신장 트리(사이클이 없는 트리) 중 최소의 간선 비용을 들여서 만들 수 있는 트리이다.

1. 주어진 모든 간선 정보에 대해 비용이 낮은 순서대로 정렬을 수행
2. 정렬된 간선 정보를 하나씩 확인 하면서 현재 간선이 노드들 간의 사이클을 발생시키는지 확인
3. 만약 사이클이 발생하지 않는 경우, 최소 신장 트리에 포함시키고 사이클이 발생한 경우 최소 신장 트리에 포함시키지 않음
4. 1~3번의 과정을 모든 간선 정보에 대해 반복 수행

tip) (34,2,6) 연산에서 6번 노드의 부모가 1로 바뀌게 되면서, 연쇄적으로 부모노드 3을 가리키던 3,4,7번의 부모노드가 1로 바뀐다
'''


# 노드의 개수와 간선의 개수
v = 7
e = 9
parent = [0] * (v + 1)  # 부모 테이블 초기화

# 부모 테이블상에서, 부모를 자기 자신으로 초기화
for i in range(1, v + 1):
    parent[i] = i  # parent [0, 1, 2, 3, 4]


# 모든 간선을 담을 리스트와 최종 비용을 담을 변수 result
edges = [
    (7, 3, 4),  # 노드 3과 노드 4 사이의 비용이 7
    (13, 4, 7),  # 노드 4과 노드 7 사이의 비용이 13
    (23, 4, 6),  # 노드 4과 노드 6 사이의 비용이 23
    (25, 6, 7),  # 노드 6와 노드 7 사이의 비용이 25
    (29, 1, 2),  # 노드 1와 노드 2 사이의 비용이 29
    (34, 2, 6),   # 노드 2과 노드 6 사이의 비용이 34
    (35, 2, 3),   # 노드 2과 노드 3 사이의 비용이 35
    (53, 5, 6),   # 노드 5과 노드 6 사이의 비용이 53
    (75, 1, 5),   # 노드 1과 노드 5 사이의 비용이 75

]
result = 0
selected_edges = []

# 간선을 오름차순으로 정렬 
edges.sort() 

# 특정 원소가 속한 집합을 찾는 함수
def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

# 두 원소가 속한 집합을 합치는 함수
def union_parent(parent, a, b):
    a = find_parent(parent, a)
    print('a',a)
    b = find_parent(parent, b)
    print('b',b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b

# 간선을 하나씩 확인하며
for edge in edges:
    cost, a, b = edge 
    if find_parent(parent, a) != find_parent(parent, b):
        union_parent(parent, a, b)
        result += cost
        selected_edges.append((a, b, cost))

print("최소 신장 트리 구성:")
for a, b, cost in selected_edges:
    print(f"노드 {a}와 노드 {b} 연결 (비용: {cost})")
print("최소 신장 트리의 총 비용은:", result)
