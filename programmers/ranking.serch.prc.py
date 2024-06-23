'''
지원자 조건과 점수를 분리한다.
지원자 조건을 key, 점수를 value로 하는 사전을 생성한다.
쿼리를 조건과 점수로 분리한다.
쿼리의 조건이 사전에 존재한다면, 해당 조건에 일치하는 점수 리스트를 가져와 이분 탐색을 통해 특정 점수 이상의 지원자 수를 찾는다.
'''


from itertools import combinations
from collections import defaultdict
from bisect import bisect_left

infomation = ["java backend junior pizza 150","python frontend senior chicken 210","python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50"]
queries = ["java and backend and junior and pizza 100","python and frontend and senior and chicken 200","cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 150"]


def solution(infomation, queries):
    answer = []
    dic = defaultdict(list)
    print(dic)

    for info in infomation:
        info = info.split()

        condition = info[:-1]
        score = int(info[-1])

        for i in range(5):
            case = list(combinations([0,1,2,3],i))
            for c in case:
                tmp = condition.copy()
                for idx in c:
                    tmp[idx] = "-"
                key = "".join(tmp)
                dic[key].append(score)
    for value in dic.values():
        value.sort()


    for query in queries:
        query = query.replcae("and","")
        query = query.split()
        target_key = "".join(query[:-1])
        target_score = int(query[-1])

        count = 0

        if target_key in dic:
            target_list = dic[target_key]

            idx = bisect_left(target_list, target_score)

            count = len(target_list) - idx
        
        answer.append(count)

    return 'tmp'


















solution(infomation, queries)