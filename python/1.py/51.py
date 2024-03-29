# 크레인 인형뽑기 게임

'''
제한사항
board 배열은 2차원 배열로 크기는 "5 x 5" 이상 "30 x 30" 이하입니다.
board의 각 칸에는 0 이상 100 이하인 정수가 담겨있습니다.
0은 빈 칸을 나타냅니다.
1 ~ 100의 각 숫자는 각기 다른 인형의 모양을 의미하며 같은 숫자는 같은 모양의 인형을 나타냅니다.
moves 배열의 크기는 1 이상 1,000 이하입니다.
moves 배열 각 원소들의 값은 1 이상이며 board 배열의 가로 크기 이하인 자연수입니다.

입출력 예
board	                                                        moves	            result
[[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]	[1,5,3,5,1,2,1,4]	4
'''

# 뽑힌 인형을 담아줄 스택 생성
answer = 0
bucket = []

board = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
moves = [1,5,3,5,1,2,1,4]

for i in moves:
    for j in board:
        if j[i-1] != 0: # move는 1부터 시작하니까 인덱스로 사용하려면 1을 빼줘야 한다.
            bucket.append(j[i-1]) # 크레인 위치에 인형이 있다면 인형을 넣어줌
            j[i-1] = 0 # 인형을 넣었으니 j는 0이 된다
            break
    if len(bucket) >= 2 and bucket[-1] == bucket[-2]: # 두개이상 같은것이 있다면
        answer += 2
        bucket = bucket[:-2] # 제거

answer


