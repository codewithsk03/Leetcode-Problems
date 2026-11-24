# Write your MySQL query statement below
select p.project_id, 
    round(
        sum(e.experience_years)/count(p.project_id),2
    ) as average_years from Project as p
    LEFT JOIN Employee as e
    ON p.employee_id = e.employee_id
    group by project_id;