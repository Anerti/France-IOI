nbMembres = int(input())
totalPoidsE1 = 0
totalPoidsE2 = 0
for loop in range(nbMembres):
   poids = int(input())
   totalPoidsE1 = totalPoidsE1 + poids
   poids = int(input())
   totalPoidsE2 = totalPoidsE2 + poids
if totalPoidsE1 > totalPoidsE2:
   print("L'équipe 1 a un avantage")
else:
   print("L'équipe 2 a un avantage")
print("Poids total pour l'équipe 1 :", totalPoidsE1)
print("Poids total pour l'équipe 2 :", totalPoidsE2)
