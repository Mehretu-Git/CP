# Write your MySQL query statement below
SELECT 
    MAX(salary) AS SecondHighestSalary
FROM 
    (SELECT 
        salary,
        DENSE_RANK() OVER(ORDER BY salary DESC) AS rankNum
    FROM 
        Employee) AS tempTable
WHERE
    rankNum = 2;
