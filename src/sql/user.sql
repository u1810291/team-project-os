
create table users
(
    ID int auto_increment primary key,
    NAME varchar(60),
    PASSWORD varchar(255),
    PHONE_NUMBER varchar(20),
    DATE_CREATED datetime not null
)