
start, end, divisor = list(map(int, input().split()))

bdays = 0
for i in range(start, end+1):
    bdays = bdays + ((i - int(str(i)[::-1])) % divisor == 0)

print(bdays)
