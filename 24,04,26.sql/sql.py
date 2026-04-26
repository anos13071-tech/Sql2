# CREATE TABLE sales (
#     id INT PRIMARY KEY,
#     product_name VARCHAR(50),
#     category VARCHAR(50),
#     price INT,
#     quantity INT,
#     sale_date DATE
# );
# INSERT INTO sales VALUES (1, 'Laptop', 'Electronics', 800, 2, '2025-01-01');
# INSERT INTO sales VALUES (2, 'Phone', 'Electronics', 600, 3, '2025-01-01');
# INSERT INTO sales VALUES (3, 'TV', 'Electronics', 900, 1, '2025-01-02');
# INSERT INTO sales VALUES (4, 'Headphones', 'Electronics', 150, 5, '2025-01-03');

# INSERT INTO sales VALUES (5, 'Table', 'Furniture', 300, 1, '2025-01-01');
# INSERT INTO sales VALUES (6, 'Chair', 'Furniture', 100, 4, '2025-01-02');
# INSERT INTO sales VALUES (7, 'Sofa', 'Furniture', 1200, 1, '2025-01-03');
# INSERT INTO sales VALUES (8, 'Bed', 'Furniture', 900, 1, '2025-01-04');

# INSERT INTO sales VALUES (9, 'T-shirt', 'Clothing', 40, 6, '2025-01-01');
# INSERT INTO sales VALUES (10, 'Jeans', 'Clothing', 70, 3, '2025-01-02');
# INSERT INTO sales VALUES (11, 'Jacket', 'Clothing', 120, 2, '2025-01-03');
# INSERT INTO sales VALUES (12, 'Shoes', 'Clothing', 90, 4, '2025-01-04');

# INSERT INTO sales VALUES (13, 'Apple', 'Food', 2, 20, '2025-01-01');
# INSERT INTO sales VALUES (14, 'Bread', 'Food', 3, 15, '2025-01-02');
# INSERT INTO sales VALUES (15, 'Milk', 'Food', 4, 10, '2025-01-03');
# INSERT INTO sales VALUES (16, 'Cheese', 'Food', 8, 5, '2025-01-04');

# INSERT INTO sales VALUES (17, 'Notebook', 'Stationery', 5, 10, '2025-01-01');
# INSERT INTO sales VALUES (18, 'Pen', 'Stationery', 2, 25, '2025-01-02');
# INSERT INTO sales VALUES (19, 'Marker', 'Stationery', 4, 12, '2025-01-03');
# INSERT INTO sales VALUES (20, 'Folder', 'Stationery', 6, 8, '2025-01-04');
# ----1
# select  category , COUNT(*) as  quantity from sales  group by category;
# ----2
# select category, sum(price * quantity) as jami from sales group by category;
# ----3
# select category , Avg (price) as urta from sales group by category;
# ----4
# select sale_date, sum(price * quantity) as kun from sales group by sale_date;
# ----5
# select sum(price * quantity) as jami from sales WHERE category='Electronics';
# ----6
# select category,sum(price * quantity)as jami from sales group by category HAVING sum(price * quantity) > 2000 ;
# ----7
# select category , avg (price)       as urta from sales group by category HAVING avg(price) > 100;
# ----8
# select sum(quantity) as sotilgan from sales WHERE sale_date = '2025-01-01';
# ----9
# select category, sum(quantity)  as Eng_kattasi from sales GROUP by category ORDER by Eng_kattasi DESC LIMIT 1;
# ----10
# select category , sum(price * quantity) as mana from sales WHERE quantity > 3 group by category;