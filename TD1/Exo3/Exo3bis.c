#include <uvsqgraphics.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void recopie (){
	int c,d;
	int f1 = open("toto", O_RDONLY);
	int f2 = open("titi", O_RDONLY|O_CREAT,0666);
	do{
		d = read(f1,&c,1);
		write(f2,&c,1);
	}
	while (d !=0);
	close(f1);
	close(f2);
}

int main () {
recopie();
}
