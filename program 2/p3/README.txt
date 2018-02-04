in p3, 
this one is similar to the p1
but this time, the problem is that
we can't direct accest m_ptr
so it's content has to be stored in
the kernel, then we can access that

in proc.h: make an array call sccnt to keep 
           track the number of syscall

in main.c: init the array sccnt

in proc.c: inside the mini_send(), after the
           copyMess(), if the proc is user proc
	   then use copyMess() again, but this 
	   time the destination is kernel

in dmp_kernel.c: modify the f7 function so it will
           out put the result

