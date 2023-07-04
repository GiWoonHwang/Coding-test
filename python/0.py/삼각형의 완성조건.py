'''
문제 설명
선분 세 개로 삼각형을 만들기 위해서는 다음과 같은 조건을 만족해야 합니다.

가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 합니다.
삼각형의 세 변의 길이가 담긴 배열 sides이 매개변수로 주어집니다. 세 변으로 삼각형을 만들 수 있다면 1, 만들 수 없다면 2를 return하도록 solution 함수를 완성해주세요.

제한사항
sides의 원소는 자연수입니다.
sides의 길이는 3입니다.
1 ≤ sides의 원소 ≤ 1,000
입출력 예
sides	        result
[1, 2, 3]	    2
[3, 6, 2]	    2
[199, 72, 222]	1
입출력 예 설명
입출력 예 #1

가장 큰 변인 3이 나머지 두 변의 합 3과 같으므로 삼각형을 완성할 수 없습니다. 따라서 2를 return합니다.
입출력 예 #2

가장 큰 변인 6이 나머지 두 변의 합 5보다 크므로 삼각형을 완성할 수 없습니다. 따라서 2를 return합니다.
입출력 예 #3

가장 큰 변인 222가 나머지 두 변의 합 271보다 작으므로 삼각형을 완성할 수 있습니다. 따라서 1을 return합니다.
'''
from typing import *
sides:List[int] = [1,2,3]
maxi:int = max(sides)


for i in sides:
    maxi = max(sides) # 가장 큰값 찾고
    if i == maxi: # i 가 가장 큰 값이였을때
        sides.remove(maxi) # 가장 큰값을 제외한 배열의 합을 구해서
        if maxi < sum(sides): # 비교 후 리턴
            pass
            # return 1
    # return 2

# 다른 사람의 풀이
sides:List[int] = [1,2,3]
sides.sort()
i if sides[0]+sides[1] > sides[2] else 2