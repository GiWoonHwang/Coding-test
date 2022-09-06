'''
브리에 베이커리는 여러 가맹점이 있으며, 각 가맹정은 소비자에게 구운 제품을 판매합니다. 13년동안 사업의 이정표에 도달한 브리에 베이커리는 매출에 따라 보너스를 수여하는 행사를 할 것 입니다.
보너스는 일일 매출과 가맹점당 매출에 따라 다릅니다. 보너스 지급 방식은 다음과 같다

모든 가맹점의 총 매출이 13의 배수인 날에는 매출을 13으로 나눈 몫이 보너스로 주어진다. 예를 들어, 전체 가맹점이 빵을 26개 판매한 날에는 26/13 = 2 보너스가 합계로 추가된다
하루의 총 매출이 13의 배수인 모든 가맹점에 대해 13으로 나눈 몫이 보너스로 주어진다. 예를들어 빵 39개를 판매한 가맹점은 39/19 = 3의 보너스가 합계에 추가됩니다.

입력:
가맹점의 수 f와 영업일수 d가 공백으로 구분된 라인으로, f는 4에서 130 사이의 정수이고 d는 2에서 4,745 사이의 정수입니다

한 라인당 영업일 하루의 정보로 구성된 총 d개의 라인입니다. 각 라인에는 공백으로 구분된 f개의 정수가 있으며, 각 정수는 가맹점별 매출을 나타냅니다. d개의 라인 중 첫 번째 라인은 첫째 날의 가맹점별 매출을 제공하고,
두 번째 라인은 둘째 날의 가맹점별 매출을 제공하는 식입니다. 각 정수는 1에서 13,000 사이의 수입니다.

6 4 = lst 값

row 값
1  13 2  1  1  8 
2  12 10 5  11 4
39 6  13 52 3  3
15 8  6  2  7  14
'''

for dataset in range(10): # 테스트 케이스 10
    # lst = input().split()
    lst = [6,4]


    franchisees = int(lst[0]) # 가맹점의 수 6
    print('franchisees',franchisees)
    days = int(lst[1]) # 영업일의 수 4
    print('days',days)
    
    grid = []

    for i in range(days):
        row = input().split() # 행의 판매합계 (날짜별 총 가맹점의 판매합계)
        # print('row',row)
        for j in range(franchisees): # input으로 받은 값은 str이기때문에 int로 바꾸어줌
            row[j] = int(row[j])
        grid.append(row)
        print(grid)

    bonuses = 0

    for row in grid: # 모든 가맹점의 매출의 합 구하기
        total = sum(row)
        if total % 13 == 0:
            bonuses = bonuses + total // 13
    
    for col_index in range(franchisees): # 열을 반복할 때는 인덱스를 통해 반복해야 한다. 범위기반 for 루프를 사용해 열들의 인덱스로 이를 수행 / 각 가맹점별 매출의 합
        total = 0
        for row_index in range(days):
            total = total + grid[row_index][col_index] # 가맹점별 매출의 합계, 열의 합
        if total % 13 == 0:
            bonuses = bonuses + total // 13

    