import numpy
##Transformando o sistema linear em matrizes para resolver pelo método de Cramer
M = [[5,20], [10,15]]
Mx = [[400, 20], [450, 15]]
My = [[5, 400], [10, 450]]

##Calculando os determinates
D = numpy.linalg.det(M)
Dx = numpy.linalg.det(Mx)
Dy = numpy.linalg.det(My)
print(D + Dx)

##Calculando os valores de X e Y
X = Dx/D
Y = Dy/D
print("A quantidade de cadeiras ideal é " + '%.2f' %X +"e a quantidade de mesas é " + '%.2f' %Y)
print ('%.2f' %X)

##Colocando na função Lucro 

lucro = 180*X + 320*Y
print("O lucro final maximizado será " + '%.2f' %lucro)