import math

MAX_NUM = 1000000000

def sieve_of_eratosthenes(max_num):
    primes = [True] * (max_num + 1)

    for i in range(2, int(math.sqrt(max_num))+1):
        if primes[i]:
            for j in range(i*i, max_num+1, i):
                primes[j] = False

    return primes

primes = sieve_of_eratosthenes(MAX_NUM)

with open("primes.txt", "w") as file:
    for i in range(2, MAX_NUM+1):
        if primes[i]:
            file.write(str(i) + "\n")

print("Finished writing prime numbers to file.")
