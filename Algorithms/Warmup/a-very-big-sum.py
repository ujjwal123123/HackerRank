length = int(input(""))
sum = 0

num_input = input("")
num = num_input.split(None, length)

for i in num:
  sum += int(i)

print(sum)