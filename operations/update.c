void updateUser() {
  int id;
  printf("ID -> ");
  scanf("%d", &id);
  getchar();
  int userIndex = findUserIndex(id);
  if(userIndex < 0) {
    printf("User not found!\n");
    return;
  }
  struct User selectedUser = users[userIndex];
  
  printf("Before: %s\nNama -> ", selectedUser.nama);
  fgets(selectedUser.nama, 255, stdin);
  selectedUser.nama[strcspn(selectedUser.nama, "\n")] = 0;
  
  printf("\nBefore: %s\nUsername -> ", selectedUser.username);
  fgets(selectedUser.username, 24, stdin);
  selectedUser.username[strcspn(selectedUser.username, "\n")] = 0;
  
  printf("\nBefore: %s\nPassword -> ", selectedUser.password);
  fgets(selectedUser.password, 255, stdin);
  selectedUser.password[strcspn(selectedUser.password, "\n")] = 0;
  
  users[userIndex] = selectedUser;
  printf("User updated!\n");
}
