# Write your MySQL query statement below
select e.name from Employee as e
JOIN Employee as m
ON e.id = m.managerId
group by e.id,e.name
HAVING COUNT(m.id)>=5;