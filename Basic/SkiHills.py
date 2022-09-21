'''
농부인 존의 농장에는 n개의 언덕이 있고 각 언덕의 높이는 0에서 100 사이입니다. 존은 자산의 농장을 스키 훈련 캠프로 등록하려고 합니다.
가장 높은 언덕과 가장 낮은 언덕의 높이 차이가 17 이하인 경우에만 스키장으로 등록할 수 있습니다. 따라서 존은 일부 언덕의 높이를 줄여야 할 수도 있습니다.
그는 정수만큼만 높이를 변경할 수 있습니다.
높이를 x만큼 변경하는 비용은 x^2입니다. 예를 들어 언덕을 높이 1에서 4로 변경하는 비용은 (4-1)^2 =  9 입니다. 존이 농장ㄹ을 스키 훈련 캠프로 등록할 수 있도록 언덕의 높이를 변경하는 데 지불해야 
하는 최소 금액을 결정하세요
'''

# 풀이

MAX_DIFFERENCE = 17
MAX_HEIGHT = 100

def cost_for_range(heights, low, hight):
    '''
    heights는 모든 언덕의 높이를 가진 리스트입니다
    low는 범위의 하한을 나타내는 정수입니다.
    hight는 범위의 상한을 나타내는 정수입니다.

    언덕의 모든 높이를 low와 hight 사이의 높이로 변경하는 비용을 반환합니다.
    '''
    cost = 0
    for height in heights:
        if height < low:
            cost = cost + (low - height) ** 2
        elif height > hight:
            cost = cost + (height- hight) ** 2
    return cost

inpuf_file = ''
output_file = ''

n = int(inpuf_file.readline())

heigts = []

for i in range(n):
    heigts.append(int(inpuf_file.readline()))

min_cost = cost_for_range(heigts, 0 ,MAX_DIFFERENCE)

for low in range(1, MAX_HEIGHT + 1):
    result = cost_for_range(heigts, low, low+ MAX_DIFFERENCE)
    if result < min_cost:
        min_cost = result

output_file.write(str(min_cost) + '\n')

inpuf_file.close()
output_file.close()