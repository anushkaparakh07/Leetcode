# Write your MySQL query statement below
select w.id
from Weather w
join Weather w1 
on w1.recordDate = DATE_SUB(w.recordDate,INTERVAL 1 DAY)
where w.temperature > w1.temperature;