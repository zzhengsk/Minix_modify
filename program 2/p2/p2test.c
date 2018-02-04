#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char** argv)
{
  int i;
  for(i=0; i<3;i++)
  {
     sleep(3);
     if(fork()== 0)
       break;
  }
  while(1);

  exit(0);

}


