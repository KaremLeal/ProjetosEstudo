class Carro:
    def __init__(self, modelo, ano, cor, fabricante, eletrico, automatico, novo) -> None:
        self.modelo = modelo
        self.ano = ano
        self.cor = cor 
        self.fabricante = fabricante
        self.eletrico = eletrico
        self.automatico = automatico
        self.novo = novo

carro1 = Carro('Sandero', '2015', 'Vermelho', 'Renault', False, False, False)
carro2 = Carro('HB20', '2024', 'Branco', 'Hyundai', False, True, True)

print(carro1.modelo, carro1.ano, carro1.cor, carro1.fabricante, carro1.eletrico, carro1.automatico, carro1.novo)
print(carro2.modelo, carro2.ano, carro2.cor, carro2.fabricante, carro2.eletrico, carro2.automatico, carro2.novo)
        