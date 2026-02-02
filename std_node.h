#ifndef stdnode_h
#define stdnode_h

struct std_node
{
    int id;
    char name[30];
    struct std_node *next;
};

typedef struct std_node Node;
typedef struct std_node* NodePtr;

#endif /*node_h*/