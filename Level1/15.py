# 이상한 문자 만들기
# 문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백 문자로 구분되어 있습니다.
# 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 문자열을 리턴하는 함수를 완성하세요 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
# "try hello world"는 세 단어 "try", "hello", "world"로 구성되어 있습니다. 각 단어의 짝수번째 문자를 대문자로, 홀수번째 문자를 소문자로 바꾸면 "TrY", "HeLlO", "WoRlD"입니다. 따라서 "TrY HeLlO WoRlD" 를 리턴합니다.

# map(함수, 리스트): 함수에 리스트값을 하나씩 넣은 결과를 리스트로 다시 반환해줌
# lambda 매개변수 : 식 (파라미터): 함수를 간단하게 쓰게해줌
# split(): 문자를 ()안의 값 기준으로 나누어서 리스트로 반환해줌
from posixpath import split


(lambda x,y : x+y)(10,20)

# 배열에 값을 넣은후 반복문에 enumerate을 사용.(반복문의 인덱스롤 알려주니까) 이 단어가 짝수인지 홀수인지 판단할 수 있다.
list = "adklmdwqdk"
# print([a.lower() if i % 2 else a.upper() for i,a in enumerate(list)])
# 출력값: ['A', 'd', 'K', 'l', 'M', 'd', 'W', 'q', 'D', 'k']

# 이 단어를 다시 합쳐야한다. join 사용
list = "adklm dwqdk"
# print("".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(list)]))
# 출력값: AdKlM DwQdK

# 문자에 공백이 있을 수도 있으니 공백을 기준으로 join ?? 
# print(" ".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(list)]))
# 출력값 : A d K l M   D w Q d K

# 이제 변수를 받아와야 한다.
# print((lambda x : "".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(x)]))("da sm lk damk"))
# 출력값 : DaSmLk dAmK

# 외부에서 값을 받고 그 값을 람다함수에 적용시켜야함
s = "djn mdkas ookok"
print(map((lambda x : "".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(x)])), s.split(" ")))
# 출력값 : <map object at 0x000001838D98FC40>

# 앞에 조인을 했더니 정상출력이 된다. 이유는 잘 모르겠다.
print(" ".join(map((lambda x : "".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(x)])), s.split(" "))))

# 지금까지 만들것을 함수화 하자
def cal(s):
    return " ".join(map((lambda x : "".join([a.lower() if i % 2 else a.upper() for i,a in enumerate(x)])), s.split(" ")))

print(cal("dmkasdkljksa"))
# 출력값: DmKaSdKlJkSa



