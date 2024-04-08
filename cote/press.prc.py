s = 'abc'

'''
1. 문자열을 1 ~ len(s)만큼 쪼갠다
2. 쪼갠문자열을 temp 변수에 담은 후  다음 문자열을 비교한다
3. 만약 비고해서 같다면 카운트를 올려준다.
4. 다르다면 쪼갠 문자열을 b라는 변수에 갱신한다.
    4-1 다르지만 중복된 적이 있다면 b라는 변수에 카운트를 추가해서 갱신한다.
5. temp를 직전에 비교했던 다음 문자열로 갱신한다. (계속해서 다음 문자열과 비교하기 위함)
'''

def solution(s):
    result = []
    for i in range(1, len(s)+1):
        # 문자열을 1 ~ len(s)개 단위로 자르고 압축된 단어를 표한해준다 ex) 2ab3c ...
        b = ''
        cnt = 1

        temp = s[:i] # i만큼 글자를 자름 처음엔 1

        for j in range(i, len(s)+i, i):
            # temp의 글자와 temp 바로 뒤의 글자가 같다면
            # 글자가 같으면 갱신해 줄 필요가 없음, 나중에 중복된 숫자만 붙여주면 됨
            if temp == s[j:j+i]:
                cnt += 1
            # 중복되지 않는다.
            else:
                # 지금까지 중복되는게 하나라도 있다면
                if cnt != 1:
                    # 문자열을 생성할때 중복되는 숫자를 추가해 준다. 
                    b = b + str(cnt) + temp
                else:
                    # 
                    b = b + temp
                
                # temp를 갱신한다.
                temp = s[j:j+i]
                cnt = 1
            
        result.append(len(b))
    return min(result)
            
    

