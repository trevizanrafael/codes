CREATE SCHEMA rafael3;
USE rafael3;

CREATE TABLE Fabricante(
Codigo INT,
Nome VARCHAR(50),
Categoria VARCHAR(50),
PRIMARY KEY (Codigo));

CREATE TABLE Produto(
NumModelo INT,
Tipo VARCHAR(50),
CodFabricante INT,
PRIMARY KEY (NumModelo));

CREATE TABLE Computador(
NumModelo INT,
Velocidade INT,
Ram INT,
Hd INT,
Webcam INT,
Preco FLOAT,
PRIMARY KEY (NumModelo));

CREATE TABLE Laptop(
NumModelo INT,
Velocidade INT,
Ram INT,
Hd INT,
Tela INT,
Preco FLOAT,
PRIMARY KEY (NumModelo));

CREATE TABLE Impressora(
NumModelo INT,
Colorida BOOLEAN,
Tipo VARCHAR(50),
Preco FLOAT,
PRIMARY KEY (NumModelo));

-- fazendo os alter table
ALTER TABLE Computador
ADD CONSTRAINT fkcomputador
FOREIGN KEY (NumModelo) 
REFERENCES Produto(NumModelo);

ALTER TABLE Laptop
ADD CONSTRAINT fklaptop
FOREIGN KEY (NumModelo) 
REFERENCES Produto(NumModelo);

ALTER TABLE Impressora
ADD CONSTRAINT fkimpressora
FOREIGN KEY (NumModelo) 
REFERENCES Produto(NumModelo);

ALTER TABLE Produto
ADD CONSTRAINT fkproduto
FOREIGN KEY (CodFabricante) 
REFERENCES Fabricante(Codigo);

-- POPULAR TABELAS

insert into Fabricante(Codigo, Nome, Categoria) values (123,'Raf','A');
insert into Fabricante(Codigo, Nome, Categoria) values (321,'Far','B');
insert into Fabricante(Codigo, Nome, Categoria) values (111,'RRR','C');
insert into Fabricante(Codigo, Nome, Categoria) values (222,'AAA','D');
insert into Fabricante(Codigo, Nome, Categoria) values (333,'FFF','E');


insert into Computador(NumModelo, Velocidade, Ram,Hd, Webcam, Preco) values (1,12,16,1024,1020,2999);
insert into Computador(NumModelo, Velocidade, Ram,Hd, Webcam, Preco) values (4,50,64,2048,2000,5000);

insert into Produto(NumModelo, Tipo, CodFabricante) values (1,'Computador',123);
insert into Produto(NumModelo, Tipo, CodFabricante) values (2,'Laptop',222);
insert into Produto(NumModelo, Tipo, CodFabricante) values (3,'Impressora',111);
insert into Produto(NumModelo, Tipo, CodFabricante) values (4,'Computador',333);
insert into Produto(NumModelo, Tipo, CodFabricante) values (5,'Laptop',321);

insert into Laptop(NumModelo, Velocidade, Ram, Hd, Tela, Preco) values (2,10,4,64,22,1200);
insert into Laptop(NumModelo, Velocidade, Ram, Hd, Tela, Preco) values (5,14,8,128,62,1999);

insert into Impressora(NumModelo, Colorida, Tipo, Preco) values (3,TRUE,'Laser',600);
