nbActions = int(input())
monteMax = 0
descenteMax = 0
for loop in range(nbActions):
   nbEntre = int(input())
   if nbEntre > 0:
      monteMax = monteMax + nbEntre
   else:
      descenteMax = descenteMax + nbEntre
descenteMax = -descenteMax
print(monteMax)
print(descenteMax)
