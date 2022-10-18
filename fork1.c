#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
  // int pid;
  // pid = fork();
  //
  // printf("ID del proceso: %d \n", pid);
  // if (pid== 0)
  //   printf("Proceso hijo \n");
  // else
    // printf("Proceso padre \n");

  printf("ID de proceso: %d\n", getpid());
  printf("ID de proceso padre: %d\n", getppid());
  printf("ID de proceso propietario: %d\n", getuid());

  return 0;
}
