#include <mysql/mysql.h>
#include <stdio.h>
// #include "db/db.h"
#include "model/user/User.h"

int main() {
    // connect();
    // gcc -o dbexample $(mysql_config --cflags) dbexample.c  $(mysql_config --libs)
    createUser("Islom", "12345654", "998998403675");
    return 0;
}