'''
길이가 n피트이고 각 부분이 특정 색상으로 된 스카프가 있습니다.
스카프 모양으로는 총m개의 사양이 있습니다. 각 사양은 스카프의 시작 부분과 마지막 부분의
색상을 지정하여 원하는 스카프의 모양을 나타냅니다.
목표는 이 사양들 중 하나에 맞는 가장 긴 스카프를 만들 수 있게 끔 스카프를 자르는 것
'''
lst = input().split()
n = int(lst[0])
m = int(lst[1])

scarf = input().split()
for i in range(n):
    scarf[i] = int(scarf[i])

leftmost_index = {}
rightmost_index = {}

for i in range(n):
    color = scarf[i]
    if not color in leftmost_index:
        leftmost_index[color] = i
        rightmost_index[color] = i
    else:
        rightmost_index[color] = i

max_length = 0

for i in range(m):
    relative = input().split()
    first = int(relative[0])
    last = int(relative[1])
    if first in leftmost_index and last in leftmost_index:
        length = rightmost_index[last] - leftmost_index[first] + 1
        if length > max_length:
            max_length = length
