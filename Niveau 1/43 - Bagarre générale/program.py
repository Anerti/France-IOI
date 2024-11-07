superficieArignon = int(input())
superficieEvaran = int(input())
resultat = superficieArignon - superficieEvaran
if resultat < 0:
   resultat = - resultat
if resultat > 10:
   if superficieArignon < superficieEvaran:
      print("La famille Evaran a un champ trop grand")
   if superficieArignon > superficieEvaran:
      print("La famille Arignon a un champ trop grand")
