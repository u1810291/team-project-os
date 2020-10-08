#include <stdio.h>
#include "services/Service.h"
#include "api/API.h"

int controller() {
    printf(api());
    printf(service());
	printf("Hello from Controller.h\n");
	return 0;
}