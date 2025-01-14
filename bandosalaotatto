CREATE TABLE Artes (
    id_arte INT PRIMARY KEY,
    descricao VARCHAR(100),
    tag VARCHAR(50),
    url VARCHAR(255)
);

CREATE TABLE Clientes (
    nome VARCHAR(50),
    nascimento DATE,
    CPF VARCHAR(12) PRIMARY KEY,
    servico VARCHAR(100),
    CONSTRAINT fk_servicos_clientes FOREIGN KEY (servico) REFERENCES Servicos(id_servico) ON DELETE CASCADE
);

CREATE TABLE Sessoes (
    data_sessao DATE,
    hora_sessao TIME,
    status VARCHAR(100),
    preco FLOAT,
    obs VARCHAR(100),
    CPFCliente VARCHAR(12), 
    id_sessao INT PRIMARY KEY,
    id_arte INT,
    CONSTRAINT fk_clientes_sessoes FOREIGN KEY (CPFCliente) REFERENCES Clientes(CPF) ON DELETE CASCADE,
    CONSTRAINT fk_artes_sessoes FOREIGN KEY (id_arte) REFERENCES Artes(id_arte) ON DELETE CASCADE
);


CREATE TABLE Servicos (
    nome VARCHAR(100),
    id_servico INT PRIMARY KEY,
    status VARCHAR(100),
    id_sessao INT,
    login_usuario VARCHAR(100),
    CONSTRAINT fk_sessoes_servicos FOREIGN KEY (id_sessao) REFERENCES Sessoes(id_sessao) ON DELETE CASCADE,
    CONSTRAINT fk_usuarios_servicos FOREIGN KEY (login_usuario) REFERENCES Usuarios(login) ON DELETE CASCADE
);


CREATE TABLE Usuarios ( 
  nome VARCHAR(50),
  funcao VARCHAR(50),
  login VARCHAR(50) PRIMARY KEY,
  senha VARCHAR(50)
  );

CREATE TABLE Endereco (
    rua VARCHAR(50),
    numero INT,
    bairro VARCHAR (50),
    cidade VARCHAR (50),
    estado VARCHAR (50),
    CEP VARCHAR (10),
    CPFCliente VARCHAR(12) PRIMARY KEY, -- como nao tem especificacoes se um usuario pode ter mais de um endereco, deixei o cpf do cliente como primary key
    CONSTRAINT fk_clientes_endereco FOREIGN KEY (CPFCliente) REFERENCES Clientes(CPF) ON DELETE CASCADE
);

CREATE TABLE Contatos (
    email VARCHAR(100),
    telefone_fixo VARCHAR(20),
    telefone_celular VARCHAR(20),
    CPFCliente VARCHAR(12) PRIMARY KEY, -- como nao tem especificacoes se um usuario pode ter mais de um de cada forma de contato, deixei o cpf do cliente como primary key
    CONSTRAINT fk_clientes_contatos FOREIGN KEY (CPFCliente) REFERENCES Clientes(CPF) ON DELETE CASCADE
);











INSERT INTO Artes (id_arte, descricao, tag, url) 
VALUES (1, 'Tatuagem floral delicada', 'Tatuagem feita de flores sendo apenas delicada', 'https://i.pinimg.com/550x/a6/ec/2e/a6ec2e3c8619262b1ec307d86d8122a6.jpg');


INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-02', '14:30:00', 'concluída', 1200, 'alergia a anestesico', 1, 1);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('José Silva', '2005-02-07', '222188098-69', NULL);  -- Deixe o campo 'servico' como NULL por enquanto

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (1, 'Floral 1', 'ativo', 1);

UPDATE Sessoes
SET CPFCliente = '222188098-69' 
WHERE id_sessao = 1;

UPDATE Clientes 
SET servico = '1' 
WHERE CPF = '222188098-69';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Rua das Acácias', 479, 'Centro', 'São Carlos', 'São Paulo', '13560', '222188098-69');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('josesilva@gmail.com','38211329','18996089547','222188098-69');

INSERT INTO Usuarios(nome, funcao, login, senha) 
VALUES ('Jailton Almeida', 'Administrador', 'Jaalmeida', 'Jaja123');

UPDATE Servicos
SET login_usuario = 'Jaalmeida' 
WHERE id_servico = 1;








INSERT INTO Artes (id_arte, descricao, tag, url)
VALUES (2, 'Tatuagem de dragão realista', 'Tatuagem com design detalhado de um dragão', 'https://i.pinimg.com/236x/9d/85/99/9d8599c5d19b5893e144e3ebf561c7e5.jpg'); 

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) VALUES ('2025-01-05', '16:00:00', 'pendente', 1800, 'primeira tatuagem, cliente ansioso', 2, 2); 

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Ana Oliveira', '1998-11-15', '333789456-85', NULL); -- Deixe o campo 'servico' como NULL por enquanto 

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (2, 'Dragão Realista', 'cancelado', 2); 

