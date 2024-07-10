from collections import deque


def bfs(begin, target, words):
    q = deque()
    q.append([begin, 0])

    while q:
        now, step = q.popleft()

        # 현재 단어 == 목표단어
        if now == target:
            return step
        
        for word in words:
            count = 0
            for i in range(len(now)):
                if now[i] != word:
                    count +=1
            # 현재 단어와 배열의 있는 단어가 한개만 다르다면        
            if count == 1:
                # 큐에 넣는다.
                q.append([word, step+1])


def solution(begin, target, words):
    if target not in words:
        return 0
    
    return bfs(begin, target, words)