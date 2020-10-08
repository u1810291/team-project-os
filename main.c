#include <stdio.h>
#include <stdlib.h>
#include "model/Model.h"
#include "view/View.h"
#include "controller/Controller.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf(view());
	printf(model());
	printf(controller());
	printf("Hello world\n");
	return 0;
}
