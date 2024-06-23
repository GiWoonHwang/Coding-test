# 가장 멀리있느 배열부터 처리하면 됨
# 왕복해야 하기 때문에 정답 * 2
# 각가 집의 위치에서 존재하는 택배 수 - cap이 음수라면 굳이 

def solution(cap, n, deliveries, pickups):
    deliveries = deliveries[::-1]
    pickups = pickups[::-1]
    answer = 0
    have_to_del = 0
    have_to_pick = 0
    
    # 수거해야할 상자와 배달해야 할 상자를 집계함
    for i in range(n):
        have_to_del += deliveries[i]
        have_to_pick += pickups[i]
        # 배달할 상자나 수거할 상자가 남아 있을 때 까지 반복함
        while have_to_del >0 or have_to_pick>0:
            have_to_del -= cap
            have_to_pick -= cap
            answer += (n - i) * 2
    return answer