UPDATE Sessoes 
SET CPFCliente = '333789456-85' 
WHERE id_sessao = 2; 

UPDATE Clientes 
SET servico = '2' 
WHERE CPF = '333789456-85'; 

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Avenida dos Pássaros', 120, 'Jardim das Flores', 'Campinas', 'São Paulo', '13060', '333789456-85');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('anaoliveira98@gmail.com','194857362', '19998765432', '333789456-85'); 

INSERT INTO Usuarios(nome, funcao, login, senha) VALUES ('Renato Gomes', 'Gerenciador', 'RenatoG', 'Rena@2025'); 

UPDATE Servicos 
SET login_usuario = 'RenatoG' 
WHERE id_servico = 2;










INSERT INTO Artes (id_arte, descricao, tag, url) 
VALUES (3, 'Tatuagem geométrica abstrata', 'Design geométrico com linhas e formas abstratas', 'https://i.pinimg.com/originals/e5/a8/43/e5a843457a032cfd6e68d5e38883fca0.png');

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-10', '10:00:00', 'pendente', 1500, 'cliente solicitou consulta inicial antes do procedimento', 3, 3);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Bruno Martins', '1990-03-22', '444567891-23', NULL);  -- Deixe o campo 'servico' como NULL por enquanto

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (3, 'Geométrico Abstrato', 'concluído', 3);

UPDATE Sessoes
SET CPFCliente = '444567891-23' 
WHERE id_sessao = 3;

UPDATE Clientes 
SET servico = '3' 
WHERE CPF = '444567891-23';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Rua dos Girassóis', 789, 'Parque das Nações', 'Londrina', 'Paraná', '86010', '444567891-23');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('brunomartins90@gmail.com', NULL, '41987654321', '444567891-23');

INSERT INTO Usuarios(nome, funcao, login, senha) 
VALUES ('Camila Freitas', 'Gerenciador', 'CamilaF', 'Cami@2025');

UPDATE Servicos
SET login_usuario = 'CamilaF' 
WHERE id_servico = 3;








INSERT INTO Artes (id_arte, descricao, tag, url) 
VALUES (4, 'Tatuagem minimalista de montanha', 'Desenho minimalista representando uma montanha', 'https://i.pinimg.com/550x/32/b6/4a/32b64aceca3a323fcf529a105e330505.jpg');

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-15', '16:00:00', 'concluída', 1000, 'cliente solicitou adiamento mas depois cancelou', 4, 4);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Ana Souza', '1985-07-15', '555678901-45', NULL);  -- Deixe o campo 'servico' como NULL por enquanto

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (4, 'Minimalista Montanha', 'cancelado', 4);

UPDATE Sessoes
SET CPFCliente = '555678901-45' 
WHERE id_sessao = 4;

UPDATE Clientes 
SET servico = '4' 
WHERE CPF = '555678901-45';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Avenida das Rosas', 567, 'Jardim Botânico', 'Curitiba', 'Paraná', '80540', '555678901-45');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('anasouza85@gmail.com', '4132456789', '41999987654', '555678901-45');

INSERT INTO Usuarios(nome, funcao, login, senha) 
VALUES ('Marcos Oliveira', 'Administrador', 'MarcosO', 'Admin1234');

UPDATE Servicos
SET login_usuario = 'MarcosO' 
WHERE id_servico = 4;









INSERT INTO Artes (id_arte, descricao, tag, url) 
VALUES (5, 'Tatuagem de águia tribal', 'Design tribal de uma águia em voo', 'https://i.pinimg.com/236x/d1/5d/b4/d15db4c37a59568424c0ed33726f21d3.jpg');

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-20', '14:00:00', 'agendada', 1300, 'cliente deseja detalhamento na águia', 5, 5);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Roberto Silva', '1987-12-10', '666789456-23', NULL);

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (5, 'Águia Tribal', 'cancelado', 5);

UPDATE Sessoes
SET CPFCliente = '666789456-23' 
WHERE id_sessao = 5;

UPDATE Clientes 
SET servico = '5' 
WHERE CPF = '666789456-23';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Rua das Águas', 321, 'Centro', 'São Paulo', 'São Paulo', '01234', '666789456-23');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('robertosilva@gmail.com', '1134567890', '11987654321', '666789456-23');

INSERT INTO Usuarios(nome, funcao, login, senha) 
VALUES ('Roberto Almeida', 'Administrador', 'RobertoA', 'Senha123');

UPDATE Servicos
SET login_usuario = 'RobertoA' 
WHERE id_servico = 5;

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-25', '09:30:00', 'agendada', 1100, 'cliente pediu um estilo mais discreto', 6, 1);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Lucas Pereira', '1992-04-18', '777123456-89', NULL);

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (6, 'Tatuagem Delicada', 'concluído', 6);

