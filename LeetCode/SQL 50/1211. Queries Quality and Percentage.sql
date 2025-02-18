
/* Solution 1 */
Select q1.query_name, round(q1.quality1 / q2.count2,2) as quality, round(100* poor_query3 / q2.count2,2) as poor_query_percentage
from 
(select query_name, sum(rating/position) as quality1 from Queries group by query_name) as q1
join
(select query_name, count(*) as count2 from Queries group by query_name) as q2
on q1.query_name = q2.query_name
join 
(select query_name, SUM(case when rating < 3 then 1 else 0 end) AS poor_query3 from Queries group by query_name) as q3
on q1.query_name = q3.query_name;


/* Solution 2 */ 
select 
query_name, round(avg(rating / position), 2) as quality, round(100 * sum(case when rating < 3 then 1 else 0 end) / count(*), 2) as poor_query_percentage
from queries
group by query_name;


