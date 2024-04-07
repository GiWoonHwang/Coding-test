s = 'abcabcabcabc6de'

def solution(s):
    result = []
    for i in range(1, len(s)+1):
        # 문자열을 1 ~ len(s)개 단위로 자르고 압축된 단어를 표한해준다 ex) 2ab3c ...
        b = ''
        cnt = 1

        temp = s[:i] # i만큼 글자를 자름 처음엔 1

        for j in range(i, len(s)+i):
            # temp의 글자와 temp 바로 뒤의 글자가 같다면
            if temp == s[j:j+i]:
                cnt += 1
            else:
                if cnt != 1:
                    b = b + str(cnt) + temp
                else:
                    b = b + temp
                
                temp = s[j:j+i]
                cnt = 1
            
        result.append(len(b))
    return min(result)
            
    