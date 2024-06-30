import random
numero = random.randint(1,100)
tentativa = 0

print("Seja bem-vindo ao jogo de adivinhação!")
print("Adivinhe o número de 1 a 100. Você possui 10 tentativas!")

while tentativa < 10:
    palpite = int(input("Digite um palpite:"))
    tentativa += 1

    if palpite == numero:
        print(f"Parabéns, você ganhou! Acertou em {tentativa} tentativas")
        break
    elif palpite < numero:
     print("O número é maior, tente novamente")
    else:
        print("O número é menor, tente novamente")
else:
   print(f"Você perdeu! O número era {numero}")
