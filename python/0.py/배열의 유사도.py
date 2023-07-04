'''
두 배열이 얼마나 유사한지 확인해보려고 합니다. 문자열 배열 s1과 s2가 주어질 때 같은 원소의 개수를 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ s1, s2의 길이 ≤ 100
1 ≤ s1, s2의 원소의 길이 ≤ 10
s1과 s2의 원소는 알파벳 소문자로만 이루어져 있습니다
s1과 s2는 각각 중복된 원소를 갖지 않습니다.
입출력 예
s1	                s2	                            result
["a", "b", "c"]	    ["com", "b", "d", "p", "c"]	    2
["n", "omg"]	    ["m", "dot"]	                0
입출력 예 설명
입출력 예 #1

"b"와 "c"가 같으므로 2를 return합니다.
입출력 예 #2

같은 원소가 없으므로 0을 return합니다.
'''
from typing import *

s1:List[str] = ["a", "b", "c"]	
s2:List[str] = ["com", "b", "d", "p", "c"]


# 중복을 갖지 않습니다 == set을 쓰면 편하다
# intersection 메소드를 사용하면 겹치는 배열의 요소를 반환해준다
answer = len(set(s1).intersection(set(s2)))
