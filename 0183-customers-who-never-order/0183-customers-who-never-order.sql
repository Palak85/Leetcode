# Write your MySQL query statement below
SELECT c.name AS Customers FROM Customers As c LEFT JOIN Orders As o ON c.id = o.customerId WHERE o.id IS NULL;