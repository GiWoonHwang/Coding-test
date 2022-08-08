# 문자열 다루기 기본
# 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 "a234"이면 False를 리턴하고 "1234"라면 True를 리턴하면 됩니다.
# 제한사항: s는 길이 1 이상, 8 이하인 문자열 입니다.
# return "a1234" = false, "1234" = true

from typing import *

def cal(s: int)-> int:
    # s가 숫자이고 s의 길이가 (4,6)범위 내에 있다.
    return s.isdigit() == True and len(s) in (4,6)