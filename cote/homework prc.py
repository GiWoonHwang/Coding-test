'''
1. 과제는 시작하기로 한 시각이 되면 시작합니다.
2. 새로운 과제를 시작할 시각이 되었을 때, 기존에 진행 중이던 과제가 있다면 진행 중이던 과제를 멈추고 새로운 과제를 시작합니다.
3. 진행중이던 과제를 끝냈을 때, 잠시 멈춘 과제가 있다면, 멈춰둔 과제를 이어서 진행합니다.
4. 만약, 과제를 끝낸 시각에 새로 시작해야 되는 과제와 잠시 멈춰둔 과제가 모두 있다면, 새로 시작해야 하는 과제부터 진행합니다.
5. 멈춰둔 과제가 여러 개일 경우, 가장 최근에 멈춘 과제부터 시작합니다.
'''


from collections import deque

plans = [["science", "12:40", "50"], ["music", "12:20", "40"], ["history", "14:00", "30"], ["computer", "12:30", "100"]]
plans = [["korean", "11:40", "30"], ["english", "12:10", "20"], ["math", "12:30", "40"]]

# 편리한 계산을 위해 시간형식을 분으로 통일한다
def convert_time(s):
    h,m = map(int,s.split(":"))
    return h * 60 + m



def solution(plans):
    # 종료한 과제의 이름을 저장할 변수
    answer = []

    # 매개변수 값에 convert_time 함수를 적용한다.
    plans = [(name, convert_time(start), int(playtime)) for name, start, playtime in plans]
    
    # 시작시간이 적은것 (시간이 빠른것) 부터 정렬한다.
    plans.sort(key= lambda x : x[1])

    # 과제를 처리하는 변수 가장 최근에 멈추 과제부터 다시 진행해야 하기 때문에, q를 사용함
    assign_q = deque()

    # 과제와 과제 사이 여유 시간을 계산할 변수
    left_time = 0 

    for i in range(len(plans)):
        name, start, playtime = plans[i]

        
        # assign_q 변수에 과제가 있다면, 
        # 변수에 값이 있다 =  과제 시작 or 시간이 부족해서 중간에 멈춘 과제 or 멈춘 과제들 중 다시 시작해야 하는 과제
        while assign_q:
            # 과제이름과 소요시간을 가져온다
            _name, _playtime = assign_q.pop()

            # 남은시간이 소요시간보다 같거나 크다 = 현재 과제는 다음 과제 시작시간 전까지 끝낼 수 있다.
            if left_time >= _playtime:
                # 다음과제 시작시간 - 현재 과제를 진행하면서 소요한 시간을 계산해준다. 추후 중간에 진행하다 멈춘 과제가 있다면 남은시간에 멈춘 과제를 다시 진행하게 됨
                left_time - playtime
                answer.append(_name)
            
            # 주어진 시간에 다 완료하지 못했다면,
            # 필요한 시간에서 진행한 시간만큼을 빼주어 남은 필요한 시간을 계산한다.
            else:
                assign_q.append((_name, _playtime -left_time))

        assign_q.append((name, playtime))

        # left_time 변수를 갱신시킨다.
        # 남은 시간은 다음 시간 - 현재시간 이기 때문에  배열의 맨 뒤 첫 번째 요소까지만 계산하면 된다. 마지막 과제에서는 남은 시간을 계산할 필요가 없음
        if i < len(plans) -1:
            next_start = plans[i][1]
            left_time = next_start - start
            

    
    # 마지막으로 끝낸 과제를 처리한다
    while assign_q:
        _name, _ = assign_q.pop()
        answer.append(_name)

    
    return answer

            

        

        







