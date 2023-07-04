'''
A와 B 두사람이 카드 게임을 하고 있다. 게임은 52장의 카드 데크에서 시작됩니다. 데크에 남은 카드가 없을 때까지 데크에서 플레이어A, 플레이어B, 플레이어A, 플레이어B 순서대로 카드를 꺼냅니다.
데크에는 13종류의 카드가 있습니다. 2,3,4,5,6,7,8,9,10, 잭, 퀸, 킹, 그리고 에이스 입니다. 데크에는 이런 유형의 카드가 4장씩 있습니다. 예를 들어, 2가 4장, 3가 4장, 에이스가 4장 존재합니다
(따라서 13가지유형 * 4장으로 총 52장) 높은 카드로는 잭, 퀸, 킹, 그리고 에이스 입니다. 플레이어가 높은 카드를 받으면 점수를 얻을 수 있으며, 점수를 매기는 규칙은 다음과 같습니다.

1. 플레이어가 잭을 가져간 후 데크에서 최소한 1장의 카드가 남아있고 데크의 다음 카드가 높은 카드가 아닌 경우 플레이어는 1점을 얻습니다.
2. 플레이어가 퀸을 가져간 후 데크에서 최소한 2장의 카드가 남아있고 데크의 다음 카드가 높은 카드가 아닌 경우 플레이어는 2점을 얻습니다.
3. 플레이어가 킹을 가져간 후 데크에서 최소한 3장의 카드가 남아있고 데크의 다음 카드가 높은 카드가 아닌 경우 플레이어는 3점을 얻습니다.
4. 플레이어가 에이스을 가져간 후 데크에서 최소한 4장의 카드가 남아있고 데크의 다음 카드가 높은 카드가 아닌 경우 플레이어는 4점을 얻습니다.

입력
입력은 총 52줄로 구성됩니다. 각 라인에는 데크에 있는 카드 유형 중 하나가 포함되며, 플레이어가 데크에서 카드를 가져가는 순서대로 입력됩니다. 첫 번째 라인은 데크에서 가져온 첫 번째 카드이고, 두 번째
라인은 데크에서 가져온 두 번째 카드인 식입니다.

출력
player p scores q point(s).
(p는 플레이어를 지칭하고 q는 방금 획득한 점수)

player a : m point(S)
player b : m point(S)

이해안감, 다시풀기(2022-09-06)
'''

NUM_CARDS = 52

def no_high(lst):
    '''
    lst는 카드를 나타내는 문자열들의 리스트입니다.
    lst에 높은 카드가 없으면 True를 반환하고 그렇지 않으면 False를 반환합니다
    '''

    if 'jack' in lst:
        return False
    if 'queen' in lst:
        return False
    if 'king' in lst:
        return False
    if 'ace' in lst:
        return False
    return True    

deck = []  

for i in range(NUM_CARDS):  # input에서 카드를 읽고 deck에 추가한다
    deck.append(input())

score_a = 0
score_b = 0
player = 'A'

for i in range(NUM_CARDS): # 데크의 각 카드를 보고 플레이어에게 점수를 주는 것입니다. 일반적인 for 루프를 사용하면 현재 카드를 볼 수 있습니다. 또 현재 카드가 높은 카드일때 이후의 카드도 볼 수 있도록 해줌
    card = deck[i]
    points = 0
    remaining = NUM_CARDS - i - 1  # 남은 카드  i가 0이면 카드를 한장 가져간 것이기 때문에 51장

    if card == 'jack' and remaining >= 1 and no_high(deck[i+1:i+2]):
        points = 1
    elif card == 'queen' and remaining >= 2 and no_high(deck[i+1:i+2]):
        points = 2
    elif card == 'king' and remaining >= 3 and no_high(deck[i+1:i+2]):
        points = 3
    elif card == 'ace' and remaining >= 4 and no_high(deck[i+1:i+2]):
        points = 4
    
    if points > 0:
        print(f'Player {player} scores {points} point(s)')

    if player == 'A':
        score_a = score_a + points
        player = 'B'
    
    else:
        score_b = score_b + points
        player = 'A'


print(f'Player A: {score_a} point(s).')
print(f'Player B: {score_b} point(s).')
