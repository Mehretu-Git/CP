# Write your MySQL query statement below
SELECT
    max(num) AS num
FROM 
    (SELECT
        num,
        COUNT(num) AS freq
    FROM 
        MyNumbers
    GROUP BY
        num) AS num_freq
WHERE
    freq = 1;