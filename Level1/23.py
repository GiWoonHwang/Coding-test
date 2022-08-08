# 문자열 내림차순으로 배치하기

from typing import *

def cal(a: str) -> str: 
    return "".join(sorted(list(a), reverse= True))