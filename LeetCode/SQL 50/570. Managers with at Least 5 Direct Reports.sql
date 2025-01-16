# Problem Link: 

select e.name 
from Employee e 
left join Employee f
on e.id != f.id AND e.id = f.managerId
group by e.id
having count(f.managerId) >=5; 
