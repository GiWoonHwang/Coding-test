'''
o의 개수가 x보다 같거나 많아야 한다.
o가 승리했을 때, o의 총 개수는 x보다 많아야 한다.
x가 승리했을 때, o의 총 개수는 x의 총 개수와 같다
'''

def solution(board):

    # o의 개수는 x보다 크거나 같다.
    strboard = "".join(board)
    check_validation = strboard.count("O") -  strboard.count("x")
    if check_validation not in [0,1]:
        return 0
    
    # zip 함수를 통해 열에 해당하는 값들을 묶음
    colboard = list(zip(*board))
    ocnt = 0
    xcnt = 0

    # 반복문을 통해 각 행과 열을 순회하며 승리조건을 만족하는지 체크한다.
    for i in range(3):
        if colboard[i].count("O") == 3 or board[i].count("O") == 3:
            ocnt += 1
        
        if colboard[i].count("X") == 3 or board[i].count("X") == 3:
            xcnt += 1
    
    # 두 대각선을 순회하면서 O의 승리조건을 만족하는지 체크한다
    if (board[0][0] == board[1][1] == board[2][2] == 'O') or (board[0][2] == board[1][2] == board[2][0] == 'O') :
            ocnt += 1

    # 두 대각선을 순회하면서 X의 승리조건을 만족하는지 체크한다
    if (board[0][0] == board[1][1] == board[2][2] == 'X') or (board[0][2] == board[1][2] == board[2][0] == 'X') :
            xcnt += 1

    # 둘 다 승리한 경우
    if ocnt and xcnt:
         return 0 

    # O가 승리했지만 O와 X의 개수가 동일한 경우
    if ocnt == 1 and check_validation == 0:
         return 0

    # X가 승리하면 O와 X의 개수가 동일해야한다. 하지만 O의 개수가 더 많은 경우
    if xcnt == 1 and check_validation >= 1:
         return 0

    return 1


        

    
    
    
    
    
    
    
    
    
    
    
    
    
    