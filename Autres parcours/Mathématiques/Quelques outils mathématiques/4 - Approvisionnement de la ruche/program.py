from math import *
import sys


def saisie():
    valeur = int(sys.stdin.readline().strip())
    return valeur


def main():
    x_ruche = saisie()
    y_ruche = saisie()
    nbfleurs = saisie()
    fleurs_accessible = 0
    for i in range(nbfleurs):
        x = saisie()
        y = saisie()
        distance = sqrt((x - x_ruche)**2 + (y - y_ruche)**2)
        if distance < 1000:
            fleurs_accessible += 1
    print(fleurs_accessible)


main()
