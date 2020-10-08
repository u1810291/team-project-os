/*
	Purpose from this file is switching from one stage to another. 
    It would be better if we will use here multi processing.
1.  Gets data from views and work with it.
2.  Returns data in JSON or directly stores to model.
*/
#include <stdio.h>
#include "services/Service.h"
#include "api/API.h"

int controller() {
    printf(api());
    printf(service());
	printf("Hello from Controller.h\n");
	return 0;
}