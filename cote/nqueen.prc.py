
def possible(x,y,n,col):
    # 이전의 행 ~ 현재행 까지 순회하면서
    for i in range(x):
        # 행이 다르지만 같은 열에 위치하거나, 대각선에 위치하는지 확인한다 (행1 - 행2) == (열1 - 열2)
        if y == col[i] or abs(y - col[i]) == x - i:
            return False
    return True



def queen(x,n,col):
    
    # 행의 끝에 도달한다면
    if x == n:
        return 1
    
    count = 0

    # 현재 행에 대한 모든 열을 순회한다 (0,1), (0,2) ...
    for y in range(n):
        # 체스판에 퀸을 놓을 수 있다면
        if possible(x,y,n,col):
            col[x] = y # x행y열에 퀸이 놓였다
            count += queen(x+1, n,col)
    return count






def solution(n):
    # col[0] = 1 이라면, 첫번재 행 두번쨰 열에 퀸이 배치되었다는 뜻
    col = [0] * n

    # 0은 맨 끝부터 시작한다 는 뜻
    # n은 맵의 크기
    # col은 queen이 몇행 몇열에 배치되었는지 저장하기 위한 리스트
    answer = queen(0, n, col)
    return answer





