'''
유저는 각각 원하는 할인율이 존재한다.
특정 할인율 이상이 되면 이모티콘을 정해진 가격만큼 구매한다.
구매비용이 가격을 넘어서면 구매한 이모티콘을 모두 취소하고 이모티콘 플러스 서비스를 구매한다.
이모티콘 할인액의 최대 상한선은 40% 이다.
이모티콘의 할인액을 조절하면서 한명이라도 더 많은 유저가 플러스 서비스를 구매하게 해야 한다.
'''

users = [[40, 10000], [25, 10000]]	
emoticons = [7000, 9000]



def solution(users, emoticons):