UPDATE Sessoes
SET CPFCliente = '777123456-89' 
WHERE id_sessao = 6;

UPDATE Clientes 
SET servico = '6' 
WHERE CPF = '777123456-89';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Avenida dos Pássaros', 123, 'Jardim das Flores', 'Campinas', 'São Paulo', '13060', '777123456-89');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('lucaspereira92@gmail.com', '1923456789', '19987654321', '777123456-89');

UPDATE Servicos
SET login_usuario = 'RobertoA' 
WHERE id_servico = 6;

INSERT INTO Sessoes (data_sessao, hora_sessao, status, preco, obs, id_sessao, id_arte) 
VALUES ('2025-01-30', '11:00:00', 'pendente', 1350, 'cliente está em dúvida sobre as cores', 7, 2);

INSERT INTO Clientes (nome, nascimento, CPF, servico) 
VALUES ('Fernanda Lima', '1989-07-05', '888234567-34', NULL);

INSERT INTO Servicos (id_servico, nome, status, id_sessao) 
VALUES (7, 'Cores Vibrantes', 'concluído', 7);

UPDATE Sessoes
SET CPFCliente = '888234567-34' 
WHERE id_sessao = 7;

UPDATE Clientes 
SET servico = '7' 
WHERE CPF = '888234567-34';

INSERT INTO Endereco (rua, numero, bairro, cidade, estado, CEP, CPFCliente) 
VALUES ('Rua das Acácias', 456, 'Centro', 'São Carlos', 'São Paulo', '13560', '888234567-34');

INSERT INTO Contatos(email, telefone_fixo, telefone_celular, CPFCliente) 
VALUES ('fernandalima@gmail.com', '1934567890', '19998765432', '888234567-34');

UPDATE Servicos
SET login_usuario = 'RobertoA' 
WHERE id_servico = 7;


– selects

SELECT Clientes.*, Endereco.*
FROM Clientes, Endereco
WHERE Clientes.CPF = Endereco.CPFCliente;

– Listagem com nome do serviço, descrição da arte, nome e e-mail dos clientes cujos serviços – foram cancelados.

SELECT Servicos.nome AS NomeServico, Artes.descricao AS DescricaoArte, Clientes.nome AS NomeCliente, Contatos.email AS EmailCliente
FROM Servicos, Artes, Clientes, Contatos, Sessoes
WHERE Servicos.id_sessao = Sessoes.id_sessao
	AND Sessoes.id_arte = Artes.id_arte
	AND Sessoes.CPFCliente = Clientes.CPF
	AND Clientes.CPF = Contatos.CPFCliente
	AND Servicos.status = 'cancelado';


-- Data, hora, nome do serviço e descrição da imagem das sessões agendadas
-- para serem realizadas no mês de janeiro de 2025.

SELECT data_sessao, hora_sessao, Servicos.nome, id_arte
FROM Sessoes, Servicos
WHERE Servicos.id_sessao = Sessoes.id_sessao
	AND data_sessao LIKE '2025-01___';

-- Nome do cliente, data, hora, observações e nome do serviço de todas as
-- sessões relacionadas ao usuário de nome “roberto”.
SELECT Clientes.nome, data_sessao, hora_sessao, obs, Servicos.nome
FROM Clientes, Sessoes, Servicos, Usuarios
WHERE Clientes.servico = Servicos.id_servico
	AND Servicos.id_sessao = Sessoes.id_sessao
    AND Servicos.login_usuario = Usuarios.login
	AND Usuarios.nome LIKE 'Roberto%';

-- Nome, data de nascimento, e endereço completo de todos os clientes que já
-- fizeram serviço com arte em cuja tag apareça a palavra “dragão”

SELECT Clientes.nome, nascimento, Endereco.*
FROM Clientes, Endereco, Artes, Sessoes
WHERE Sessoes.CPFCLiente = Clientes.CPF
	AND Sessoes.id_arte = Artes.id_arte
           AND Clientes.CPF = Endereco.CPFCliente
           AND tag LIKE '%dragão%';

--Trabalho/pesquisa
SELECT Endereco.cidade, Endereco.bairro, COUNT(Clientes.CPF) AS quantidade_clientes, SUM(CASE WHEN Servicos.status = 'concluido' THEN 1 ELSE 0 END) AS ServicosConcluidos
FROM Endereco, Clientes, Sessoes, Servicos
WHERE Clientes.CPF = Endereco.CPFCliente
	AND Sessoes.CPFCliente = Clientes.CPF
    AND Sessoes.id_sessao = Servicos.id_sessao
GROUP BY Endereco.cidade, Endereco.bairro
ORDER BY quantidade_clientes DESC;
