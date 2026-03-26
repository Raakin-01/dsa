dbms:
A special software program that helps users create and maintain a database.
->makes it easy to manage large amounts of information .
->handles security.
->backups.
->importing /exporting data.
->concurrency.
->interacts with software applications.

C.R.U.D:
create read update delete/
create retrieve update delete

==2 types of databases:==
1)Relational Databases(SQL):
organizes data into 1 or more tables
->each table has row and column.
->A unique key identifies each row.

2)Non-Relational(noSQL/not just SQL):
organized data is anything but a traditional table
->key value stores
->Documents(JSON,XML,etc)
->Graphs 
->Flexible Tables

Relational Databases(SQL):
  Relational database management system(RDBMS).
   ->help users create and  maintain relational databases.
   ->eg:mysql, oracle.

Structured Query Language (SQL):
 Standardized language for interacting with RDBMS.
    ->used to perform C.R.U.D operations , as well as administirative tasks (user management , security,backup,etc).
    ->used to define tables and structures
 SQL code used on one RDBMS is not always portable to another without modifications .

Non relational databases(noSQL/not just SQL):
     Non relational database management Systems(NRDBMS)
         ->Help users create and maintain a non relational databases
           eg:  mongoDB,dynamoDB,apache 
      they do not have their own set language standard .
      most NRDBMS will implement their own language for performing C.R.U.D and administrative operations on the database.

Database Queries:
Queries are request made to the database management system for specific information.

==**Tables And Keys:**==
A table has 2 things column and rows .
column is vertical sections of a table
The columns of the table correspond to the attributes of the record type.

**Primary key:**
the primary key is always gonna be unique for all attributes.
->A primary key uniquely defines the row in the Database 
it uses underline 
always define a primary key in a table .
->whenever u want to store data ,define a table and insert the info in that table.

==**surrogate key**==
its a primary key that has no mapping to anything in real world.

==**natural key**== 
A primary key that has mapping or purpose in real world.

==**Foreign key**==
it is a attribute that can be stored in a table that can link us to another database table.
->Foreign key stores  the primary key of a row in another database table.
->A table can have more than one branch of foreign key.

**==composite keys==**
it is a column made of 2 or more foreign keys .
