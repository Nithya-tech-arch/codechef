//Revising Aggregations


Select SUM(POPULATION) from CITY where
DISTRICT='California';


//Weather Observation 13


Select round(sum(LAT_N),4) from STATION where
LAT_N > 38.7880 and LAT_N <137.2345;


//Population Census


Select sum(ci.population) from city ci 
inner join country co
on ci.countrycode=co.code
where co.continent='Asia';



//African Cities


Select ci.NAME from CITY ci 
inner join COUNTRY co
on ci.COUNTRYCODE=co.CODE
where co.CONTINENT='Africa';



//Basic Joins


Select  co.CONTINENT, floor(AVG(ci.POPULATION)) as avg_cityPopulation from COUNTRY co
inner join CITY ci on
ci.COUNTRYCODE=co.CODE
group by co.CONTINENT;




//Advanced Selects


Select Name || '(' || SUBSTR(Occupation,1,1) || ')'
from OCCUPATIONS order by Name ASC;

Select 'There are a total of ' || count(occupation) || ' ' ||  lower(occupation)||'s.'
from OCCUPATIONS group by occupation order by count(occupation),lower(occupation);



//The Blunder


Select Ceil(Avg(Salary))-Floor(Avg(replace(Salary, 0))) from EMPLOYEES;
