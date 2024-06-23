def solution(board):
    strboard = "".join(board)
    # o의 개수가 x보다 같거나 많아야 한다.
    check_validation = strboard.count("O") - strboard.count("X")
    if check_validation not in [0,1]:
        return 0
    
    # [('O', '.', '.'), ('.', 'O', '.'), ('X', '.', 'X')]
    # 각 요소의 인덱스 끼리 묶어더 리턴한다
    colboard = list(zip(*board))
    ocnt = 0
    xcnt = 0
    
    for i in range(3):
        if colboard[i].count('O') == 3 or board[i].count('O') == 3:
            ocnt += 1
        if colboard[i].count('X') == 3 or board[i].count('X') == 3:
            xcnt += 1
    
    
    if (board[0][0] == board[1][1] == board[2][2] == 'O') or (board[0][2] == board[1][1] == board[2][0] == 'O'):
        ocnt += 1    
    if (board[0][0] == board[1][1] == board[2][2] == 'X') or (board[0][2] == board[1][1] == board[2][0] == 'X'):
        xcnt += 1
    
    # 둘다 승리했는 경우
    if ocnt and xcnt:
        return 0
    
    # o가 승리했을 때, o의 총 개수는 x보다 많아야 한다. 하지만 개수가 동일하다
    if ocnt == 1 and check_validation == 0:
        return 0
    
    # x가 승리했을 때, o의 총 개수는 x의 총 개수와 같다 하지만 o의 개수가 더 많다
    if xcnt == 1 and check_validation >= 1:
        return 0

    return 1


        

    
    
    
    
    
    
    
    
    
    
    
    
    
    