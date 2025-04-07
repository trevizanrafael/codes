import matplotlib.pyplot as plt
import time
import sys

sys.setrecursionlimit(2000) 

def fatorial_iterativo(n):
    resultado = 1
    for i in range(2, n + 1):
        resultado *= i
    return resultado

def fatorial_recursivo(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fatorial_recursivo(n - 1)

vetorI = []
for i in range(100, 1001, 100):
    inicio = time.time()
    fatorialI=fatorial_iterativo(i)
    fim = time.time()
    vetorI.append(fim-inicio)

vetorR = []
for i in range(100, 1001, 100):
    inicio = time.time()
    fatorialR=fatorial_recursivo(i)
    fim = time.time()
    vetorR.append(fim-inicio)
    
    
n_values = list(range(100, 1001, 100))

plt.plot(n_values, vetorI, label="Iterativo", color="blue")
plt.plot(n_values, vetorR, label="Recursivo", color="red")

plt.xlabel("Valor de n")
plt.ylabel("Tempo (s)")
plt.title("Desempenho: Fatorial Iterativo vs Recursivo")
plt.legend()  # isso mostra a legenda com os rótulos
plt.grid(True)
plt.show()