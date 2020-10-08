#include <stdio.h>
#include "components/LoginView.h"
#include "components/RegisterView.h"
#include "pages/Profile.h"

int view() {
    printf(login());
    printf(Register());
    printf(profile());
	printf("Hello from View.h\n");
	return 0;
}
