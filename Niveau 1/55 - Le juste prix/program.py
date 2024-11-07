nbMarchands = int(input())
position = 0
tempPosition = 0
prix = 1000000
for loop in range(nbMarchands):
   tempPrix = int(input())
   tempPosition = tempPosition + 1
   if tempPrix <= prix:
      prix = tempPrix
      position = tempPosition
print(position)
