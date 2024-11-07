from robot import *
nb = 1
for loop in range(10):
   for loop in range(nb):
      droite()
   ramasser()
   for loop in range(nb):
      gauche()
   deposer()
   nb = nb + 1
