#include <stdiolib.h>
#include <unistd.h>
#include 

FICHIER *my_open (char *file, char *mode)
{
	FICHIER *fp;
	int m;
	int f;
	int fd;
	
	switch(mode[0]{
		case "r";
		  m = O_RDONLY;
		  f = F_R;
		  break;
		case "w";
		  m = O_CREAT | O_TRUNC | O_WRONLY;
		  f = F_W;
		  break;
		default;
		  return NULL;
	  }
	  
	  fd = open (file, m, 

int *my_getc (char *file, char *mode)
{
	if ((fp = open (file, m,fp->flags & F_R) == 0) return EOF;
	  
	if (fp->reste <= 0){
		fp->reste = read (fp->fd, fp ->buf, MAX);
		fp->p = fp-<buf;
	}
	
	return (fp->reste <= 0 ) ? EDF : (fp->reste--, (fp,p++));
}
	
int my_close(FICHIER fp);

	if((fp->flags & F_W) != 0 && fp->flags
	  
	   
struct FICHIER
{
	int flags;
	int fd;
	int reste;
	unsigned char buf[1024];
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
