from itertools import combinations

relation = [["100","ryan","music","2"],["200","apeach","math","2"],["300","tube","computer","3"],["400","con","computer","4"],["500","muzi","music","3"],["600","apeach","music","2"]]


def solution(relation):
    row = len(relation)
    col = len(relation[0])

    candidate = []

    # 1개부터 len(col)까지 모든 경우의 수에 대한 인덱스를 리스트에 담는다.
    for i in range(1, col+1):
        candidate.extend(combinations(range(col),i))

    # 유일성(하나 또는 키값을 조합하여 행(튜플)을 식별할 수 있음)
    # 집합연산을 진행하기 위해 tuple로 변환해줌
    unique = []
    for i in candidate:
        tmp = [tuple(item[key] for key in i) for item in relation]

        if len(set(tmp)) == row:
            unique.append(i)

    # 최소성: 교집합이 존재한다 == 최소성을 만족하지 못한다
    answer = set(unique)
    for i in range(len(unique)):
        print(unique[i])
        # i 요소와 다음 요소를 비교
        for j in range(i+1, len(unique)):

            if len(unique[i]) == len(set(unique[i]) & set(unique[j])):

                answer.discard(unique[j])
    return len(answer)                




    









print(solution(relation))
    
