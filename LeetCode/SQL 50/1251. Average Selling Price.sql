

select P.product_id, IFNULL(round(sum(P.price*U.units)/sum(U.units),2),0) as average_price
FROM Prices P left join UnitsSold U
ON (P.product_id = U.product_id) AND (U.purchase_date BETWEEN P.start_date AND P.end_date)
group by P.product_id;
