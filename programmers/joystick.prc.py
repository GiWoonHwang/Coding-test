def solution(name):
	spell_move = 0 

	# 커서를 처음부터 끝까지 이동시키는 최악의 경우
	cusor_move = len(name)  - 1


	for I, spell in enumerate(name):
		# 스팰링을 변경하는 경우
		# a ~ b 방향, z ~ b방향, z~b의 경우는 뒤로 돌아가기 때문에 +1이 필요함
		spell_move += min((ord(spell) - ord("A")), (ord("Z") -ord(spell) +1))

		# 연속적으로 나열된 A를 체크한다
		next = I + 1
		while next < len(name) and name[next] == "A":
			next += 1
		
		# 최악의 경우, 처음 -> 현재위치까지 이동한 후 연속된 A를 만나 다시 뒤로 돌아간 경우(오른쪽), 처음부터 뒤로 이동하면서 연속된 A를 만나 다시 앞으로 돌아가는 경우(왼쪽) 
		cusor_move = min([cusor_move, I*2+len(name)-next, I+2*(len(name)-next)])

	return spell_move + cusor_move

