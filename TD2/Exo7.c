#include <>
#include <uninstd.h>
#include

struct FICHIER
{
	int flags;
	int fd;
	int reste;
	unsigned char buf[1024]
	unsigned char *p;
};
typedef struct FICHIER FICHIER




int main (int argc, char *argv[])
{
	FICHIER *f1, *f2;
	int c;
	
	f1 = my_open (argv[1], "r");
	if(f1 == NULL)
	{
		perror ("peux pas ouvrir le premier fichier");
		exit(1);
	}
	
	f1 = my_open (argv[2], "w");
	if(f2 == NULL)
	{
		perror ("peux pas ouvrir le deuxieme fichier");
		exit(1);
	}
	while (( c = my_getc (f1)) != EDF) my_putc(c, f2);
	my_close (f1);
	my_close (f2);
	
	return(0);
}
