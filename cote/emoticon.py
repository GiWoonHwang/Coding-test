'''
유저는 각각 원하는 할인율이 존재한다.
특정 할인율 이상이 되면 이모티콘을 정해진 가격만큼 구매한다.
구매비용이 가격을 넘어서면 구매한 이모티콘을 모두 취소하고 이모티콘 플러스 서비스를 구매한다.
이모티콘 할인액의 최대 상한선은 40% 이다.
이모티콘의 할인액을 조절하면서 한명이라도 더 많은 유저가 플러스 서비스를 구매하게 해야 한다.
'''


def solution(users, emoticons):
    answer = [0,0]
    data = [10,20,30,40]
    discount = []
    
    def dfs(tmp, d): # 모든 경우의 할인율 조합을 구함
        if d == len(tmp):
            return discount.append(tmp[:])
        
        else:
            for i in data:
                tmp[d] += i
                dfs(tmp, d+1)
                tmp[d] -= i
    dfs([0]*len(emoticons), 0)
    
    for disc in discount: # 만들어진 모든 조합을 하나씩 살펴봄
        cnt = 0
        get = 0
        for i in users:
            pay = 0
            for j in range(len(disc)):
                if i[0] <= disc[j]:
                    pay += emoticons[j] * (100 - disc[j])/100
                if pay >= i[1]:
                    break
            if pay >= i[1]: # 만약 유저의 제한금액 초과시 플러스 구매
                pay = 0
                cnt += 1
            get += pay
        if cnt >= answer[0]: # 현재 최대값을 넘어가면 갱신
            if cnt == answer[0]:
                answer[1] = max(answer[1], get)
            else:
                answer[1] = get
            answer[0] = cnt
        
    return answer
            
                
        


    
    return answer