age = int(input())
poids = int(input())
prix = 0
if age >= 10:
   if poids < 20:
      prix = 30
   else:
      prix = 40
if age < 10:
      prix = 5
if age == 60:
   prix = 0
print(prix)
