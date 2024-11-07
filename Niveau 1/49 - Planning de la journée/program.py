positionActuelle = int(input())
nbVillage = int(input())
resultat = 0
for loop in range(nbVillage):
   positionVillage = int(input())
   distance = positionActuelle - positionVillage
   if distance < 0:
      distance = -distance
   if distance <= 50:
      resultat = resultat + 1
print(resultat)
