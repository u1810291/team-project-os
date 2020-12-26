#include <stdio.h>
#include "src/model/Model.h"
#include "src/view/View.h"
#include "src/controller/Controller.h"
#include "src/model/user/User.h"
/*
 * run this program using the console
 * pauser or add your own getch,
 * system("pause") or input loop
 */

int main(int argc, char *argv[]) {
	// printf("%s", view());
	// printf("%d", model());
	// printf("%d", controller());
	// printf("Hello world\n");
	create("name","password", "1101");
	
	return 0;
}
