'''
미국은 주라고 하는지리적인 지역으로 나뉘어 있으며, 각 주에는 하나 이상의 도시가 있다. 각 주에는 2개의 문자로 지정된 약어가 있다
예를 들어 P~~는 PA이고 S ~~는 SC이다 

SCRANTON PA 와 PARKER SC 라는 한쌍의 문자열을 생각해보자
SCRANTON의 처음 두문자는 PAKRER가 속한 주이고 PARKER의 두문자는 SCRANTON가 속한 주입니다
이러한 특징을 충족하면서 같은 주에 있지 않은 도시들의 쌍을 특별한 관계라고 했을때 몇쌍이나 되는지 계산하라
'''

# SCRANTON PA 식별자는 SCPA
# PARKER SC 의 식별자는 PASC
# 특별한 도시 쌍을 찾는 대신, 특별한 식별자의 쌍을 찾아보자

# 테스트 케이스 딕셔너리
{'SCPA':1, 'MAMI':2,'NANH':1,'PASC':1,"LACO":2,"MIMA":3,'COLA':1}

input_file = open('citystate.in','r')
output_file = open('citystate.out','w')

n = int(input_file.readline())
combo_to_num = {}


for i in range(n):
    lst = input_file.readline().split()
    city = lst[0][:2] # 도시 이름의 처음 두문자 주의 약자를 각각 참조
    state = lst[1]
    if city != state: # 참조한 두 값이 동일하지 않은 경우, 두 값을 결합해 식별자로 만들어 딕셔너리에 추가
        combo = city + state
        if not combo in combo_to_num:
            combo_to_num[combo] = 1
        else:
            combo_to_num[combo] = combo_to_num[combo] + 1

total = 0

for combo in combo_to_num:
    other_combo = combo[2:] + combo[:2] # 키가 SCPA라면 PASC를 찾아야 하기 위해 키의 가장 오른쪽 두 문자를 취하고 그 뒤에 가장 왼쪽 두 문자를 붙인다.
    if other_combo in combo_to_num:
        total = total + combo_to_num[combo] * combo_to_num[other_combo]  # 식별자가 키로 존재한다면 곱해서 토탈에 더함

output_file.write(str(total//2)+ '\n')

input_file.close()
output_file.close()