#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
	char *pc = NULL;
	int i = 0;
	
	pc = (char*)malloc(100*sizeof(char));
	
	for (i=0;i<26;i++)
		pc[i] = 'a' + i;
	pc[i] = 0;
	printf("%s\n", pc);
	
	free (pc);
	
	system("PAUSE");
	return 0;
}
