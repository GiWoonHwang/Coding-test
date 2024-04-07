
'''
1. 무적권 수 > 적의수  무조건 모든라운드를 통과할 수 있다. return 적의 수
2. 적의 수를 힙에 담기 시작한다. 
3. 자료구조가 k의 수를 넘어가기 시작하면 n을 차감한다
'''
import heapq 

# 7, 3, [4, 2, 4, 5, 3, 3, 1]
def solution(n, k, enemy):
    if k >= len(enemy):
        return len(enemy)
    priority_queue = []

    for i in range(len(enemy)):
        # 힙에 라운드에 등장하는 적을 오름차순으로 담아준다
        heapq.heappush(priority_queue, enemy[i])


        # 적들이 등장하는 라운드가 무적권보다 많다면
        if len(priority_queue) > k:
            # 적은 적들부터 가져온다
            last = heapq.heappop(priority_queue)

            if last > n:
                return i 
            n -= last

    return len(enemy)
        
        
        
        
        
        
        
        
