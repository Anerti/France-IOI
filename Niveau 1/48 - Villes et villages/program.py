nbLieux = int(input())
nbVille = 0
for iVille in range(nbLieux):
   nbGens = int(input())
   if nbGens > 10000:
      nbVille = nbVille + 1
print(nbVille)
