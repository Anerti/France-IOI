from math import *

def aire(r2, r1):
    return pi * (r2 ** 2 - r1 ** 2)
  
def perimetre(r):
    return 2 * pi * r
  
def main():
    aire_total = 0
    r2 = 9
    r1 = 6
    for i in range(5):
        aire_total += round(aire(r2, r1))
        r2 += 6
        r1 += 6
    perimetre_total = 0
    r = 6
    for i in range(10):
        perimetre_total += round(perimetre(r))
        r += 3
    print(aire_total)
    print(perimetre_total)
  
main()
