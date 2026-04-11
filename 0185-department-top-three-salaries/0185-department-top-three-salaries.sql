# Write your MySQL query statement below
SELECT
    D.name AS Department,
    E.name AS Employee,
    E.salary AS Salary
FROM
    (SELECT departmentId, salary,name, DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) AS ranknum FROM Employee) AS E
        JOIN
    Department AS D ON E.departmentId = D.id
WHERE 
    ranknum <= 3;