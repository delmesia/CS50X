
//KEY-VALUE PAIR --
typedef struct {
  char *key;
  char *value;
}ht_item;

//The hash table will store an array of pointers to items, and some details about size and how full it is:
typedef struct {
  int size;
  int count;
  ht_item **items;
}ht_hash_table;