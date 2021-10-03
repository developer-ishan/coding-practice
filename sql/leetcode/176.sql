SELECT (
    SELECT DISTINCT Salary,
      LastName
    FROM Employee
    ORDER BY Salary DESC
    LIMIT 1 OFFSET 1
  ) AS SecondHighestSalary;