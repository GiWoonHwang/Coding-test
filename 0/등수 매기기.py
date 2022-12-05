'''
영어 점수와 수학 점수의 평균 점수를 기준으로 학생들의 등수를 매기려고 합니다. 영어 점수와 수학 점수를 담은 2차원 정수 배열 score가 주어질 때, 영어 점수와 수학 점수의 평균을 기준으로 매긴 등수를 담은 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
0 ≤ score[0], score[1] ≤ 100
1 ≤ score의 길이 ≤ 10
score의 원소 길이는 2입니다.
score는 중복된 원소를 갖지 않습니다.
입출력 예
score	                                                                    result
[[80, 70], [90, 50], [40, 70], [50, 80]]	                                [1, 2, 4, 3]
[[80, 70], [70, 80], [30, 50], [90, 100], [100, 90], [100, 100], [10, 30]]	[4, 4, 6, 2, 2, 1, 7]
입출력 예 설명
입출력 예 #1

평균은 각각 75, 70, 55, 65 이므로 등수를 매겨 [1, 2, 4, 3]을 return합니다.
입출력 예 #2

평균은 각각 75, 75, 40, 95, 95, 100, 20 이므로 [4, 4, 6, 2, 2, 1, 7] 을 return합니다.
공동 2등이 두 명, 공동 4등이 2명 이므로 3등과 5등은 없습니다.
'''
from typing import * 

answer:List= []
score:List[int] = [[80, 70], [90, 50], [40, 70], [50, 80]]
ar:List[int] = []


for i in score:
    ar.append(sum(i)/len(i)) # 배열의 평균을 새로운 배열에 넣는다.
sorted_ar = sorted(ar, reverse=True) # 순서대로 정렬
print(sorted_ar)

for i in ar: # 이부분에서나는 왜 ar를 반복해해야 하는지 모르겠다. 이미 정렬된 sorted_ar가 있는데 그냥 이것을 사용하면 되지 않나? 아직 이해되지 않음 2022-12-06
    print(ar)
    answer.append(sorted_ar.index(i)+1) # +1을 안해주면 0번부터 들어간다 알제 ?


# 다른 사람의 풀이
a = sorted([sum(i) for i in score], reverse = True) # 나눗셈 까지 갈 필요가 없는거야 ?
[a.index(sum(i))+1 for i in score]








