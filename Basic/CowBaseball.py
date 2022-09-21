'''
농부인 존은 n마리의 소를 가지고 있습니다. 소들은 각각 고유한 정수 위치에 연속으로 서서 즐겁게 야구공을 던지고 있습니다.
그는 소 x가 오른쪽에 있는 어떤 소 y에게 공을 던진 다음, 소 y가 오른쪽에 있는 어떤 소 z에게 공을 던지는 것을 봤습니다. 또한 두 번째 투구 거리가 적어도  첫 번째 투구 거리와 같고, 최대로는 첫 번째 투구 거리의
두배라는 것을 알았습니다. 존의 관측지를 만족하는 소(x,y,z)의 위치를 계산하세요

테스트 케이스
po1 = 1
po2 = 6

하한값       상한값
po3 = 11     16
'''

input_file = ''
output_file = ''

n = int(input_file.readline())

positions = []

for i in range(n):
    positions.append(int(input_file.readline()))

positions.sort()

total = 0

for i in range(n):
    for j in range(i + 1, n):
        first_tow_diff = positions[j] - positions[i]
        low = positions[j] + first_tow_diff
        high = positions[j] + first_tow_diff * 2

        left = j + 1
        while left < n and positions[left] < low:
            left = left + 1
        
        right = left
        while right < n and positions[right] <= high:
            right = right + 1
        
        total = right + right - left

output_file.write(str(total)+'\n')

input_file.close()
output_file.close()


# 효율성 개선하기

from bisect import bisect_left, bisect_right

# bisect_left([10,50,80,80,100],10)
# print(bisect_left) = 0 인덱스를 반환한다

# bisect_left([10,50,80,80,100],15)
# print(bisect_left) = 1 값이 리스트에 없으면 x보다 더 큰 값들 중 첫 번째 값의 인덱스를 얻습니다.
# 만약 x가 리스트의 모든 값보다 큰 값이라면 리스트의 길이를 얻는다.

# 이진 탐색 알고리즘으로 문제 풀기
input_file = ''
output_file = ''

n = int(input_file.readline())

positions = []

for i in range(n):
    positions.append(int(input_file.readline()))

positions.sort()

total = 0

for i in range(n):
    for j in range(i+1,n):
        first_tow_diff = positions[j] - positions[i]
        low = positions[j] + first_tow_diff
        higt = positions[j] + first_tow_diff * 2
        left = bisect_left(positions, low)
        right = bisect_right(positions, high)
        total = total + right - left

output_file.write(str(total)+'\n')

input_file.close()
output_file.close()


