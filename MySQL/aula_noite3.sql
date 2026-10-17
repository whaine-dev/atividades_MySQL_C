CREATE DATABASE AULANOTE3;

USE AULANOTE3;

CREATE TABLE departamento (
    cod_deparatamento INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    localizicao VARCHAR(100) NOT NULL
)CHARSET=utf8mb4;

CREATE TABLE emprego (
    matricula INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cpf VARCHAR(14) NOT NULL UNIQUE,
    salario DECIMAL(7,2) NOT NULL
)CHARSET=utf8mb4;

INSERT INTO departamento VALUES
(NULL, "depto1", "recife"),
(NULL, "depto2", "recife"),
(NULL,"depto3", "recife"),
(NUll, "depto4", "recife"),
(NULL, "depto5", "recife");

INSERT INTO emprego VALUES
(NULL , "JOSAFA", "0012536475", "1500"),
(NULL , "PREDO", "8657584", "1000"),
(NULL , "jose", "9763456", "1000");

START TRANSACTION;

UPDATE departamento SET localizicao = "maceio";

DELETE FROM departamento
WHERE cod_depto >= 4;

DELETE FROM departamento
WHERE cod_deparatamento BETWEEN 1 AND 3;

DELETE FROM departamento
WHERE cod_deparatamento IN (10, 24, 34, 56, 78, 45, 34);

DELETE FROM departamento
WHERE nome LIKE  "d%";

SELECT * FROM departamento;