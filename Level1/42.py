# k번째 수
# 배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.
# 예를 들어 array가 [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3이라면
'''
1. array의 2번째부터 5번째까지 자르면 [5, 2, 6, 3]입니다.
2. 1에서 나온 배열을 정렬하면 [2, 3, 5, 6]입니다.
3. 2에서 나온 배열의 3번째 숫자는 5입니다.
'''

# 입출력 예
'''
array	                commands	                        return
[1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]


[1, 5, 2, 6, 3, 7, 4]를 2번째부터 5번째까지 자른 후 정렬합니다. [2, 3, 5, 6]의 세 번째 숫자는 5입니다.
'''

# 제한시간안에 못 풀어서 다른사람의 풀이를 참고하였다.
# def solution(array, commands):
#     return list(map(lambda x:sorted(array[x[0]-1:x[1]])[x[2]-1], commands))

# x:sorted(array[x[0]-1:x[1]])[x[2]-1]                       ([[2, 5, 3], [4, 4, 1], [1, 7, 3]])


# def solution(array, commands): return [sorted(array[x[0]-1:x[1]])    [x[2]-1] for x in commands]

def solution(array, commands): return [sorted(array[i-1:j])[k-1] for i,j,k in commands]

commands = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]
array = [1, 5, 2, 6, 3, 7, 4]
print(array[1:5])
print(array[1:5][3])

for i,j,k in commands:
    print("i",i)
    print("j",j)
    print("k",k)
