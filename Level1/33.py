# 부족한 금액 계산하기
# 새로 생긴 놀이기구는 인기가 매우 많아 줄이 끊이질 않습니다. 이 놀이기구의 원래 이용료는 price원 인데, 놀이기구를 N 번 째 이용한다면 원래 이용료의 N배를 받기로 하였습니다. 즉, 처음 이용료가 100이었다면 2번째에는 200, 3번째에는 300으로 요금이 인상됩니다.
# 놀이기구를 count번 타게 되면 현재 자신이 가지고 있는 금액에서 얼마가 모자라는지를 return 하도록 solution 함수를 완성하세요.
# 단, 금액이 부족하지 않으면 0을 return 하세요.

# 제한사항 
# 놀이기구의 이용료 price : 1 ≤ price ≤ 2,500, price는 자연수
# 처음 가지고 있던 금액 money : 1 ≤ money ≤ 1,000,000,000, money는 자연수
# 놀이기구의 이용 횟수 count : 1 ≤ count ≤ 2,500, count는 자연수

# 입출력 예 
# 이용금액이 3인 놀이기구를 4번 타고 싶은 고객이 현재 가진 금액이 20이라면, 총 필요한 놀이기구의 이용 금액은 30 (= 3+6+9+12) 이 되어 10만큼 부족하므로 10을 return 합니다.

# def cal(price, money, count):

price = 3 
count = 4
money = 20

def cal(myprice, count, money):
    sum = 0
    for i in range(1,count-1): # 탑승횟수만큼 반복
        sum +=(myprice * i) # 탑승횟수만큼 가격이 곱해지니 i값에 곱해 sum 변수에 저장

    money -= sum # 내가 가진 돈에 빼줌

    if money >0:
        return 0
    else:
        return abs(money) # -라는건 그만큼 돈이 부족하다는 뜻, 절대값을 줘서 반환
    


