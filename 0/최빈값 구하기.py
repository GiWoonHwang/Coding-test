'''
최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.

제한사항
0 < array의 길이 < 100
0 ≤ array의 원소 < 1000
입출력 예
array	            result
[1, 2, 3, 3, 3, 4]	3
[1, 1, 2, 2]	    -1
[1]	1
입출력 예 설명
입출력 예 #1

[1, 2, 3, 3, 3, 4]에서 1은 1개 2는 1개 3은 3개 4는 1개로 최빈값은 3입니다.
입출력 예 #2

[1, 1, 2, 2]에서 1은 2개 2는 2개로 최빈값이 1, 2입니다. 최빈값이 여러 개이므로 -1을 return 합니다.
입출력 예 #3

[1]에는 1만 있으므로 최빈값은 1입니다.
'''
from typing import *

array:List[int] = [1, 2, 3, 3, 3, 4]
dict = {}
# for 반복문으로 입력 list 순회
for num in array:
    # 딕셔너리에 현재 값이 할당되있지 않다면 1 할당 => value 값이 가장 큰 값이 최빈값이다.
    if num not in dict:
        dict[num] = 1
        # print(값 없어,dict)
    # 그렇지 않을 시, 증감
    else:
        dict[num] += 1
        # print('값 있어',dict)

print(dict.items())

        
# 딕셔너리의 벨류값 기준으로 desc 정렬
result = sorted(dict.items(), key=lambda x: x[-1], reverse=True) # items를 사용하면 키값쌍을 얻을 수 있다. dict_items([(1, 1), (2, 1), (3, 3), (4, 1)])
print(result)

if len(result) <= 1:
    print(result[0][0])

# 최빈값이 여러개면, -1 반환
result[0][0] if result[0][-1] != result[1][-1] else -1 # 인덱스 0과 1만 비교하면 됨