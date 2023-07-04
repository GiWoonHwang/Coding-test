'''
코테를 풀던 중 "나는 기본적인 별찍기는 되나?" 라는 의문이 들어 작성하게 되었다.
'''
from typing import * 

count:int = 8

# 1. 직각 삼각형
for i in range(count):
    pass
    # print('*' * (i+1))


# 2. 역 직각삼각형
for i in range(count):
    pass
    # print(" " * (count - (i+1)), end="") 
    # print('*'* (i+1))

# 3. 정 삼각형
for i in range(count):
    # print(' ' * ((count -1) - i), end = '')
    # print('*' * (2 * i + 1))
    pass

# 4. 마름모
a = 11
for i in range(a//2):
    print(' ' * (a//2 - i), end = '')
    print('*' * (2*i+1))

for i in range(a//2-1):
    print(' ' * (i + 2), end = '')
    print('*' * ((a//2*2)-3-2*i))

