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


/*  function to create a new entry for the database.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - pointer if success, NULL if failure.
 */
static dbNode* create_node(int key, void* val) {
  dbNode* newNode = (dbNode*)malloc(sizeof(dbNode));
  return newNode;
}


/*
 *  deletes all the nodes from the given tree.
 *  @head - head of the tree to be deleted.
 */
static void delete_tree(dbNode* head) {

}


/*
 *  inserts node into the given tree.
 *  @dbCxt - database context to operate on.
 *  @node - node to be inserted.
 */
static void insert_node(DB* dbCxt, dbNode* node) {
   
}


/*
 *  deletes node from the given tree.
 *  @dbCxt - database context to operate on.
 *  @key - key to be deleted.
 *  @return - 0 on success, -1 on failure to delete.
 */
static int delete_node(DB* dbCxt, int key) {
  return 0;
}


/*
 *  returns value corresponding to provided key from the given tree.
 *  @dbCxt - database context to operate on.
 *  @key - key to be searched for.
 *  @return - value pointer on success, NULL on failure to find key.
 */
static void* get_val(DB* dbCxt, int key) {
  return NULL;
}


/*
 *  initializes database.
 *  can only be called once for single database application.
 *  @return - pointer to database context if success, NULL if failure.
 */
DB* db_init() {
  DB* newDb = (DB*)malloc(sizeof(DB));
  printf("dbManager initialized!!\n");
  return newDb;
}


/*
 *  destroys database.
 *  @dataBase - context of the database to be operated on.
 *  @return - 0 if success, -1 if failure.
 */
int db_destroy(DB* dataBase) {
  if(!dataBase) return -1;
  delete_tree(dataBase->head);
  free(dataBase);
  return 0;
}

/*  function to insert a key value pair into the database.
 *  @dataBase - context of the database to be operated on.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - 0 if success, -1 if failure.
 */
int db_add_entry(DB* dbCxt, int key, void* val) {
  if(!dbCxt) {
    printf("No data base context provided\n");
    return -1;
  }
  dbNode* node = create_node(key, val);
  if(!node) {
    printf("Unable to allocate memory for new node\n");
    return -1;
  }
  insert_node(dbCxt, node);
  return 0;
}


/*  function to delete a key value pair in the database.
 *  @dataBase - context of the database to be operated on.
 *  @key - a unique integer value of entry to be deleted.
 *  @return - 0 if success, -1 if failure.
 */
int db_delete_entry(DB* dbCxt, int key) {
  if(!dbCxt) {
    printf("No databse context provided\n");
    return -1;
  }
  return delete_node(dbCxt, key);
}


/*  function to read data from the database.
 *  @key - a unique integer value of entry to be fetched.
 *  @val - pointer to the data stored.
 *  @return - pointer to data if success, nullptr if failure.
 */
void* db_get_entry(DB* dbCxt, int key) {
  if(!dbCxt) {
    printf("No databse context provided\n");
    return NULL;
  }
  void* val = get_val(dbCxt, key);
  if(!val) {
    printf("key does not exist");
  }
  return val;
}
