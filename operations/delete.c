void deleteUser() {
  int id;
  printf("ID -> ");
  scanf("%d", &id);
  getchar();
  int userIndex = findUserIndex(id);
  if(userIndex < 0) {
    printf("User not found!\n");
    return;
  }

  for (int i = userIndex;i < usersSize(); i++) {
    users[i] = users[i+1];
  }
  
  printf("User deleted!\n");
}
