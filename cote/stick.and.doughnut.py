edges = [[2, 3], [4, 3], [1, 1], [2, 1]]

def solution(edges):
    # 정답을 처리하기 위한 변수
    answer = [0,0,0,0]
    # 노드를 오가는 간선을 처리하기 위한 변수
    node_cnt = dict({})


    for edge in edges:
        a = edge[0] # 나가는 간선을 가진 노드
        b = edge[1] # 들어오는 간선을 가진 노드

        if not node_cnt.get(a):
            node_cnt[a] = [0,0]


        if not node_cnt.get(b):
            node_cnt[b] = [0,0]

        node_cnt[a][0] += 1
        node_cnt[b][1] += 1

    # key: 노드, cnt: 나가고 들어오는 것이 계산된 배열 
    for key, cnt in node_cnt.items():
        
        # 나가는 것이 2개 이상이고, 들어오는 것이 없는것 == 생성점
        if cnt[0] >= 2 and cnt[1] == 0:
            answer[0] = key
        
        # 나가는 것이 없고, 들어오는 간선이 1개 이상인것 == 막대 그래프
        elif  cnt[0] == 0 and cnt[1] > 0:
            answer[2] +=1
            
        # 나가고 들어오는 것이 2 이상 == 8자 그래프
        elif cnt[0] >= 2 and cnt[1] >= 2:
            answer[3] += 1
            
    answer[1] = node_cnt[answer[0]][0] - answer[2] - answer[3]
    return answer 


        


    return ""







print(solution(edges))