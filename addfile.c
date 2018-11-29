#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
	int fd;
	if(argc != 2){
		printf(1,"Specify filename Ex.: addfile 'filename'\n");
		exit();
	}
	
	fd = open(argv[1] , O_CREATE);
	if(fd >= 0){
		printf(1,"addfile %s successed\n" , argv[1]);
	}else{
		printf(1,"addfile %s failed\n" , argv[1]);
		exit();
	}
	close(fd);
	exit();
}