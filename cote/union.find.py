# print("------------0 0을 입력 시 프로그램 종료-------------")

parent = [0,1,2,3,4,5]

def find(x):
    print('1. 매개변수 x의 값: ', x)
    print('2. parent[x]: ', parent[x])
    if x == parent[x]:
        return x
    p = find(parent[x])
    print('3. p의 값: ', p)
    parent[x] = p
    return parent[x]  #루트 노드 반환

def union(a,b):
    a = find(a)
    b = find(b)

    if a == b: #동일한 집합
        pass
    if a < b:  #서로 다르면 두 집합을 합침
        parent[b] = a
    else:
        parent[a] = b

union(1,2)
union(2,3)
print('parent',parent)
# union(4,5)

# while True:
#     A, B = map(int, input("두 개의 노드를 입력하세요.: ").split())
#     if (A,B)==(0,0):
#         print("프로그램 종료")
#         break
#     elif find(A) == find(B):
#         print("같은 그래프에 속해 있습니다.")
#     else:
#         print("서로 다른 그래프에 속해 있습니다.")