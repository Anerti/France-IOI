largeurMax = int(input())
largeurMin = int(input())
volume = 0
temp = largeurMax
for loop in range(largeurMax - largeurMin + 1):
   volume = volume + (temp * temp)
   temp = temp - 1
print(volume)
