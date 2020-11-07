create table orders
(
    ID                    int auto_increment
        primary key,
    PAYED                 char           default 'N'    not null,
    CANCELED              char           default 'N'    not null,
    DATE_CANCELED         datetime                      null,
    PRICE_DELIVERY        decimal(18, 4) default 0.0000 not null,
    PRICE                 decimal(18, 4)                not null,
    CURRENCY              char(3)                       not null,
    USER_ID               int                           not null,
    DATE_INSERT           datetime                      not null,
    DATE_UPDATE           datetime                      not null,
    SUM_PAID              decimal(18, 2) default 0.00   not null,
    CREATED_BY            int                           null,
    COMPANY_ID            int                           null,
);

