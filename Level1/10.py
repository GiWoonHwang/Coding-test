# 제일 작은 수 제거하기
# 정수를 저장한 배열 arr에서 가장 작은 수를 제거한 배열을 리턴하는 함수, soluition을 완성해 주세요
# 단 리턴하려는 배열이 빈 배열인 경우엔 배열에 -1을 채워 리턴하세요
# 예를 들어 arr이 [4,3,2,1]인 경우 [4,3,2,]를 리턴하고 [10]이면  [-1]을 리턴한다.

def SmallArray(list):
    return [i for i in list if i > min(list)]


list = [6,8,5,9]
print(SmallArray(list))
