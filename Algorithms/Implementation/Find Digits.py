def solve():
    digDiv = 0

    integer = input()

    for i in integer:
        if int(i) != 0 and int(integer) % int(i) == 0:
            digDiv += 1

    print(digDiv)


def main():
    for i in range(int(input())):
        solve()


main()
