SELECT Customers.*, Orders.*, CASE 
    WHEN product LIKE 'C%' THEN 'c'
    WHEN product LIKE 'P%' THEN 'p'
    WHEN product LIKE 'T%' THEN 't'
    END AS primeira_letra
FROM Customers, Orders
WHERE Orders.customer_id=Customers.customer_id;
