#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	FILE *secret = fopen("/home/dojo/Desktop/pass.txt", "rt");
	char buffer[32];
	fgets(buffer, sizeof(buffer), secret);
	printf(argv[1]);
	fclose(secret);
	return 0;
}
