#include <mysql/mysql.h>
#include <stdio.h>

MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;
MYSQL_STMT *stmt;


void connect() {

    //Here you need to provide your db cridentials
    char *server = "localhost";
    char *user = "user_db";
    char *password = "gulnorA0924";
    char *database = "app";

    conn = mysql_init(NULL);
}