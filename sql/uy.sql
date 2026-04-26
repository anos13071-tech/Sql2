CREATE TABLE samsung(brend VARCHAR(50),  model VARCHAR(50),  cpu VARCHAR(50),  frequeny REAL,  ram INT,  os VARCHAR(50), price INT);
INSERT INTO samsung VALUES("Apple", "MacBook Pro", "Apple M2", 3.5, 16, "macOS", 2500),
                          ("ASUS", "ZenBook 14", "Intel Core i7", 4.7, 16, "Windows 11", 1500),
                          ("HP", "Pavilion 15", "AMD Ryzen 5", 4.0, 8, "Windows 10", 900),
                          ("Dell", "XPS 13", "Intel Core i5", 4.2, 8, "Ubuntu 20.04", 1200),
                          ("Lenovo", "ThinkPad X1", "Intel Core i7", 4.8, 16, "Windows 11", 2000),
                          ("Acer", "Aspire 5", "AMD Ryzen 3", 3.6, 4, "Windows 10", 600),
                          ("MSI", "GF63 Thin", "Intel Core i5", 4.5, 8, "Windows 11", 1100);
1
SELECT * FROM samsung ORDER by price DESC LIMIT 1;
2
SELECT * FROM samsung ORDER by price ASC LIMIT 1;
3
SELECT frequeny FROM samsung WHERE price BETWEEN 400 and 1200  and cpu  LIKE "%Intel%" ORDER by frequeny;
4
SELECT * FROM samsung WHERE brend LIKE "%Apple%";
5
SELECT * FROM samsung WHERE os LIKE "%Windows%" and ram = 8 and  brend LIKE "%ASUS%";
-- ---------------------------------------------------------------
CREATE TABLE SQLikki(BookID INT,Title Varchar(50),Author Varchar(50),Genre Varchar(50),YearPublished year ,PageCount INT,Price DECIMAL(10,2), Available boolean)
insert into SQLikki VALUES(1,"Python Basics", 'Ali Valiyev', 'Programming', "2022", 250, 5000.00, TRUE),
                            (2, 'Algebra 1', 'Sardor Karimov', 'Education', "2020", 300, 4000.00, TRUE),
                            (3, 'World History', 'John Smith', 'History', "2018", 400, 6000.00, FALSE),
                            (4, 'Biology Guide', 'Anna Lee', 'Science', "2021", 350, 5200.00, TRUE),
                            (5, 'English Grammar', 'David Brown', 'Education', "2019", 280, 4000.00, TRUE);
select * FROM SQLikki WHERE YearPublished > 15;
select * from SQLikki ORDER  by PageCount  DESC LIMIT 1;
select * from SQLikki WHERE Title LIKE "%Alg%";
select Genre,COUNT(*) AS Author from SQLikki GROUP by Genre;

CREATE TABLE SQLikkib (CourseID INT,Title VARCHAR(50),Instructor Varchar(50),DurationHr DECIMAL(4,1),Price DECIMAL(8,2),Rating DECIMAL(2,1),Enrolled int);
-- --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

UYGA VAZIFA 24.04.2026
CREATE TABLE sales (
    id INT PRIMARY KEY,
    product_name VARCHAR(50),
    category VARCHAR(50),
    price INT,
    quantity INT,
    sale_date DATE
);
INSERT INTO sales VALUES (1, 'Laptop', 'Electronics', 800, 2, '2025-01-01');
INSERT INTO sales VALUES (2, 'Phone', 'Electronics', 600, 3, '2025-01-01');
INSERT INTO sales VALUES (3, 'TV', 'Electronics', 900, 1, '2025-01-02');
INSERT INTO sales VALUES (4, 'Headphones', 'Electronics', 150, 5, '2025-01-03');

INSERT INTO sales VALUES (5, 'Table', 'Furniture', 300, 1, '2025-01-01');
INSERT INTO sales VALUES (6, 'Chair', 'Furniture', 100, 4, '2025-01-02');
INSERT INTO sales VALUES (7, 'Sofa', 'Furniture', 1200, 1, '2025-01-03');
INSERT INTO sales VALUES (8, 'Bed', 'Furniture', 900, 1, '2025-01-04');

INSERT INTO sales VALUES (9, 'T-shirt', 'Clothing', 40, 6, '2025-01-01');
INSERT INTO sales VALUES (10, 'Jeans', 'Clothing', 70, 3, '2025-01-02');
INSERT INTO sales VALUES (11, 'Jacket', 'Clothing', 120, 2, '2025-01-03');
INSERT INTO sales VALUES (12, 'Shoes', 'Clothing', 90, 4, '2025-01-04');

INSERT INTO sales VALUES (13, 'Apple', 'Food', 2, 20, '2025-01-01');
INSERT INTO sales VALUES (14, 'Bread', 'Food', 3, 15, '2025-01-02');
INSERT INTO sales VALUES (15, 'Milk', 'Food', 4, 10, '2025-01-03');
INSERT INTO sales VALUES (16, 'Cheese', 'Food', 8, 5, '2025-01-04');

INSERT INTO sales VALUES (17, 'Notebook', 'Stationery', 5, 10, '2025-01-01');
INSERT INTO sales VALUES (18, 'Pen', 'Stationery', 2, 25, '2025-01-02');
INSERT INTO sales VALUES (19, 'Marker', 'Stationery', 4, 12, '2025-01-03');
INSERT INTO sales VALUES (20, 'Folder', 'Stationery', 6, 8, '2025-01-04');
----1
select  category , COUNT(*) as  quantity from sales  group by category;
----2
select category, sum(price * quantity) as jami from sales group by category;
----3
select category , Avg (price) as urta from sales group by category;
----4
select sale_date, sum(price * quantity) as kun from sales group by sale_date;
----5
select sum(price * quantity) as jami from sales WHERE category='Electronics';
----6
select category,sum(price * quantity)as jami from sales group by category HAVING sum(price * quantity) > 2000 ;
----7
select category , avg (price)       as urta from sales group by category HAVING avg(price) > 100;
----8
select sum(quantity) as sotilgan from sales WHERE sale_date = '2025-01-01';
----9
select category, sum(quantity)  as Eng_kattasi from sales GROUP by category ORDER by Eng_kattasi DESC LIMIT 1;
----10
select category , sum(price * quantity) as mana from sales WHERE quantity > 3 group by category;