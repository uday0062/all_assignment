CREATE DATABASE CUSTOMERS;
CREATE TABLE NewCustomers(
id int primary key,
Name varchar(50),
Email varchar(50),
Phone_no varchar(10) unique,
Amount int
);
INSERT into NewCustomers
(id, Name, Email, Phone_no , Amount)
Values
(1,"Riya","riya34@gmail.com","446633",45000),
(2,"Mohan","mina3@gmail.com","644903",50000),
(3,"Rahul","rahul@gmail.com","738383",50030);

select * from NewCustomers;

update newcustomers
set Amount= 50000
where id=1;

Delete from newcustomers
where id=3;









