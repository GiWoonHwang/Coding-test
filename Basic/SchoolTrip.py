'''
학생들은 학년 말에 수학여행을 가고 싶지만 그러기 위해서는 비용을 지불해야 합니다. 수학여행에 드는 돈을 모으기 위해 브런치 프로그램을 준비했습니다. 브런치에 참가하려면 1학년은 12달러, 2학년은 10, 3학년은 7, 4학년은 5달라를 내야 합니다
브런치를 통해 모인 돈 중 50%는 수학여행 비용으로 사용할 수 있습니다. (나머지 절반은 브런치 비용으로 사용) 우리는 수학여행 비용, 연간 학생 비율, 총 학생 수를 알 수 있습니다. 학생들이 돈을 더 모아야 하는지를 판단하세요

입력
1. 수학여행 비용
2. 브런치에 참여하는 학생 비율(0.2,0.08,0.4,0.32)
3. 브런치에 참석하는 학생 수

'''

# 문제 풀이
cost = [12,10,7,5]

for dataset in range(10): # 10번의 테스트케이스가 있기 때문에 반복함
    trip_cost = int(input())
    propotions = input().split() # 각 학년의 참석 비율
    num_student = int(input()) # 총 참석 학생 수

    for i in range(len(propotions)):
        propotions[i] = float(propotions[i]) # 배열안에 있는 str을 float로 바꾸어줌

    student_per_year = [] # 학생수에 학년 비율을 곱해줌

    for propotion in propotions:
        students = int(num_student * propotion)
        student_per_year.append(students)
    
    total_raised = 0

    for i in range(len(student_per_year)):
        total_raised = total_raised + student_per_year[i] * cost[i]
    
    if total_raised / 2 > trip_cost:
        print('가능')
    else:
        print('불가능')

# 테스트 케이스에 관하여.
'''
학년당 학생의 비율을 계산해 보면 소수점이 나오는데, 문제에서는 내림으로 진행한 후 그 학생들을 가장 많이 학생이 있는 학년에 더하라고 한다.
내림으로 잃은 학생 수를 결정하기 위해서는 student_per_year에 있는 학년별 학생 수를 더한 후 총 학생수에서 빼면 된다.
그 다음 리스트의 최댓값을 찾고 그 최댓값에 해당되는 인덱스를 찾아 더해주면 된다.
'''
cost = [12,10,7,5]

for dataset in range(10): # 10번의 테스트케이스가 있기 때문에 반복함
    trip_cost = int(input())
    propotions = input().split() # 각 학년의 참석 비율
    num_student = int(input()) # 총 참석 학생 수

    for i in range(len(propotions)):
        propotions[i] = float(propotions[i]) # 배열안에 있는 str을 float로 바꾸어줌

    student_per_year = [] # 학생수에 학년 비율을 곱해줌

    for propotion in propotions:
        students = int(num_student * propotion)
        student_per_year.append(students)

        # 추가되는 부분
        counted = sum(student_per_year)
        uncouted = num_student - counted
        most = max(student_per_year)
        where = student_per_year.index(most)
        student_per_year[where] = student_per_year[where] + uncouted
    
    total_raised = 0

    for i in range(len(student_per_year)):
        total_raised = total_raised + student_per_year[i] * cost[i]
    
    if total_raised / 2 > trip_cost:
        print('가능')
    else:
        print('불가능')
    
