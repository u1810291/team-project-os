/*
	Purpose from this file is store the data to database (If it will exesist) or
	write to .txt file.
1.  Gets inputs and store/write them.
2.  Returns stored data .
*/

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

int user() {
    struct User userModel;
    strcpy(userModel.firstName, "Some");
	printf("Hello from user model\n");
	printf("First name : %s\n", userModel.firstName);
	return 0;
}