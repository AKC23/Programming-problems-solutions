SELECT N,
    CASE 
         WHEN P is null THEN ' Root'
         WHEN N in (select distinct P from BST where P is not null) THEN ' Inner'
         ELSE ' Leaf'
    END
FROM BST
order by N asc;
