def solution(cards):
    answer = []
    for i in range(len(cards)):
        temp = 0
        while cards[i]:
            next_i = cards[i] - 1
            cards[i], i = 0, next_i
            temp  += 1
        answer.append(temp)
    
    answer.sort()
    
    return answer[-1] * answer[-2]
        