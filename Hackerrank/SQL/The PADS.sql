SELECT CONCAT(name, "(", LEFT(occupation, 1), ")") 
FROM OCCUPATIONS 
ORDER BY name ASC;


SELECT CONCAT('There are a total of ', count(occupation), ' ', lower(occupation), 's.')
from OCCUPATIONS 
GROUP BY occupation
order by count(occupation) ASC;