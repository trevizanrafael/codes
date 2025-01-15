USE rafael;
CREATE TABLE Empregado1(
Nome VARCHAR(50),
RG VARCHAR(11),
Endereco VARCHAR(50),
Salario INT,
DepLotacao VARCHAR(50),
PRIMARY KEY (RG));

CREATE TABLE Dependente(
Nome VARCHAR(50),
DataNasc DATE,
Parentesco VARCHAR(50),
RGResp VARCHAR(11),
PRIMARY KEY (NOME, RGResp));

CREATE TABLE Departamento(
NumID INT,
Nome VARCHAR(50),
RGGerente VARCHAR(11),
PRIMARY KEY (NumID));

CREATE TABLE Projeto(
NumIdProj INT,
Nome VARCHAR(50),
Localizacao VARCHAR(50),
NumIdDepto INT,
PRIMARY KEY (NumIdProj));

CREATE TABLE Empregado_Projeto(
NumIdProj INT,
RGEmp VARCHAR(11),
PRIMARY KEY (NumIdProj));
	
-- fazendo os alter table

ALTER TABLE Dependente
ADD CONSTRAINT fk_dependente_empregado
FOREIGN KEY (RGResp) 
REFERENCES Empregado(RG);

ALTER TABLE Empregado
ADD CONSTRAINT fk_empregado_departamento
FOREIGN KEY (DepLotacao) 
REFERENCES Departamento(NumID);

ALTER TABLE Departamento
ADD CONSTRAINT fk_departamento_empregado
FOREIGN KEY (RGGerente) 
REFERENCES Empregado(RG);

ALTER TABLE Projeto
ADD CONSTRAINT fk_projeto_departamento
FOREIGN KEY (NumIdDepto) 
REFERENCES Departamento(NumID);

ALTER TABLE Empregado_Projeto
ADD CONSTRAINT fk_empregado_projeto_empregado
FOREIGN KEY (RGEmp) 
REFERENCES Empregado(RG);

ALTER TABLE Empregado_Projeto
ADD CONSTRAINT fk_empregado_projeto_projeto
FOREIGN KEY (NumIdProj) 
REFERENCES Projeto(NumId);
