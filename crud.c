#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.c"
#include "functions.c"
#include "operations/show.c"
#include "operations/create.c"
#include "operations/update.c"
#include "operations/delete.c"

int main() {
  for(;;) {
    #ifdef _WIN32
      system("cls");
    #elif defined(unix) || defined(__unix__) || defined(__unix)
      system("clear");
    #endif

    printf("---------- MENU ----------\n");
    printf("1. Show\n");
    printf("2. Create\n");
    printf("3. Update\n");
    printf("4. Delete\n");
    printf("0. Exit\n");
    int choice;
    printf("Choose menu -> ");
    scanf("%d", &choice);
    getchar();
    printf("\n");

    if(choice == 1) {
      showUsers();
    } else if(choice == 2) {
      createUser();
    } else if(choice == 3) {
      updateUser();
    } else if(choice == 4) {
      deleteUser();
    } else if(choice == 0){
      return 0;
    }
    printf("Hit key to continue...");
    getchar();
  }
  return 0;
}
