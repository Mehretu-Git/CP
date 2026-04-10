# Write your MySQL query statement below
SELECT
    Eu.unique_id AS unique_id,
    Em.name AS name
FROM 
    Employees AS Em
        LEFT JOIN
    EmployeeUNI AS Eu ON Em.id = Eu.id;