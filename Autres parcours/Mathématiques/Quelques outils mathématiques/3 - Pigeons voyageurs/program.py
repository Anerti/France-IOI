import sys
from math import *


def saisie():
    valeur = int(sys.stdin.readline().strip())
    return valeur


def main():
    x1 = saisie()
    y1 = saisie()
    x2 = saisie()
    y2 = saisie()
    print(sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2))


main()
