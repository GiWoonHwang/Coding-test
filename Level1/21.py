# 서울에서 김서방 찾기
# String형 배열 seoul의 element중 "Kim"의 위치 x를 찾아, "김서방은 x에 있다"는 String을 반환하는 함수, solution을 완성하세요. seoul에 "Kim"은 오직 한 번만 나타나며 잘못된 값이 입력되는 경우는 없습니다.
# 예 ['jane', 'kim'] return 김서방은 1에 있다.


# 배열의 값에대한 인덱스를 리턴해주는 index 함수를 사용하자.
def cal(seoul):
    return "김서방은 {}에 있다".format(seoul.index("Kim"))