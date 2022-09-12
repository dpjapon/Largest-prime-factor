def multiples(num):
    for i in range(1, 10000):
        cal = num%i
        if cal == 0:
            print(i)
            prime = i
    print("The largest prime is: ", end=' ')
    return prime
print(multiples(600851475143))
