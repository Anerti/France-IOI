from math import *
import sys

def main():
   diametre = int(sys.stdin.readline().strip())
   print(round(pi * diametre))
   print(round((diametre**2 * pi) / 4))
  
main()
