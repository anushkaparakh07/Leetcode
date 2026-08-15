# Write your MySQL query statement below
select e.name 
from employee e
join employee m
on m.managerId = e.id
group by m.managerId having
count(*)>=5;