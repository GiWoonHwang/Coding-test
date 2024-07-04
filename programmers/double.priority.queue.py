'''
| 숫자: 큐에 숫자를 넣는다.
D 1: 큐에서 최대값을 삭제한다.
D -1: 큐의 최소값을 삭제한다.
연산 후 비어있으면 [0,0] 비어있지 않으면 [최소값, 최대값] 리턴한다.
'''

# 파이썬은 최소힙이다.
import heapq
operations = ["I 16", "I -5643", "D -1", "D 1", "D 1", "I 123", "D -1"]

def solution(operations):
    answer = []
    
    q = []
    for operation in operations:
        # 연산자와 피연산자를 나눈다 ? (근데 이렇게 설명하면 애매한데)
        x, num = operation.split()
        num = int(num)

        # 숫자를 삽입한다.
        if x == 'I':
            heapq.heappush(q, num)
        # 최대값을 제거한다.
        elif x == 'D' and num == 1:
            if len(q) !=0:
                max_value = max(q)
                q.remove(max_value)
        else:
                if len(q) != 0:
                    heapq.heappop(q)
    
    if len(q) == 0:
        answer = [0,0]
    else:
        answer = [max(q), heapq.heappop(q)]


        print(x,num)
    return answer




print(solution(operations))