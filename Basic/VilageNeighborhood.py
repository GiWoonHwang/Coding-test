'''
직선 도로 위에 n개의 마을이 각기다르게 위치해 있습니다. 각 마을은 도로에서의 위치를 나타내는 정수로 표시됩니다. 한 마을의 왼쪽 이웃은 그 마을 다음으로 작은 위치에 있는 마을이고, 오른쪽 이웃은 그 마을은 
그 다음 으로 큰 위치에 있는 마을입니다. 한 마을의 크기는 그 마을과 왼쪽 이웃 마을 사이에 있는 공간 절반, 그리고 그 마을과 오른쪽 이웃 마을 사이에 있는 공간 절반으로 구성된다.
예를 들어 위치 10에 기준이 되는 마을이 있다고 가정해 보겠습니다. 이때 그 마을의 왼쪽 이웃이 위치 6에 있고, 오른쪽 이웃이 15에 있다면 기준 마을의 크기는 위치 8(6과 10 사이의 중간)부터 위치 12.5(10과 15사이의 중간)
간격입니다.
마을의 크기는 해당 마을의 경계 지점, 즉 가장 오른쪽에서 가장 왼쪽의 위차를 뺀 값으로 계산됩니다. (12.5 - 8 = 4.5) 가장 작은 마을의 크기를 구하세요 맨 왼쪽과 오른쪽에 있는 마을은 이웃이 하나이므로 무시한다.
'''

# 문제 풀이
n = int(input()) # 마을의 수
positions = []

for i in range(n):
    positions.append(int(input()))

positions.sort()

left = (positions[1]-positions[0]) / 2
right = (positions[2]-positions[1]) / 2
min_size = left + right

for i in range(2, n-1): # n-1, 즉 오른쪽 맨 끝에 있는 마을은 고려하지 않기 때문에 n-1로 씀
    left = (positions[i]- positions[i-1])/2
    right = (positions[i+1] - positions[i])/2
    size = left + right
    if size < min_size:
        min_size = size

# 코드의 중복 방지

n = int(input()) # 마을의 수
positions = []

for i in range(n):
    positions.append(int(input()))

positions.sort()

size = []

for i in range(2, n-1): # n-1, 즉 오른쪽 맨 끝에 있는 마을은 고려하지 않기 때문에 n-1로 씀
    left = (positions[i]- positions[i-1])/2
    right = (positions[i+1] - positions[i])/2
    size = left + right
    size.append(size)
    
    min_size = min(size)
