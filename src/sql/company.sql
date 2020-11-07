create table companies
(
    ID                    int auto_increment
        primary key,
    NAME varchar(60) not null,
    LOGO varchar(255) null,
    DATE_INSERT datetime not null
);
