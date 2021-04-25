#include <unistd.h>
#include <stdlib.h> 
#include <sys/types.h> 
#include <sys/wait.h>
#include <stdio.h>  


char nm[15];

void goodJob(){
	printf("Job is done\n");
}

int main(void) {
	for (int i = 4996; i < 5000; i++) {
		pid_t pid = fork();
		
		if(pid == 0){			
			printf("What is your name?: ");
			scanf("%s", nm);
			printf("Your name is %s\n", nm);
		}
		
		else{
			wait(NULL);
			exit(0);
		}
	}
	goodJob();
	exit (0);
}