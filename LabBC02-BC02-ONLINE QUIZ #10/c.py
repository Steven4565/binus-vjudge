test = int(input());

for t in range(test):
	num = int(input());
	print("Case #" + str(t+1) + ": " + str(num + int(str(num)[::-1])))