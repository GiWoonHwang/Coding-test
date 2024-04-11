# 광물을 5개씩 그룹화
# 각 그룹에 대한 곡갱이별 피로도 계산

def solution(picks, minerals):

    # 광물을 5개씩 정렬, 곡괭이 합 * 5 vs 광물 수 중 적은것으로 선택한다.
    # 곡괭이가 아무리 많아도 광물이 적으면 캘 수 있는 최대 개수는 광물의 수 뿐이니까
    minerals = [list(minerals[i:i+5]) for i in range(0,min(sum(picks))*5, len(minerals),5)]
    req = []

    # 광물 그룹에 대한 곡괭이별 피로도 계산
    for bundle in minerals:
        tmp = [0,0,0]
        for i in bundle:
            tmp[0] += 1
            tmp[1] += 5 if i == "diamond" else 1
            tmp[2] += 25 if i == "diamond" else 5 if i == "iron" else  1
        req.append(tmp)


    req.sort(key=lambda x: (-x[2], -x[1]))

    ans = 0

    # 곡괭이 사용 후 곡괭이에 따른 피로도를 누적 더해주고 곡괭이 개수 차감
    for score in req:
        if picks[0]:
            ans += score[0]
            picks[0] -= 1
        elif picks[1]:
            ans += score[1]
            picks[1] -= 1
        elif picks[2]:
            ans += score[2]
            picks[0] -= 1
        else:
            break
    return ans


    



