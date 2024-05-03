def solution(name):
	spell_move = 0 
	cusor_move = len(name)  - 1
	for I, spell in enumerate(name):
		spell_move += min((ord(spell) - ord("A")), (ord("Z") -ord(spell) +1))
		next = I + 1
		while next < len(name) and name[next] == "A":
			next += 1
		
		cusor_move = min([cusor_move, I*2+len(name)-next, I+2*(len(name)-next)])

	return spell_move + cusor_move

