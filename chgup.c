#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	if(argc!=3){
		printf(1,"chgup : Specify your permission Ex : chgup filename userID\n");
		exit();
	}
	int fd = open(argv[1],O_RDONLY);
	struct stat st;
	if(fstat(fd,&st)<0){
		printf(1,"chgup : Can't stat %s\n", argv[1]);
		exit();
	}
	for (int i=0;argv[2][i]!='\0'; i++)
        if (argv[2][i]>57||argv[2][i]<48)
        {
            printf (1,"chgup : Entered input is not a number\n");
            exit();
        }
	chgup(argv[1],atoi(argv[2]));
	exit();
}