class Livro:
    def __init__(self, nome, autor,editora, isbn, paginas):
        self.nome = nome
        self.autor = autor
        self.editora = editora
        self.isbn = isbn
        self.paginas = paginas

livro1 = Livro('Coraline', 'Neil Gailman', 'Intriseca', '3738-88', '235')
livro2 = Livro('Hamlet', 'Shakespeare', 'Penguin', '8392-07','168')

print(livro1.nome, livro1.autor, livro1.editora, livro1.isbn, livro1.paginas)
print(livro2.nome, livro2.autor, livro2.editora,livro1.isbn, livro1.paginas)
