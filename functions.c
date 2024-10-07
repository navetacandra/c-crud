int usersSize() {
  int i = 0;
  while (users[i].id) {
    i++;
  }
  return i;
}

int getLastId() {
  int lastIndex = usersSize()-1;
  if(users[lastIndex].id && lastIndex >= 0) {
    return users[lastIndex].id;
  }
  return 0;
}

int findUserIndex(int id) {
  int i = 0;
  for(; i<usersSize(); i++) {
    if(users[i].id == id) {
      return i;
    }
  }
  return -1;
}
