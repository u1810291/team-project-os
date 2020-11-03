/*
    Purpose from this file is to give access to private functions
    inside subfolders of this directory.
1.  Use functions that gets input from controllers and pase them into 
    sub functions.
2.  Get data from child functions and return the output to interface.
3.  Mostly here we will do input validation and true object return.
*/


#include <stdio.h>
#include "components/LoginView.h"
#include "components/RegisterView.h"
#include "pages/Profile.h"

const char * view() {
    printf(login());
    printf(Register());
    printf(profile());
	printf("Hello from View.h\n");
	return 0;
}
