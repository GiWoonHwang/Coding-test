# 약수의 개수와 덧셈
# 두 정수 left와 right가 매개변수로 주어집니다. left부터 right까지의 모든 수들 중에서, 약수의 개수가 짝수인 수는 더하고, 약수의 개수가 홀수인 수는 뺀 수를 return 하도록 solution 함수를 완성해주세요
# 제한사항: 1 ≤ left ≤ right ≤ 1,000

'''
수	약수	            약수의 개수
13	1, 13	            2
14	1, 2, 7, 14	        4
15	1, 3, 5, 15	        4
16	1, 2, 4, 8, 16	    5
17	1, 17	            2
따라서, 13 + 14 + 15 - 16 + 17 = 43을 return 해야 합니다.
'''

# 약수가 홀수가 되는 경우는 해당 수가 제곱근을 가지는 경우다

def cal(left, right):
    answer = 0
    for i in range(left,right+1):
        if int(i**0.5)==i**0.5:
            answer -= i
        else:
            answer += i
    return answer