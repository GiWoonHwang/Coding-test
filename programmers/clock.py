'''
1. 두개의 시간이 주어진다 (시:분:초)
2. 두 시간 사이에서 초침이 시침/분침과 겹치는 횟수를 구해야 한다.
3. 초침이 기준이기 때문에, 시간을 초로 변환한다.
4. 시,분,초 침의 시간당 각도를 구한다. 
'''
h1, m1, s1 = 0, 5, 30
h2, m2, s2 = 0, 7, 0

def solution(h1, m1, s1, h2, m2, s2):
    answer = 0 
    start_time = h1 * 3600 + m1 * 60 + s1
    end_time = h2 * 3600 + m2 * 60 + s2

    # 정오나 자정의 경우 미리 구해 카운팅읋 한다
    if start_time == 0 * 3600 or start_time == 12 * 3600:
        answer += 1

    while start_time < end_time:

        # 시,분,초침의 초당 이동 각도를 계산한다.
        # 시침: 1시간에 30도 -> 1초 30/3600
        # 분침: 1분에 6도 (1시간에 360도) -> 1초 6/60도
        # 초침: 1초에 6도
        h_angle = start_time / 120 % 360
        m_angle = start_time / 10 % 360
        s_angle = start_time * 6 % 360

        # 00:00:00과 12:00:00은 시침, 분침, 초침이 모두 겹치는 위치이므로 동일한 위치로 간주됩니다. 이 위치를 두 번 세는 것을 방지하기 위해 0도 대신 360도로 취급하여 일관성을 유지
        h_next_angle = 360 if (start_time + 1) / 120 % 360 == 0 else (start_time + 1) / 120 % 360
        m_next_angle = 360 if (start_time + 1) / 10 % 360 == 0 else (start_time + 1) / 10 % 360
        s_next_angle = 360 if (start_time + 1) * 6 % 360 == 0 else (start_time + 1) * 6 % 360

        # 현재 초침이 시침보다 작고 다음 초침이 다음 시침의 각도와 같거나 넘어선다
        if s_angle < h_angle and s_next_angle >= h_next_angle:
            answer += 1
        # 현재 초침이 분침보다 작고 다음 초침이 다음 분침의 각도와 같거나 넘어선다
        if s_angle < m_angle and s_next_angle >= m_next_angle:
            answer += 1

        # 세가지가 모두 겹치는경우 (이 설정을 하지 않으면 조건을 두개 탈 수가 있음)
        if s_next_angle == h_next_angle and h_next_angle == m_next_angle:
            answer -= 1
        
        start_time += 1



    return answer




print(solution(h1, m1, s1, h2, m2, s2))