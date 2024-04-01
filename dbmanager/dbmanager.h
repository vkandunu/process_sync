#include <stdio.h>
#include <stdlib.h>


/*
 *  Context for a database.
 */
typedef struct DB DB;

/*
 *  initializes database.
 *  can only be called once for signle database application.
 *  @return - pointer to database context if success, NULL if failure.
 */

DB* db_init();

/*
 *  destroys database.
 *  @dataBase - context of the database to be operated on.
 *  @return - 0 if success, -1 if failure.
 */

int db_destroy(DB* dataBase);


/*  function to insert a key value pair into the database.
 *  @dataBase - context of the database to be operated on.
 *  @key - a unique integer value.
 *  @val - pointer to the data stored.
 *  @return - 0 if success, -1 if failure.
 */
int db_add_entry(DB* dataBase, int key, void* val);

/*  function to delete a key value pair in the database.
 *  @dataBase - context of the database to be operated on.
 *  @key - a unique integer value of entry to be deleted.
 *  @return - 0 if success, -1 if failure.
 */
int db_delete_entry(DB* dataBase, int key);

/*  function to read data from the database.
 *  @key - a unique integer value of entry to be fetched.
 *  @val - pointer to the data stored.
 *  @return - pointer to data if success, nullptr if failure.
 */
void* db_get_entry(DB* dataBase, int key);


