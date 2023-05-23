delimiter //
create procedure emp_cpy()
begin
	declare vfinished int default 0;
	declare  e int;
	declare n varchar(25);
	declare s float;
	use DBMS;
	declare emp_i cursor for select * from emp;
	declare continue handler for not found set vfinished=1;
	
open emp_i;
 getdata:loop
     fetch  emp_i into e,n,s;
     if vfinished=1 then
     leave getdata;
     end if;
    
    insert into emp_sal values(e,n,s);
    end loop getdata;
    close emp_i;
    end;
    //
    
