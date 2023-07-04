# 시저 암호
# 어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다. 예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다. "z"는 1만큼 밀면 "a"가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.
# 제한조건 
# 공백은 아무리 밀어도 공백
# s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있다.
# s의 길이는 8000이하
# n은 1이상 25이하인 자연수

# 일단 배열하나 만들고 배열의 수만큼 for문을 돌려본다
s = "Dafjadmlw"
s = list(s)
# print(s) # 출력값: ['D', 'a', 'f', 'j', 'a', 'd', 'm', 'l', 'w']
# for i in range(len(s)):
#     print(i)

# 대문자 들어올지 소문자 들어올지 섞여 들어올지 모르니까 if처리
# for i in range(len(s)):
#     if s[i].isupper():
#         print(True)
#     else:
#         print(False)
# 출력값: 처음에만 True가 뜨고 나머지는 전부 False

# 아스키 코드로 변환하여 처리한다 ord는 아스키코드로 변환 chr은 아스키코드를 문자로 변환
def cal(s,n):
    # s = "Dafjadmlw"
    s = list(s)
    for i in range(len(s)):
        if s[i].isupper():
            # print("A",ord("A")) # 65
            # print("D",ord("D")) # 68     

            # 만약 거리가 3이라면 D는 G가 되어야한다. 그러면 D의 값 - A를 해준 후 거리 3을더한 후 기준점 A를 다시 더해주면? 
            s[i] = chr((ord("D") - ord('A') + n)    + ord('A')) # D에 해당하는 아스키코드 출력
        elif s[i].islower():
            # print("값뭐임",chr((ord(s[i])-ord('a')+ n) % 26 + ord('a')))
            s[i] = chr((ord(s[i])-ord('a')+ n) % 26  + ord('a'))
            print("이거뭐임",chr((ord(s[i])-ord('a')+ n)   + ord('a')))
            print("이거뭐임1",(ord(s[i])-ord('a')+ n)   + ord('a'))
            print(ord("a"))
            print(ord("z"))            
            print(chr(128))
            

    return "".join(s) # 출력값: Gafjadmlw
print(cal("az",3))

# 26으로 왜 나누는지 이해를 못하고 있었다. 예시로  함수에 cal("az",3)을 넣으면 d}가 출력된다 z에 해당하는 아스키 코드값(122) - a값(97) + 거리(n) = 28인데 여기에 다시 a값(97)을 더하면 125로 }가 출력되는게 당연하다.
# 따라서 26(a-z까지의 개수)로 나누어 주게 되면 정상출력된다.

# 코드를 간략하게 정리한 댓글이 있어 가져와서 분석해봄
def solution(s, n): 
    return ''.join([chr((ord(x) - ord('a') + n) % 26 + ord('a'))
                    if x.islower() 
                    else chr((ord(x) - ord('A') + n) % 26 + ord('A')) 
                    if x.isupper() 
                    else x 
                    for x in s ])

