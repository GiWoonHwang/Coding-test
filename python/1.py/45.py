# 완주하지 못한 선수
# 수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다. 마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 완주하지 못한 선수의 이름을 return 하도록 solution 함수를 작성해주세요.
# 제한사항: 마라톤 경기에 참여한 선수의 수는 1명 이상 100,000명 이하입니다.
# 제한사항: completion의 길이는 participant의 길이보다 1 작습니다.
# 제한사항: 참가자의 이름은 1개 이상 20개 이하의 알파벳 소문자로 이루어져 있습니다.
# 제한사항: 참가자 중에는 동명이인이 있을 수 있습니다.
'''
participant	                                        completion	                                return
["leo", "kiki", "eden"]	                            ["eden", "kiki"]	                        "leo"
["marina", "josipa", "nikola", "vinko", "filipa"]	["josipa", "filipa", "marina", "nikola"]	"vinko"
["mislav", "stanko", "mislav", "ana"]               ["stanko", "ana", "mislav"]	"mislav"

입출력 예 설명
예제 #1
"leo"는 참여자 명단에는 있지만, 완주자 명단에는 없기 때문에 완주하지 못했습니다.

예제 #2
"vinko"는 참여자 명단에는 있지만, 완주자 명단에는 없기 때문에 완주하지 못했습니다.

예제 #3
"mislav"는 참여자 명단에는 두 명이 있지만, 완주자 명단에는 한 명밖에 없기 때문에 한명은 완주하지 못했습니다.
'''

import collections
#  collection 모듈
# 컨테이너에 들어있는 요소의 갯수를 파악해 딕셔너리 형태로 변환하는 객체 ( {'자료 이름' : '개수'} 형식 )
# hash형 자료들의 값의 개수를 셀 때 사용
# Counter() 객체끼리의 뺄셈도 가능
participant	= ["leo", "kiki", "eden"]	 
completion = ["eden", "kiki"]
completion2 = ["mislav", "stanko", "mislav", "ana"]
# print(collections.Counter(completion2))

answer = collections.Counter(participant) - collections.Counter(completion)
# print(answer)

list(answer.keys())[0] # 리스트 형태로 변환
# print(list(answer.keys())[0])

# 다른 사람의 풀이

# zip: 같은 인덱스끼리 짝지어줌, 배열의 길이가 남는 경우 남은 인덱스는 zip에서 제외
participant.sort()
completion.sort()
for p, c in zip(participant, completion):
    print("p",p)
    print("c",c)

def solution(participant, completion):
    participant.sort()
    completion.sort()
    for p, c in zip(participant, completion):
        if p != c:
            return p
    return participant[-1]
        