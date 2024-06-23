def solution(cap, n, deliveries, pickups):
    answer = 0

    # 배달장소와 픽업장소에 해당하는 배열을 뒤집어 먼 곳부터 처리한다
    deliveries = deliveries[::-1]
    pickups = pickups[::-1]

    # 배달해야하는 상자와 수거해야 하는 상자에 해당하는 변수
    have_to_del = 0
    have_to_pick = 0

    # 해야할 업무를 집계함
    for i in range(n):
        have_to_del += deliveries[i]
        have_to_pick += pickups[i]
        
        # 수거 및 배달해야하는 상자의 수량에서 트럭의 최대 수납 수량을 뺴준다.
        # 음수라면 더 적재할 수 있어 물류센터를 들리지 않아도 되고, 0을 초과한다면 반드시 물류센터에 갔다와야 한다.
        while  have_to_del > 0   or have_to_pick > 0: 
            have_to_del -= cap
            have_to_pick -= cap
            answer += (n-i) * 2






    return answer
        
        
        
        
        
        
        