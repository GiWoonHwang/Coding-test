grid = ["SL","LR"]

def solution(grid):
    answer = []
    rows, cols = len(grid), len(grid[0])
    # 빛의 경로는 왼,오,위,아 뿐이다 따라서 False for _ in range(4)를 통해 빛이 이동한 경로인지 체크한다.
    gone = [[[False for _ in range(4)] for _ in range(cols)] for _ in range(rows)]
    go = [[-1,0], [0,1], [1,0], [0,-1]]

    # 행,열,방향
    def travel(r,c,d):
        count = 0
        while True:
            gone[r][c][d] = True
            count += 1

            # 현재 방향에서 상하좌우로 움직여 탐색할 준비함
            dr, dc = go[d]
            rr,cc = r + dr, c + dc

            # 경계를 넘는 경우 처리
            # 예를 들어, 그리드의 행 수가 5 (rows = 5)이고 rr = 5인 경우, (5 + 5) % 5 = 10 % 5 = 0이 되어 r은 다시 0행으로 돌아갑니다.
            r = (rr + rows) % rows
            c = (cc + cols) % cols


            # 0,1,2,3를 위,오,아,왼으로 잡고
            if grid[r][c] == 'L':
                d = (d + 3) % 4  # 왼쪽으로 90도 회전
            elif grid[r][c] == 'R':
                d = (d + 1) % 4  # 오른쪽으로 90도 회전
        
            # 만약 이미 방문한 위치와 방향이면 종료
            if gone[r][c][d]:
                break
        return count

    for i in range(rows) : 
        for j in range(cols) : 
            for k in range(4) :
                if not gone[i][j][k] :
                    r,c,d = i,j,k
                    answer.append(travel(r,c,d))
                    
    return sorted(answer)    



    



