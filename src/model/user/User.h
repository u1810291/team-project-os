

#include <stdio.h>
#include <string.h>
#include "../../db/db.h"

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

int user() {
    struct User userModel;
    strcpy(userModel.firstName, "Some");
	printf("Hello from user model\n");
	printf("First name : %s\n", userModel.firstName);
	return 0;
}

void create(char name[20], char password[40], char phonenumber[10]) {
    connect();
    // char sql[120];
    // strcpy(sql, "insert into users (NAME, PASSWORD, PHONE_NUMBER, DATE_CREATED) VALUES (");
    // strcat(sql, "'");
    // strcat(sql, name);
    // strcat(sql, "'");
    // strcat(sql, ",");

    // strcat(sql, "'");
    // strcat(sql, password);
    // strcat(sql, "'");
    // strcat(sql, ",");

    // strcat(sql, "'");       
    // strcat(sql, phonenumber);
    // strcat(sql, "'");
    // strcat(sql, ", NOW())");
    // printf("%s\n", sql);
    // if (mysql_query(conn, sql) != 0)                   
    // {                                                                                                  
    //     fprintf(stderr, "Query Failure\n");                                                                                                                                    
    // }  
    // close_connection(conn);
}