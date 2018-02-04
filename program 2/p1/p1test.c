#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
  int i, j;
  if( fork() != 0 )
  {
    if( fork() != 0 )
      while(1)
	open("file1", O_CREAT|O_TRUNC, 0644);
    else
      while(1)
	open("file2", O_CREAT|O_TRUNC, 0644);
  }
  else
    while(1)
      open("file3", O_CREAT|O_TRUNC, 0644);
  exit(0);
 }


