class Pessoa:
    def __init__(self, nome, idade, altura, peso, corDosOlhos, corDoCabelo):
            self.nome = nome
            self.idade = idade
            self.altura = altura
            self.peso = peso 
            self.corDosOlhos = corDosOlhos
            self.CorDoCabelo = corDoCabelo



pessoa1 = Pessoa('Luciana', '23','170','75','Azul', 'Preto')
pessoa2 = Pessoa('Agenor', '83', '160', '70', 'Verde', 'Branco')

print(pessoa1.nome, pessoa1.idade, pessoa1.altura, pessoa1.peso, pessoa1.corDosOlhos, pessoa1.CorDoCabelo)
print(pessoa2.nome, pessoa2.idade, pessoa2.altura, pessoa2.peso, pessoa2.corDosOlhos, pessoa2.CorDoCabelo)

