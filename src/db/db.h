#include <mysql/mysql.h>
#include <stdio.h>

MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;


void connect() {
    // MYSQL *conn;
    // MYSQL_RES *res;
    // MYSQL_ROW row;

    //Here you need to provide your db cridentials
    char *server = "localhost";
    char *user = "user_db";
    char *password = "gulnorA0924";
    char *database = "app";

    conn = mysql_init(NULL);

    /* Connect to database */
    // if (!mysql_real_connect(conn, server,
    //     user, password, database, 0, NULL, 0)) {
    //     fprintf(stderr, "%s\n", mysql_error(conn));
    //     exit(1);
    // }

    /* send SQL query */
    // if (mysql_query(conn, "show tables")) {
    //     fprintf(stderr, "%s\n", mysql_error(conn));
    //     exit(1);
    // }

    // res = mysql_use_result(conn);
    //This is the sample of how to use database

    // printf("MySQL Tables in mysql database:\n");
    // while ((row = mysql_fetch_row(res)) != NULL)
    //     printf("%s \n", row[0]);

    // mysql_free_result(res);
    // mysql_close(conn);
    // return *conn;
}
void close_connection(MYSQL *conn) {
    mysql_close(conn);
}