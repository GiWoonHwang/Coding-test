'''
수영장은 시간 0부터 1000까지 운영됩니다. 
인명구조원은 지정된 시간 동안 수영장을 감시합니다. 예를 들어, 인명구조원은 시간 2에 일을  시작해서
일을 7에 일을 마칩니다. 여기서는 이런 시간 간격을 2~7처럼 표시하겠습니다. 간격에 해당하는 시간 단위 수는 종료 시각에서 시작 시각을 뺀 값이다.
2~7인 인명구조원은 7 -2 = 5시간을 근무합니다.2~3, 3~4, 4~5, 5~6, 6~7이라는 5개의 단위 시간으로 구성됩니다.
안타깝게도 농부 존은 n명이 아니라 n-1명만 고용할 수 있을 돈을 가지고 있기 때문에 인명구조원 한 명을 해고해야 합니다.
인명구조원 한명을 해고한 후 감당할 수 있는 최대 시간 단위 수를 결정하세요.
'''
# 풀이: 인명구조원을 한명씩 제외한 후 나머지 세명이 담당하는 시간 단위 수를 계산한다.

def num_covered(intervals, fired):
    
    covered = set()
    for i in range(len(intervals)):
        if i != fired:
            intervals = intervals[i]
            for j in range(intervals[0], intervals[1]):
                covered.add(j)
    return len(covered)

intput_file = open('lifeguards.in','r')
output_file = open('lifeguards.out','w')

n = int(intput_file.readline())

interval = []

for i in range(n):
    interval = intput_file.readline().split()
    interval[0] = int(interval[0])
    interval[1] = int(interval[1])
    interval.append(interval)

max_coverd = 0 

for fired in range(n):
    result = num_covered(interval, fired)
    if result > max_coverd:
        max_coverd = result

output_file.write(str(max_coverd)+ '\n')

intput_file.close()
output_file.close()
    

