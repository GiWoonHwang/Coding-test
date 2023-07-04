'''
gmail에서 @앞의 점이나 기호등은 무시된다
DAnIELZIngARO+Flurry@gmAIL.COM => danielzingaro@gmail.com


'''

def clean(address):
    '''
    지저분한 이메일을 받아 정리된 이메일 주소를 반환
    이 함수는 시간초과로 테스트를 통과하지 못한다.    
    '''

    # + 기호와 @ 기호 사이의 모든 문자를 제거한다.
    plus_index = address.find('+')
    if plus_index != -1:
        at_index = address.find('@')
        address = address[:plus_index] + address[at_index]
    
    # @ 기호 앞에 있는 모든 점을 제거한다
    at_index = address.find('@')
    before_at = ''
    i = 0
    while i < at_index:
        if address[i] != '.':
            before_at = before_at + address[i]
        i = i + 1
    cleaned = before_at + address[at_index:]

    # 소문자로 변환한다
    cleaned = cleaned.lower()

    return cleaned

for dataset in range(10): # 테스트케이스가 10개
    n = int(input)
    address = []
    for i in range(n):
        address = input()
        address = clean(address)
        if not address in address:
            address.append(address)
    print(len(address))


for dataset in range(10): # 테스트케이스가 10개
    n = int(input)
    address = set()
    for i in range(n):
        address = input()
        address = clean(address)
        address.add(address) # 집합은 애초에 중복을 허용하지 않기 때문에 if문이 필요없다.
    print(len(address))

        
