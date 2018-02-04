In proc.h: I create a array called msgcnt to keep track
           the number of msg send

In proc.c: my array increment when after the msg send
           is in mini_send(), after the copyMess funciton

In main.c: init the array msgcnt

In dmp.c & proto.h:  add a new function key (f8) into the system


In dmp_kernel.c: the function of f8 is at the bottom
                 the function key only work when the process is 
		 call  a.out

