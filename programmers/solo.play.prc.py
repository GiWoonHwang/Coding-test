# cards 배열의 원소를 확인한다. 원소거 0 이라면 열어본 상자이다
# 0이 아니라면 해당 원소를 다음 인덱스로 지정하고 해당 원소의 인덱스를 0으로 처리한다
# 위의 과정을 반복해 원소거 0인 인덱스르 만나면 작업 횟수를 저장한다 (여기까지가 한 사이클이다)
# 모든 원소에 대하여 반복을 수행한다

cards = [8,6,3,7,2,5,1,4]

def solution(cards):
    # 작업 사이클을 저장할 배열
    answer = []

    # cards 배열을 순회한다
    for i in range(len(cards)):
        # 한 사이클에 해당하는 작업 횟수를 누적 더할 변수 (상자를 열어본 횟수)
        temp = 0
        # 열어본 상자가 나올 때 까지 반복
        while cards[i]:
            # 다음 인덱스 위치는 해당 요소 -1에 해당함
            next_i = cards[i] - 1

            # 상자를 열고(0으로 처리), 다음 위치로 이동
            cards[i], i  = 0, next_i
            # 상자 오픈 횟수 증가
            temp += 1
        
        # 열어본 상자를 만났다면 한 사이클이 종료됨
        answer.append(temp)

    answer.sort()
    
    return answer[-1] * answer[-2]    
