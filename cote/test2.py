def getServerIndex(n, arrival, burstTime):
    # 서버의 상태를 추적할 리스트, 각 서버가 다음 요청을 처리할 수 있는 시간을 저장
    servers = [0] * n
    # 각 요청이 할당된 서버의 인덱스를 저장할 리스트
    assigned_servers = []

    for i in range(len(arrival)):
        # 현재 요청이 도착한 시간
        current_time = arrival[i]
        # 현재 요청을 할당할 수 있는 서버의 인덱스를 -1로 초기화 (할당 불가능 상태)
        assigned_server = -1

        # 모든 서버를 순회하며 요청을 할당할 수 있는 서버 탐색
        for j in range(n):
            # 만약 현재 서버가 요청을 수락할 수 있다면
            if servers[j] <= current_time:
                # 해당 서버에 요청을 할당하고 반복 중단
                assigned_server = j
                servers[j] = current_time + burstTime[i]  # 서버가 다음 요청을 수락할 수 있는 시간 업데이트
                break

        # 할당된 서버 인덱스를 결과 리스트에 추가 (할당되지 않았다면 -1이 추가됨)
        assigned_servers.append(assigned_server)

    # 할당된 서버의 인덱스 리스트 반환
    return assigned_servers

# 예제 데이터로 함수 테스트
n = 3  # 서버 수
arrival = [2, 4, 1, 8, 9]  # 각 요청의 도착 시간
burstTime = [7, 9, 2, 4, 5]  # 각 요청의 처리 시간
assigned = getServerIndex(n, arrival, burstTime)

# 결과 출력
print("각 요청이 할당된 서버의 인덱스:")
print(assigned)
