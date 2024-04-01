#include "dbmanager.h"


/*  datatype of each node in the database.
 *  @key - a unique integer value.
 *  @val - pointer to the data.
 *  @left, @right - pointers to children.
 */
typedef struct dbNode {
  int key;
  void* val;
  struct dbNode* left;
  struct dbNode* right;
}dbNode;

/*
 *  context for a database.
 *  @head - holds head node of the database.
 */
struct DB {
  dbNode* head;
};

/*
 *  keeps track of head of database.
 */
dbNode* dbHead = NULL;

/*  function to create a new entry for the database.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - 0 if success, -1 if failure.
 */
dbNode* create_node(int key, void* val);
int main() {
  printf("Hello World!\n");
  return 0;
}
