def collatz(k):
    result = []
    while k != 1:
        result.append(k)
        if k % 2 == 0:
            k = k/2
        else:
            k = k * 3 + 1
    result.append(k)
    return result 
        

def solution(k, ranges):
    answer = []
    ubak = collatz(k)
    
    for i in ranges:
        total = 0
        ubak_range = ubak[i[0]: len(ubak)+i[1]]

                         
        if i[0] >= i[1] + len(ubak):
            answer.append(-1)
            continue

        for i in range(len(ubak_range)-1):
            total += (((ubak_range[i] + ubak_range[i+1]) * 1) / 2)

        answer.append(total)
    
    
    return answer



















