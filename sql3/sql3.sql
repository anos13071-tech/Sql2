CREATE TABLE genre (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50) NOT NULL
);

CREATE TABLE author (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50) NOT NULL
);

CREATE TABLE book(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    price INT,
    amount INT,
    a_id INT,
    g_id INT,
    FOREIGN KEY (a_id) REFERENCES author(id) ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY (g_id) REFERENCES genre(id) ON DELETE CASCADE ON UPDATE CASCADE
);


INSERT INTO genre VALUES(1, "ertak"), (2, "tarixiy"), (3, "badiiy"), (4, "detektiv");

INSERT INTO author VALUES
    (1, "Xudoyberdi To'xtaboyev"), 
    (2, "Adolfe Hitler"), 
    (3, "Alisher Navoiy"), 
    (4, "Ahad Qayum");

INSERT INTO book(name, price, amount, a_id, g_id)
    VALUES
    ("Shaytanat", 100000, 4, 2, 3),
    ("Ikki eshik orasi", 150000, 2, 2, 2),
    ("Devona", 70000, 4, 4, 3),
    ("Do'st ortirish", 60000, 10, 1, 1),
    ("Jannatiy odamlar", 150000, 2, 3, 4),
    ("Binafsha shulasi", 150000, 29, 1, 2),
    ("Al - kimyogar", 150000, 14, 3, 1),
    ("Buzrukning kuzi", 150000, 5, 3, 3),
    ("Mehrobdan chayon", 150000, 2, 2, 4),
    ("Dunyoning ishlari", 150000, 90, 4, 2);

----1
SELECT DISTINCT g.name  FROM book AS b
    INNER JOIN author AS a
    ON a.id=b.a_id
    INNER JOIN genre AS g
    ON g.id = b.g_id
    WHERE a.name='Alisher Navoiy';
----2
SELECT a.name, JSON_ARRAYAGG(b.name) AS books, JSON_ARRAYAGG(g.name) AS genres FROM book AS b
INNER JOIN author AS a 
ON a.id = b.a_id
INNER JOIN genre AS g 
ON g.id = b.g_id
GROUP BY a.id;
----3
select a.name ,JSON_ARRAYAGG(g.name) as janr
from book as b 
INNER JOIN author as a 
on a.id=b.a_id
INNER JOIN genre as G
on g.id=b.g_id
GROUP by a.id,a.name;
----4
select g.name ,COUNT(*) as soni from  book as b
INNER JOIN genre as g on g.id=b.g_id
group by g.id,g.name
ORDER by soni DESC LIMIT 1;
----6
SELECT a.name,SUM(b.amount) AS so
from book b
JOIN author a ON a.id = b.a_id
group BY a.id, a.name
ORDER by so DESC
LIMIT 1;