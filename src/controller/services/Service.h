/*
	Purpose from this file is to keep business logic inside a separate files.
1.  Gets data from views and work with it.
2.  Returns data in array or directly stores to model.
*/
#include <stdio.h>

int service(char argv[]){
	printf("Hello from Services.h\n");
	printf("%s", argv);
	return 0;
}
