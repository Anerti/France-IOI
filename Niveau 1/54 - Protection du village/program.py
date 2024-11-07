nbMaisons = int(input())
tempX = int(input())
tempY = int(input())
xMin = tempX
yMin = tempY
xMax = tempX
yMax = tempY
for loop in range(nbMaisons - 1):
   tempX = int(input())
   tempY = int(input())
   if tempX >= xMax:
      xMax = tempX
   if tempY >= yMax:
      yMax = tempY
   if tempX <= xMin:
      xMin = tempX
   if tempY <= yMin:
      yMin = tempY
L = xMax - xMin
l = yMax - yMin
P = (L + l) * 2
print(P)
