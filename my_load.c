struct item *new_item(enum item_type type, union item_union *data) {
  struct item *new = malloc(sizeof(struct item));
  if (new == NULL) {
    // Gestion de l'erreur d'allocation de mémoire
    return NULL;
  }
  new->type = type;
  new->udata = *data;
  return new;
}

struct item_list *append_item_list(struct item_list *list, struct item *item) {
  if (list == NULL) {
    // Si la liste est vide, créer un nouvel élément
    struct item_list *new = malloc(sizeof(struct item_list));
    if (new == NULL) {
      // Gestion de l'erreur d'allocation de mémoire
      return NULL;
    }
    new->next = NULL;
    new->data = item;
    return new;
  } else {
    // Sinon, parcourir la liste jusqu'à la fin et ajouter l'élément
    struct item_list *curr = list;
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = malloc(sizeof(struct item_list));
    if (curr->next == NULL) {
      // Gestion de l'erreur d'allocation de mémoire
      return list;
    }
    curr->next->next = NULL;
    curr->next->data = item;
    return list;
  }
}


void print_item(struct item *item) {
  printf("ITEM TYPE: ");
  if (item->type == STAFF) {
    printf("STAFF\n");
    printf("name: %s\n", item->udata.staff.name);
    printf("lastname: %s\n", item->udata.staff.lastname);
    printf("birth: %04d-%02d-%02d\n", item->udata.staff.birth.tm_year + 1900, item->udata.staff.birth.tm_mon + 1, item->udata.staff.birth.tm_mday);
    printf("begin_job: %04d-%02d-%02d\n", item->udata.staff.begin_job.tm_year + 1900, item->udata.staff.begin_job.tm_mon + 1, item->udata.staff.begin_job.tm_mday);
  } else if (item->type == STUFF) {
    printf("STUFF\n");
    printf("id: %d\n", item->udata.stuff.id);
    printf("title: %s\n", item->udata.stuff.title);

