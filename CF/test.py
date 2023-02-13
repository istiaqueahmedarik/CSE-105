
x = int(input())
n = int(input())
print((lambda x, n: x ** n if n != 0 else 1)(x, n))
