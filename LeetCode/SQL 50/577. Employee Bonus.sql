# Problem link: https://leetcode.com/problems/employee-bonus/?envType=study-plan-v2&envId=top-sql-50

SELECT E.name, B.bonus
FROM Employee E
LEFT JOIN Bonus B 
ON E.empId = B.empId
WHERE B.bonus IS NULL OR B.bonus < 1000