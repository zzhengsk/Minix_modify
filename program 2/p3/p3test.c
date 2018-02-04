#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
  int i, j;
  fork();
  fork();
  while(1)
  {
    i = getpid();
    j = open("f1", O_CREAT|O_TRUNC, 0644);
    close(j);

 }

  exit(0);

}

