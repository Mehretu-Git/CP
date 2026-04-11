# Write your MySQL query statement below
SELECT
    D.name AS Department,
    E.name AS Employee,
    E.salary AS Salary
FROM
    (SELECT 
        name, 
        salary, 
        departmentID,
        DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) AS ranknum 
    FROM Employee ) AS E 
        LEFT JOIN
    Department AS D ON E.departmentId = D.id
WHERE   
    ranknum = 1;