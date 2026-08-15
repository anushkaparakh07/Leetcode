# Write your MySQL query statement below
select date_format(trans_date,'%Y-%m') as month,
country,count(amount) as trans_count,
COUNT(CASE WHEN state = 'approved' THEN 1 END) as approved_count,
sum(amount) as trans_total_amount,
SUM(CASE WHEN state = 'approved' THEN amount else 0 END) as approved_total_amount
from Transactions group by month,country;