# 하노이의 탑
'''
문제 설명
하노이 탑(Tower of Hanoi)은 퍼즐의 일종입니다. 세 개의 기둥과 이 기동에 꽂을 수 있는 크기가 다양한 원판들이 있고, 퍼즐을 시작하기 전에는 한 기둥에 원판들이 작은 것이 위에 있도록 순서대로 쌓여 있습니다. 게임의 목적은 다음 두 가지 조건을 만족시키면서, 한 기둥에 꽂힌 원판들을 그 순서 그대로 다른 기둥으로 옮겨서 다시 쌓는 것입니다.

한 번에 하나의 원판만 옮길 수 있습니다.
큰 원판이 작은 원판 위에 있어서는 안됩니다.
하노이 탑의 세 개의 기둥을 왼쪽 부터 1번, 2번, 3번이라고 하겠습니다. 1번에는 n개의 원판이 있고 이 n개의 원판을 3번 원판으로 최소 횟수로 옮기려고 합니다.

1번 기둥에 있는 원판의 개수 n이 매개변수로 주어질 때, n개의 원판을 3번 원판으로 최소로 옮기는 방법을 return하는 solution를 완성해주세요.

제한사항
n은 15이하의 자연수 입니다.
입출력 예
n	result
2	[ [1,2], [1,3], [2,3] ]

'''
# 풀이: 예전에 기초 자료구조 문제에서 풀었다.
# n=3일 경우

#1번 탑에서 1,2번째 판 2번 탑으로 이동 => n=2일 경우

#1번 탑에서 3번 판 3번 탑으로 이동 => n=1일 경우

#2번 탑에서 1,2번째 판 3번 탑으로 이동 => n=2일 경우

# n-1개 판 2번 탑으로 옮기는 경우+1개 판 3번 탑으로 옮기는 경우+ n-1개 판 3번 탑으로 옮기는 경우 이다.

def hanoi(n,start,end,mid):
    global answer
    if n == 1:
        answer.append([start,end])
    else:
        hanoi(n-1,start,mid,end)
        answer.append([start,end])
        hanoi(n-1,mid,end,start)
def solution(n):
    
    global answer
    answer = []
    hanoi(n,1,3,2)
    return answer

# 다른 사람의 풀이 (yield from에 대한 이해 필요)
def hanoi(n):

    def _hanoi(m, s, b, d):
        if m == 1:
            yield [s, d]
        else:
            yield from _hanoi(m-1, s, d, b)
            yield [s, d]
            yield from _hanoi(m-1, b, s, d)

    ans = list(_hanoi(n, 1, 2, 3))
    return ans  # 2차원 배열을 반환해 주어야 합니다.


# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(hanoi(2))