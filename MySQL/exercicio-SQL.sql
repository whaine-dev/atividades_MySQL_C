CREATE DATABASE aula_teste;


USE aula_teste;


CREATE TABLE departamento (

id_departamento INT AUTO_INCREMENT PRIMARY KEY,

nome VARCHAR(100) NOT NULL

)CHARSET=utf8mb4;


CREATE TABLE empregado (

id_emp INT AUTO_INCREMENT PRIMARY KEY,

nome VARCHAR(100) NOT NULL,

salario DECIMAL(10,2)

)CHARSET=utf8mb4;


INSERT INTO departamento VALUES

(NULL, "TI"),

(NULL, "AMD"),

(NULL, "SECRETARIA");


INSERT INTO empregado VALUES

(NULL, "taty", "1300"),

(NULL, "julia", "2000"),

(NULL, "laiz", "2500"),

(NULL, "whiane", "3000"),

(NULL, "maria", "5000");


SELECT * FROM empregado

WHERE salario BETWEEN 2000 AND 5000;


UPDATE empregado

SET salario = 10000

WHERE salario < 10000;


DELETE FROM empregado

WHERE id_emp = 1;


ALTER TABLE empregado --

ADD COLUMN id_depto INT;


SELECT * FROM departamento

WHERE nome LIKE "A%";


SELECT * FROM departamento;

SELECT * FROM empregado;