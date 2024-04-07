# 글자를 나누어 앞 단어와 비교 (1부터 len(s)까지 계속 잘라본다)

def solution(s):
    result = []
    for i in range(1, len(s)+1):
        b = ''
        cnt = 1
        '''
        temp a
        temp aa
        temp aab
        temp aabb
        temp aabba
        temp aabbac
        temp aabbacc
        temp aabbaccc
        '''
        temp = s[:i] # i만큼 글자를 잘랐다.
        
        for j in range(i, len(s)+i, i):
            # 앞뒤 글자가 같다.
            if temp == s[j:i+j]:
                cnt += 1
            # 앞뒤 글자가 같지 않다.
            else:
                # 더 이상 중복되지 않는다.
                if cnt != 1:
                    b = b + str(cnt)+ temp
                else:
                    b = b + temp
                
                temp = s[j:j+i]
                cnt = 1
        result.append(len(b))
    return min(result)
                
            