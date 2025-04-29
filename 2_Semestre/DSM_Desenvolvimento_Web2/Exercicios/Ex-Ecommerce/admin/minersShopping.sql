CREATE DATABASE IF NOT EXISTS minersShopping;

USE minersShopping;

CREATE TABLE IF NOT EXISTS produtos (
    id INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    descricao VARCHAR(500) NOT NULL,
    preco DECIMAL(9,2),
    PRIMARY KEY(id)
);

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Picareta Comum', 'Picareta simples para minerações lentas e improdutivas.', 256.32);

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Picareta de Diamante', 'Picareta feita com diamantes, perfeita pra extrair obsidiana.', 512.32);

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Picareta de Netherite', 'Picareta extremamente resistente, feita com mineral obtido diretamente do submundo.', 1024.32)

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Picareta de Netherite Encantada', 'Combina a resistencia da picareta de netherite com encantamentos antigos de velocidade.', 2048.32)

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Escavadora de Mão', 'Ferramenta utilizada por anões mineradores nas minas espaciais.', 4096.32);

INSERT INTO produtos (nome, descricao, preco)
VALUES ('Pack de 64 Tochas', 'Um pack de tochas ideal para explorar cavernas escuras.', 64.32);