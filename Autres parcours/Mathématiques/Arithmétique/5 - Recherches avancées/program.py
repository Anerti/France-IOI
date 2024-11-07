def prime():
    a = 1
    while a <= 1000:
        i = 1
        nbDivision = 0
        while i <= a:
            if a % i == 0:
                nbDivision += 1
            i += 1
        if nbDivision == 2:
            print(a)
        a += 1
      
prime()
