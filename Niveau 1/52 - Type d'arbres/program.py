hauteur = int(input())
nbFoliolles = int(input())
if hauteur <= 8:
   if nbFoliolles <= 5:
      print("Falarion")
   else:
      print("Tinuviel")
else:
   if nbFoliolles <= 7:
      print("Dorthonion")
   else:
      print("Calaelen")
