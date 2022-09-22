'''
길이가 n인 보라색 리본이 있습니다. 첫 번째 단위는 위차ㅣ 0에서 위치 1까지지만 위치 1은 포함되지 않고, 두 번째 단위는 위치 1에서 위치 2 까지지만 위치 2는 포함되지 않는 식입니다.
그런 다음 리본의 단위들을 각각 파란색으로 색칠할 수 있는 q개의 페인트 스트로크가 있습니다.
목표는 여전히 보라색인 리본의 단위 수와 파란색인 리본의 단위 수를 결정하는 것 입니다.
'''

lst = input().split()
n = int(lst[0])
q = int(lst[1])

strokes = []

for i in range(q):
    stroke = input().split()
    strokes.append([int(stroke[0])]), int(stroke[1])
strokes.sort()
righmost_position = 0
blue = 0

for stroke in strokes:
    stroke_start = stroke[0]
    stroke_end = stroke[1]
    if stroke_start <= righmost_position:
        if stroke_end > righmost_position:
            blue = blue + stroke_end - righmost_position
            righmost_position = stroke_end
    
    else:
        blue = blue + stroke_end - stroke_start
        righmost_position = stroke_end
        
