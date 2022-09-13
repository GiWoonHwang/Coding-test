'''
레나에게는 개봉하지 않은 액션 피규어 상자가 n개 있다. 상자를 열면 피규어의 가치가 훼손돼서 개봉 x
상자안에 있는 피규어 순서는 변경 x
각 액션 피규어는 높이로 지정
액션 피규어를 정렬하려 하는데 피규어의 높이가 왼쪽에서 오른쪽으로 증가하거나 동일하게 유지되도록 상자를 정렬

입력예시
boxes = [[4,5,7],[1,2]]
'''



'''
TODO: 입력을 읽는다.
TODO: 모든 상자가 정상인지 확인한다.
TODO: 각 상자의 양 끝에 있는 액션 피규어 높이로 구성된 새로운 상자 리스트를 얻는다.
TODO: 새로운 상자들을 정렬한다.
TODO: 정렬된 상자들을 정리할 수 있는지 결정한다.

'''


# 입력에서 상자들을 읽고 상자들의 리스트를 반환한다. 각 상자는 액션 피규어의 높이를 담은 리스트이다.
def read_boxes(n):
    '''
    입력에서 상자들을 읽고 상자들의 리스트를 반환한다. 각 상자는 액션 피규어의 높이를 담은 리스트이다.
    '''
    boxes = []
    for i in range(n):
        box = input().split()
        box.pop(0)
        for i in range(len(box)):
            box[i] = int(box[i])
        boxes.append(box)

def all_boxes_ok(boxes):
    '''
    액션 피규어의 높이가 작아지지 않는다면 True를 반환, 그렇지 않으면 False를 반환
    '''
    for box in boxes:
        if not box_ok(box):
            return False
    return True

def box_ok(box):
    '''
    box는 해당 상자 내부의 액션피규어들의 높이를 담은 리스트
    '''
    for i in range(len(box)-1):
        if box[i] > box[i + 1]:
            return False
    return True

def boxes_endpoints(boxes):
    '''
    가장 왼쪽과 가장 오른쪽에 있는 액션 피규어의 높이를 반환
    '''
    endpoints = []
    for box in boxes:
        endpoints.append([box[0], box[-1]])
    return endpoints

def all_endpoints_ok(endpoints):
    maximum = endpoints[0][1]
    for i in range(1, len(endpoints)):
        if endpoints[i][0] < maximum:
            return False
        maximum = endpoints[i][1]
    return True

# 입력을 읽는다.
n = int(input())
boxes = read_boxes(n)

# 모든 상자가 정상인지 확인

if not all_boxes_ok(boxes):
    print('no')
else:
    # 각 상자 양 끝에 있는 액션 피규어 높이로 구성된 새로운 상자 리스트를 얻는다.
    endpoints = boxes_endpoints(boxes)

    # 박스들을 정렬한다.
    endpoints.sort()

    # 정렬된 상자들을 정리할 수 있는지 확인한다.
    if all_endpoints_ok(endpoints):
        print('yes')
    else:
        print('no')
