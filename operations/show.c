void showUsers() {
  for(int i=0; i<usersSize(); i++) {
    struct User user = users[i];
    printf("ID: %d\nNama: %s\nUsername: %s\nPassword: %s\n\n", user.id, user.nama, user.username, user.password);
  }
}
