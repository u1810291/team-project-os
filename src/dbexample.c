#include <mysql/mysql.h>
#include <stdio.h>
#include "db/db.h"

int main() {
    connect();
    // gcc -o dbexample $(mysql_config --cflags) dbexample.c  $(mysql_config --libs)
    return 0;
}