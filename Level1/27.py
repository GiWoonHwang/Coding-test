# 나누어 떨어지는 숫자 배열
# array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
# divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.
# 제한사항
# arr은 자연수를 담은 배열입니다. 정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다. divisor는 자연수입니다. array는 길이 1 이상인 배열입니다.
# 예 [5,9,7,10] divisor: 5 return [5,10]


# 받아온 arr배열을 반복문으로 돌면서 i값을 divisor로 나누어, 나누어 떨어지면 빈 배열에 담아 리턴했다.
def cal(arr,divisor):
    answer = []
    arr.sort()
    for i in arr:
        if i % divisor == 0:
            answer.append(i)
    return answer if len(answer) !=0 else [-1]


# ---------------------------------- 다른사람의 풀이 ---------------------------------- #

# sort로 정렬한 후, 배열에 for문으로 반복하는 n이 divisor로 나누어 떨어지는 값만 넣는건 알았지만, sort 뒤에 or 로 -1로 반환하는건 참신하다
def solution(arr, divisor): return sorted([n for n in arr if n % divisor ==0]) or [-1]


























































