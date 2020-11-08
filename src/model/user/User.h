/*
	Purpose from this file is store the data to database (If it will exesist) or
	write to .txt file.
1.  Gets inputs and store/write them.
2.  Returns stored data .
*/
#include "../../db/db.h"
#include <stdio.h>
#include <string.h>

struct User {
  int id;
  char firstName[25];
  char lastName[25];
  char phoneNumber[25];
};
char setFirstName(char firstName){
    char str[10090];
    int ch, n = 0;
    while ((ch = getchar()) != EOF && n < 1000) {
        str[n] = ch;
        ++n;
    }
    for (int i = 0; i < n; ++i)
        putchar(str[i]);
    putchar('\n'); /* trailing '\n' needed in Standard C */
}

void createUser(char name[30], char password[100], char phoneNumber[10]) {
    connect();
    char comma[] = ",";
    char close[] = ")";
    char sss[] = "'";
    char timenow[] = "now()";
    char sql[500] = "insert into users (name, password, phone_number, date_created) values (";
    //very bad way of inserting to db, i will try to find other way
    strncat(sql, sss, strlen(sss));
    strncat(sql, name, strlen(name));
    strncat(sql, sss, strlen(sss));
    strncat(sql, comma, strlen(comma));

    strncat(sql, sss, strlen(sss));
    strncat(sql, password, strlen(password));
    strncat(sql, sss, strlen(sss));
    strncat(sql, comma, strlen(comma));

    strncat(sql, sss, strlen(sss));
    strncat(sql, phoneNumber, strlen(phoneNumber));
    strncat(sql, sss, strlen(sss));
    strncat(sql, comma, strlen(comma));
    strncat(sql, timenow, strlen(timenow));

    strncat(sql, close, strlen(close));
    printf("Sql is: %s\n", sql);


    if (!mysql_query(conn, sql)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        mysql_close(conn);
        exit(1);
    }
    mysql_close(conn);
}

int user() {
    struct User userModel;
    strcpy(userModel.firstName, "Some");
	printf("Hello from user model\n");
	printf("First name : %s\n", userModel.firstName);
	return 0;
}