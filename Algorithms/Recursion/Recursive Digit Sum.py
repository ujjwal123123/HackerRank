def superDigits(n):
    sumDigits = 0

    for i in n:
        sumDigits += int(i)

    if sumDigits > 9:
        sumDigits = superDigits(str(sumDigits))

    return sumDigits


def main():
    n, k = map(int, input().split())
    print(superDigits(superDigits(input())*k))


main()
