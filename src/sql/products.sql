create table products
(
    ID int auto_increment primary key,
    NAME varchar(60),
    COMPANY_ID int not null,
    QUANTITY int,
    DATE_CREATED datetime not null
)