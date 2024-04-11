
def solution(picks, minerals):

    minerals = [list(minerals[i:i+5]) for i in range(0, min(sum(picks)*5, len(minerals)), 5)]
    req = []
    

    for bundle in minerals:
        tmp = [0,0,0]
        for i in bundle:
            tmp[0] += 1
            tmp[1] += 5 if i == "diamond" else 1
            tmp[2] += 25 if i == "diamond" else 5 if i == "iron" else  1
        req.append(tmp)
    


    req.sort(key=lambda x:(-x[2],-x[1]))

    
    ans = 0
    for score in req:
        if picks[0]:
            ans += score[0]
            picks[0] -= 1
        elif picks[1]:
            ans += score[1]
            picks[1] -= 1
        elif picks[2]:
            ans += score[2]
            picks[2] -= 1
        else:
            break
            
            
    return ans
    


