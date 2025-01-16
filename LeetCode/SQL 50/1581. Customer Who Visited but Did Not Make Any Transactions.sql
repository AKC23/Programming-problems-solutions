Problem Link: https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/description/?envType=study-plan-v2&envId=top-sql-50



select v.customer_id, count(v.visit_id) as count_no_trans 
from Visits v
left join transactions t
on v.visit_id = t.visit_id
where t.transaction_id is null
group by v.customer_id;




