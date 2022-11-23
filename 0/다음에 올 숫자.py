'''
등차수열 혹은 등비수열 common이 매개변수로 주어질 때, 마지막 원소 다음으로 올 숫자를 return 하도록 solution 함수를 완성해보세요.

제한사항
2 < common의 길이 < 1,000
-1,000 < common의 원소 < 2,000
등차수열 혹은 등비수열이 아닌 경우는 없습니다.
공비가 0인 경우는 없습니다.
입출력 예

common	        result
[1, 2, 3, 4]	5
[2, 4, 8]	    16
입출력 예 설명
입출력 예 #1

[1, 2, 3, 4]는 공차가 1인 등차수열이므로 다음에 올 수는 5이다.
입출력 예 #2

[2, 4, 8]은 공비가 2인 등비수열이므로 다음에 올 수는 16이다.
'''

from typing import *

# 등차수열: 첫째항에 일정한 수를 더해서 얻은 항
# 등비수열: 첫째항에 일정한 수를 곱해서 얻은 항

common1:List[int] = [1,2,3,4]
common2:List[int] = [2,4,8]

# 등차수열부터 풀기
num = common1[1] - common1[0]  # 2-1

if common1[1] + num == common1[2]: # 등차수열이기 때문에 각 인덱스의 값 차이는 일정하다 
    answer: int = common1[len(common1)-1] + num
else:
    num = common2[1] // common2[0] # 4/2
    answer: int = common2[len(common2)-1] * num # 등비수열이기 때문에 각 인덱스 값의 나눗셈 차이는 일정하다
