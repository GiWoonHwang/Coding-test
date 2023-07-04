'''
루카는 수업 시간에 비밀문장을 쓰고 있다. 문장의 각 모음(a,e,i,o,u)뒤에 문자 p와 해당 모음을 다시 추가합니다. 예를 들면, I like you -> Ipi lipikepe youpoupu라고 쓴다. 루카가 쓴 문자의 원문을 알아내자'''

sentens = input()

result = ''
i = 0

while i < len(sentens):
    result = result + sentens[i]
    if sentens[i] in 'aeiou': # 모음이 있으면 세칸이동
        i = i + 3
    else:
        i = i + 1

