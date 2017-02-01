#include <uvsqgraphics.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main () {
	int f1 = open("toto.txt",O_RDONLY);
	int f2 = open("titi.txt", O_WRONLY);
	int c;
	while(read(f1,&c,1)){
		 write(f2,&c,sizeof(char));
	 }
	close(f1);
	close(f2);
}
