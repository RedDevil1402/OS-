#include<stdio.h>
#include<unistd.h>
int main(){
Pid_t child_pid=fork();
If (child_pid == -1){
Perror("fork failed);
Return 1;
}
else{
printf(" parent Process : PID= %d, child PID=%d\n", getpid() ),child_pid);}
  return 0;
}

