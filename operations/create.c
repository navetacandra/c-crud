void createUser() {
  struct User newUser;
  newUser.id = getLastId() + 1;
  
  printf("Nama -> ");
  fgets(newUser.nama, 255, stdin);
  newUser.nama[strcspn(newUser.nama, "\n")] = 0;
  
  printf("Username -> ");
  fgets(newUser.username, 24, stdin);
  newUser.username[strcspn(newUser.username, "\n")] = 0;
  
  printf("Password -> ");
  fgets(newUser.password, 255, stdin);
  newUser.password[strcspn(newUser.password, "\n")] = 0;
  
  users[usersSize()] = newUser;
  printf("User added!\n");
}
