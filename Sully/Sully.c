#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv){(void)argc;char buffer[10];char cmd[100];
	int i=5;
	if(i==0){return 0;}if(strchr(argv[0],'_')){i--;}sprintf(buffer,"Sully_%d.c",i);FILE* file=fopen(buffer,"w");char *s="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint main(int argc, char **argv){(void)argc;char buffer[10];char cmd[100];%c	int i=%d;%c	if(i==0){return 0;}if(strchr(argv[0],'_')){i--;}sprintf(buffer,%cSully_%cd.c%c,i);FILE* file=fopen(buffer,%cw%c);char *s=%c%s%c;fprintf(file,s,10,10,10,10,i,10,34,37,34,34,34,34,s,34,34,37,37,37,34,10);fclose(file);sprintf(cmd, %cclang -Wall -Werror -Wextra -o Sully_%cd Sully_%cd.c && ./Sully_%cd%c,i,i,i);system(cmd);}%c";fprintf(file,s,10,10,10,10,i,10,34,37,34,34,34,34,s,34,34,37,37,37,34,10);fclose(file);sprintf(cmd, "clang -Wall -Werror -Wextra -o Sully_%d Sully_%d.c && ./Sully_%d",i,i,i);system(cmd);}
