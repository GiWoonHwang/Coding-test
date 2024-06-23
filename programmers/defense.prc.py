import heapq

def solution(n,k,enemy):
    if k >= len(enemy):
        return len(enemy)
    
    priority_queque = []

    for i in range(len(enemy)):
        # 최소 힙 큐이기 때문에 아무렇게나 넣어도 작은것부터 정렬된다.
        heapq.heappush(priority_queque, enemy(i))

        # 무적권의 수보다 적이 몰려오는 라운드 수가 많다.
        if len(priority_queque) > k:
            # 가장 적은 적들부터 가져온다
            last = heapq.heappop(priority_queque)
            if last > n:
                return i
            n -= last

    return len(enemy)
            
