from string import maketrans,ascii_lowercase
s = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
# version 1:
# answer = "map"
# intab = "abcdefghijklmnopqrstuvwxyz"
# outtab = "cdefghijklmnopqrstuvwxyzab"
# trans = maketrans(intab,outtab)
# print s.translate(trans)
# print answer.translate(trans)
# version 2:
# trans = maketrans(ascii_lowercase,ascii_lowercase[2:] + ascii_lowercase[:2])
# print s.translate(trans)