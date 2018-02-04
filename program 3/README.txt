part 1:
termios.h: add the corresponding values for ^K and ^Y 
tty.h: add a variable called ckflag to indicate whether
		^K is pressed, if then set the flag so that when 
		the next char is input, it will enter the ^K function
		
		variable delcnt keep tracking how many chars have been 
		deleted
		
		varialbe delbuf store the deleted chars by ^K function 
		
tty.c: 3 functions have been add, 1 for ^Y, 2 for ^K 

part 2:
dmp.c, dmp_pm.c, proto.h: add function key F8 to display the 
		the hole list the idea is use getsysinfo send msg to pm

		
misc.c: add a new case for F8 is pressed, then getsysinfo is			 
		called. Since values 0-3 have been use, so choose value 4 

alloc.c: change to worst fit alg, also create a public fuction to 
		 display the hole list. 
		 basically when F8 is pressed, F8 function will call the 
		 function getsysinfo, then send the msg to pm, and pm 
		 handle this msg, which call the function in alloc.c 
		 to display the hole list
		 
For the worst fit alg, the hole with size 114 appears a lot, 
I am not sure why this happened, my guess is that when we 
start a new process, one system process (with size 114) 
start first to initilize our new process, then the new process 
put into the hole, after that, the system process exit and 
leave a hole with size 114 


