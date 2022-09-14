'''
농부 존에게는 n개의 목초지가 있다. 존은 목초지 전체에 씨를 뿌리고 싶어 한다. 목초지는 1..2..n으로 숫자가 매겨져 있다. 그리고 존은 4가지 종류 풀의 씨를 가지고 있는데, 씨는 각각 1,2,3,4로 번호가 매겨져 있다.
각 목초지마다 한 가지 유형의 씨를 선택해 뿌릴 것
또한 존은 m마리의 소를 키우고 있습니다. 소들은 각자 좋아하는 두 개의 목초지가 있느넫, 자신이 가장 좋아하는 두 목초지에만 관심이 있고 다른 목초지에는 관심이 없습니다. 소의 건강한 식단을 위해 각 소가 좋아하는 두 목초지에는 서로 다른 종류의 풀이 있어야 합니다.
예를 들면 어떤 소가 좋아하는 목초지 중 하나에 풀 유형 1이 있고 다른 하나에 풀 유형 4가 있으면 괜찮지만 두 목초지 모두에 풀 유형 1이 있으면 안됩니다.
어떤 목초지를 1마리 이상의 소가 좋아할 수도 있지만 그 목초지를 좋아하는 소의 수는 최대 3마리입니다. 다시 말해, 각 목초지마다 해당 목초지를 좋아하는 소는 3마리 이하입니다.
각 목초지에서 사용할 풀 유형을 결정하세요. 풀 유형 1~4를 사용해야 하며, 각 소가 좋아하는 두 목초지에 심은 풀 유형은 달라야 한다.
'''

from asyncore import write


input_file = open('revegetate.in','r')
output_file = open('revegetate.out','r')

def read_cows(input_file, num_cows):
    '''
    input_file은 읽기 모드로 열려 있는 파일입니다. 읽기를 시작하면 소의 정보가 읽혀야 합니다.
    num_cows는 소들의 수 입니다.

    input_file에서 소가 좋아하는 목초지를 읽습니다.
    각 소가 좋아하는 목초지들의 리스트를 반환합니다.
    리스트 내 각 항목은 한 마리의 소가 가장 좋아하는 두 개의 목초지를 가진 리스트입니다.
    '''
    favorites = []
    for i in range(num_cows):
        lst = input_file.readline().split()
        lst[0] = int(lst[0])
        lst[1] = int(lst[1])
        favorites.append(lst)
    return favorites

def cows_with_favorite(favorites, pasture):
    '''
    favorites는 read_cows 함수가 반환한 각 소가 좋아하는 목초지의 리스트입니다.
    pasture는 목초지의 번호를 나타냅니다

    현재 목초지를 좋아하는 소들의 리스트를 반환합니다
    '''
    cows = []
    for i in range(len(favorites)):
        if favorites[i][0] == pasture or favorites[i][1] == pasture:
            cows.append(i)
    return cows

def types_used(favorites,cows,pasture_types):
    '''
    favorites는 read_cows 함수가 반환한 각 소가 좋아하는 목초지 리스트 입니다.
    cows는 현재 목초지를 좋아하는 소들의 리스트 입니다.
    pasture_types는 지금까지 각 목초지에 대해 선택된 풀 유형의 리스트입니다.

    소가 좋아하는 목초지를 기반으로 이미 사용된 풀 유형의 리스트를 반환합니다
    '''
    used = []
    for cow in cows:
        pasture_a = favorites[cow][0]
        pasture_b = favorites[cow][1]
        if pasture_a < len(pasture_types[pasture_a]):
            used.append(pasture_types[pasture_a])
        if pasture_b < len(pasture_types):
            used.append(pasture_types[pasture_b])
    return used

def smallest_available(used):
    '''
    used 는 사용된 풀 유형들을 담은 리스트입니다.
    사용되지 않은 가장 작은 번호의 풀 유형을 반환합니다.

    '''
    grass_type = 1
    while grass_type in used:
        grass_type = grass_type + 1
    return grass_type

def write_pasture(output_file, pasture_types):
    '''
    output_file은 쓰기 모드로 열려 있는 파일입니다.
    pasture_types는 목초지에 심을 풀들의 유형이 정수로 담긴 리스트입니다.

    pasture_types를 output_file에 씁니다
    '''
    pasture_types_str = []
    for pasture_type in pasture_types:
        pasture_types_str.append(str(pasture_type))
    output = ''.join(pasture_types_str)
    output_file.write((output + '\n'))

# 입력을 읽는다
lst = input_file.readline().split()
num_pastures = int(lst[0])
num_cows = int(lst[1])
favorites = read_cows(input_file,num_cows) # 각 소가 좋아하는 두 개의 목초지들을 읽는다.

pasture_types = [0]

for i in range(1, num_pastures+1):

    # 목초지를 좋아하는 소들을 식별한다
    cows = cows_with_favorite(favorites, i)

    # 목초지에 할당 할 수 없는 풀 유형을 제거한다
    eliminated = types_used(favorites, cows, pasture_types)

    # 목초지에 심을 가장 작은 번호의 풀 유형을 선택한다.
    pasture_types = smallest_available(eliminated) # 목초지에 심을 가장 작은 번호의 풀 유형
    pasture_types.append(pasture_type) # 선택된 풀 유형 리스트에 추가


# 출력을 쓴다
pasture_types.pop(0) # 가짜로 넣어둔 인덱스 0을 제거
write_pastures(output_file,pasture_types) # 실제 출력을 작성

input_file.close()
output_file.close()