#include <stdio.h>
#include <stdlib.h>


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
} dbNode;

/*
 *  keeps track of head of database.
 *  supports only one database.
 *  support for multiple databases can be extended by storing a list of heads.
 */
dbNode* dbHead = NULL;

/*
 *  initializes database.
 *  can only be called once for signle database application.
 *  @return - 0 if success, -1 if failure.
 */

int dbInit();

/*
 *  destroys database.
 *  @return - 0 if success, -1 if failure.
 */

int dbDestroy();

/*  function to create a new entry for the database.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - 0 if success, -1 if failure.
 */
dbNode* createNode(int key, void* val);

/*  function to insert a key value pair into the database.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - 0 if success, -1 if failure.
 */
int dbAdd(int key, void* val);

/*  function to delete a key value pair in the database.
 *  @key - a unique integer value of entry to be deleted.
 *  @return - 0 if success, -1 if failure.
 */
int dbDel(int key);

/*  function to read data from the database.
 *  @key - a unique integer value of entry to be fetched.
 *  @val - pointer to the data stored.
 *  @return - pointer to data if success, nullptr if failure.
 */
void* dbGet(int key);


