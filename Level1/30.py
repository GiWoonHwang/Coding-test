# 가운데 글자 가져오기
# 단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.
# "abcde" return "c"
# "qwer" return "we"

# 가운데 글자를 추출하기 위해서는 글자의 가운데 인덱스를 뽑아내야 한다.



def cal(s):
    center = int(len(s)/2)
    if len(s) % 2 != 0: # 홀수일때
        return s[center]    
    else:  # 짝수일때, 만약 qwer이라면 가운데글자에 해당하는것은 we이기 때문에 범위를 지정해 주어야 함
        return s[center-1:center+1]  
# print(cal("qwerasddad"))



# 다른사람의 풀이: 나보다 훨씬 간단하다 이런식으로 해도 홀수인 경우가 처리될 줄 몰랐다.
def string_middle(str):
    return str[(len(str)-1)//2:len(str)//2+1]

a = "dasdkqml"
print((len(a)-1) // 2 )
