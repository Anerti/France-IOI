from math import *
import sys

contenance = int(sys.stdin.readline().strip())
nbEleve = int(sys.stdin.readline().strip())
nbSalle = ceil(nbEleve / contenance)
print(nbSalle)
