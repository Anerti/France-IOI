nbCube = 17
total_cube = 0
for loop in range(8):
   total_cube += (nbCube * nbCube * nbCube)
   nbCube -= 2
print(total_cube + 1)
