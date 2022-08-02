# 평균 구하기
# 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.
# 제한사항: arr은 길이 1이상, 100 이하인 배열입니다.
# arr원소는 -10000이상 10000이하인 정수입니다.


def avarge(list):
    return (sum(list) / len(list))
    

list = [3,4,5]
print("평균값 : {}".format(avarge(list)))