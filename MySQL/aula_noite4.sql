CREATE DATABASE AULA_NOITE4;
 
USE AULA_NOITE4;
 
CREATE TABLE empregado (
   matricula INT primary key,
   nome VARCHAR(100) not null,
   cpf   VARCHAR(14) UNIQUE,
   salario DECIMAL(10,2) not null
);
 
INSERT INTO empregado
(matricula, nome, cpf, salario)
VALUES
(220, 'JOSEFA', '01123456700', 1500),
(223, 'Mariana', '01023456789', 1500),
(224, 'PEDRO', '01223456789', 1500),
(333, 'DOMINGUES', '01123456788', 10500),
(111, 'MENDEZ', NULL, 3000),
(2209, 'JOSEFINA', '02123456700', 1500),
(2239, 'Mariano', '02023456789', 1500),
(2249, 'PAULO', '02223456789', 1500),
(3339, 'SAVIO', '02123456788', 10500),
(1119, 'AMARAL', NULL, 3000),
(2220, 'Lorena', '123456700', 1500),
(2223, 'Maria', '023456789', 1500),
(2224, 'Jose', '223456789', 1500),
(3333, 'DOMINGOS', '123456788', 10500),
(1111, 'MENDES', NULL, 3000);
 
select * from empregado
where cpf is null
and nome LIKE 'M%'
OR salario < 2000;
 
select * from empregado
where salario not between 1000 and 3000;
 
select * from empregado
where salario in (1000,20,5000,2000,3000,99999);
 
select * from empregado
where nome not in ('DOMINGOS', 'MENDES');
 
select * from empregado
where cpf is null;
 
select * from empregado
where not nome not like 'm%'
or salario < 2000 ;
 
select * from empregado
where salario like '%500%';
 
select * from empregado
where nome like 'm%'
and salario < 2000
ORDER BY nome decs;
 
select * from empregado
order by nome desc,salario desc
limit 7;