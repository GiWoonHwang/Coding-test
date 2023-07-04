'''
m개의 단어와 k의 정수가 주어진다. 출현빈도가 k번째로 높은 단어를 찾아보자
w는 k번째로 빈도가 높은 단어이다. k=1이면 자신보다 더 빈도가 높은 단어가 없다
k=2이면 자신보다 빈도가 높은 단어는 1개, k=3이면 자신보다 빈도가 높은 단어가 2개
'''

# d = {'strom':1,'cut':1,'magma':1}
# word = 'cut'

# if not word in d:
#     d[word] = 1
# else:
#     d[word] = d[word] +1

# print(d)

# word = 'brook'

# if not word in d:
#     d[word] = 1
# else:
#     d[word] = d[word] +1

# print(d)

# d = {'storm':2,'cut':4,'magma':1,'brook':2,'gully':3,'cliff':1,'blask':1}

def invert_dictionary(d):

    inverted = {}

    for key in d:
        num = d[key]
        if not num in inverted:
            inverted[num] = [key]
            print('not num', inverted)
        else: # 이미 존재한다면 그것은 리스트
            inverted[num].append(key)
            print('else',inverted)
    return inverted

def with_suffix(num):
    '''
    숫자를 가져와서 숫자에 맞는 접미사를  추가한다
    1st most common word(s)
    2nd most common word(s) 등
    '''
    s= str(num)
    if s[-1] == '1' and s[-2:] != '11':
        return s + 'st'
    elif s[-1] == '2' and s[-2:] != '12':
        return s + 'nd'
    elif s[-1] == '3' and s[-2:] != '13':
        return s + 'th'

dic = {2: ['storm', 'brook'], 4: ['cut'], 1: ['magma', 'cliff', 'blask'], 3: ['gully']}


def most_common_words(num_to_words,k):
    '''
    num_to_word는 출현 빈도를 단어 리스트로 매핑한 딕셔너리입니다.
    k는 1보다 크거나 같은 정수입니다.
    k번째로 빈도가 높은 단어의 리스트를 num_to_words로 반환합니다.
    '''
    nums = list(num_to_words.keys())
    nums.sort(reverse=True)
    print(nums)
    total = 0
    i = 0
    k = 2
    done = False # k개 이상의 단어를 살펴봤는지에 대한 여부
    while i < len(nums) and not done:
        num = nums[i]
        print('num',num)
        if total + len(num_to_words[num]) >= k:
            print(len(num_to_words[num]))
            done = True
        else:
            total = total + len(num_to_words[num])
            print('total',total)
            i = i + 1
    if total == k -1 and i <len(nums):
        num_to_words[nums[i]]
    else:
        []

n = int(input())
for dataset in range(n):
    lst = input().split()
    m = int(lst[0])
    k = int(lst[1])

    word_to_num = {}
    
    for i in range(m):
        word = input()
        if not word in word_to_num:
            word_to_num[word] = 1
        else:
            word_to_num[word] = word_to_num[word] + 1
    
    num_to_words = invert_dictionary(word_to_num)

    ordinal = with_suffix(k)
    words = most_common_words(num_to_words, k)

    print(f'{ordinal}most common word(s):')
    for word in words:
        print(word)
    
