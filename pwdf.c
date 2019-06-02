#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>

int MAX = 500; 

void pwdf(char* location){
	char cwd[MAX];
	DIR* p;
	struct dirent* d;
	int ret = 1;

	if (getcwd(cwd, sizeof(cwd)) == NULL){
		perror("Failed to find the current working directory.");
		printf("Error number: %d\n", errno);
		exit(errno);
	}

	p = opendir(cwd);
	if (p == NULL){
		perror("Failed to opendir.");
		printf("Error number: %d\n", errno);
		exit(errno);
	}

	while((d=readdir(p))){
		if ((strcmp(d->d_name, ".") != 0) && (strcmp(d->d_name, "..") != 0)){
			if ((strcmp(location, ".") == 0) || (strcmp(location, d->d_name)) == 0){
				ret = 0;
				printf("\"%s/%s\"\n", cwd, d->d_name);
			}
		}
	}
	exit(ret);
}

void help(void){
	printf("USAGE: pwdf <file>\n");
	exit(1);
}

int main(int argc, char* argv[], char* arge[]){
	//if (argc != 2) help();
	if (argc == 2) pwdf(argv[1]);
	else if ( argc == 1 ) pwdf(".");
	else help();
}