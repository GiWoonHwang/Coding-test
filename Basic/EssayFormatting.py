'''
에세이를 작성하고 있다. 에서이의 각 단어에는 소문자 또는 대문자만 포함된다. 선생님은 한 줄에  쓸 수 있는 최대 문자 수 (공백제외)를 지정했다. 이 요구사항을 충족하기 위해 다음 규칙을 사용해서 에세이에 단어를 기록
1. 다음 단어가 현재 라인에 맞으면 현재 라인에 추가한다. 한 라인 내 단어들 사이에 공백을 포함
2. 다음 단어가 현재 라인에 맞지 않으면 새 라인에 넣는다. 이 라인은 새로운 현재 라인이 된다.

입력
첫 번째 라인에는 공백으로 구분된 두 개의 정수 n,k가 있다. n은 에세이 단어 수로, 1에서 100 사이 정수이다. k는 한 줄에 표시될 수 있는 최대 문자 수로 1에서 80 사이 정수입니다.
두 번째 라인에는 공백으로 구분된 n개의 단어가 있습니다. 각 단어는 최대 k개의 문자로 구성됩니다.
'''

input_file = open('word.in', 'r')
output_file = open('word.out','w')

lst = input_file.readline().split()
n = int(lst[0])
k = int(lst[1])

words = input_file.readline().split()
print(words)

line = ''
chars_on_line = 0 # 현재 라인에서 공백을 제외한 문자 수

for word in words:
    if chars_on_line + len(word) <= k:
        line = line + word + ' '
        chars_on_line = chars_on_line + len(word)
    else:
        output_file.write(line[:-1]+ '\n')  # 공백을 출력하지 못하도록 [:-1]로 잘라낸다.
        line = word + ' '
        chars_on_line = len(word)
output_file.write(line[:-1] + '\n')

input_file.close()
output_file.close()
