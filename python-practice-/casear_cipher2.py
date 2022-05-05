from string import maketrans,ascii_lowercase
print """============================================
==          CASEAR_CIPHER VER 2           ==
============================================
==  INPUT ROOT_N: 1->26, ALL TO BRUTE ALL ==
============================================
"""
shift_move = raw_input("input ROOT_N:")
string_input = raw_input("input encode string:")
if shift_move == 'ALL' or shift_move == "all":
	for i in range(1,27):
		table_root = maketrans(ascii_lowercase,ascii_lowercase[i:]+ascii_lowercase[:i])
		print "Result for %d: %s" % (i, string_input.translate(table_root))
elif shift_move.isdigit(): 
	shift_move = int(shift_move)
	if shift_move>=1 and shift_move<=26: 	
		string_input = string_input.lower()
		table_root = maketrans(ascii_lowercase,ascii_lowercase[shift_move:]+ascii_lowercase[:shift_move])
		print "Result: %s" % string_input.translate(table_root)
else:
	print "Please input exactly choice , bro !"
