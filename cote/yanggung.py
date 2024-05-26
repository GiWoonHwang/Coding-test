n = 5
info = [2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0]

'''
점수차이가 가장 큰 경우 and 점수 분포가 낮은쪽에 가장 많이 위치하는 경우
두 가지 조건을 다 만족해야함
'''
def solution(n, info):
    global max_gap, answer
    
    answer = [-1]
    score = [0]*11
    max_gap = 0
    
    # 라이언의 승리여부와 점수차를 리턴한다.
    def is_winner_with_gap(score):
        a = 0  # 어피치 점수
        b = 0  # 라이언 점수
        
        for i in range(len(info)):
            # 라이언이나 어피치가 특정 과녁을 맞춰야함 
            if info[i] > 0 or score[i] > 0:
                # 어피치가 더 많이 맞추면
                if info[i] >= score[i]:
                    a += (10 - i)
                # 라이언이 더 많이 맞추면
                else:
                    b += (10 - i)
        return (b > a, abs(a - b))

    def dfs(L, cnt):
        global max_gap, answer
        # 과녁의 점수가 0점이거나, 화살도 다 소모했을 때
        if L == 11 or cnt == 0:
            # 라이언의 승리여부, 점수차 
            is_winner, gap = is_winner_with_gap(score)
            # 라이언이 승리했는데,
            if is_winner:
                # 화살도 남아있다.
                if cnt >= 0:  # 화살이 남은 경우
                    # 화살을 다 사용하고 낮은 점수를 많이 맞추는 경우를 최우선으로 return 하라는 조건을 만족
                    score[10] = cnt
                
                if gap > max_gap:  # 더 큰 점수 차이 발견 시 업데이트
                    max_gap = gap
                    answer = score.copy()
                    
                elif gap == max_gap:  # 같은 점수 차이인 경우 더 낮은 점수를 많이 맞힌 경우로 업데이트
                    for i in range(len(score)):
                        if answer[i] > 0:
                            max_i_1 = i
                        if score[i] > 0:
                            max_i_2 = i
                    if max_i_2 > max_i_1:
                        answer = score.copy()
                    
            return
        
        # 해당 과녁을 맞출 수 있는 기회가 더 많이 남음 즉, 해당 과녁의 점수를 라이언의 것으로 할 수 있음
        if cnt > info[L]:
            # 해당 점수를 라이언의 것으로 한다, 어피치보다 무조건 한발 더 쏴야한다.
            score[L] = info[L] + 1
            # 다음 과녁, 남은화살 = 현재 화살 - 현재 과녁의 점수를 내 것으로 만들기 위한 화살 수(엇피치가 특정 점수에 쏜 화살 개수 + 1)
            dfs(L + 1, cnt - (info[L] + 1))
            # 다음 탐색을 위한 백트래킹
            score[L] = 0
        
        dfs(L + 1, cnt)
    
    # 10점 과녁부터, 남은 화살을 가지고 탐색을 시작하겠다.
    dfs(0, n)
    
    return answer

# 테스트
print(solution(5, [2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0]))  # [0,2,2,0,1,0,0,0,0,0,0]
# print(solution(1, [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]))  # [-1]
# print(solution(9, [0, 0, 1, 2, 0, 1, 1, 1, 1, 1, 1]))  # [1,1,2,0,1,2,2,0,0,0,0]
# print(solution(10, [0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 3]))  # [1,1,1,1,1,1,1,1,0,0,2]
