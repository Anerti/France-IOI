from math import *
import sys

def main():
   distance_centre_ville = int(sys.stdin.readline().strip())
   distance_frontiere = int(sys.stdin.readline().strip())
   population = int(sys.stdin.readline().strip())
   aire = pi * (distance_frontiere**2 - distance_centre_ville**2)
   print(round((population / aire), 2))
   
   
main()
