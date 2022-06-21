// Linked lists are implemented in C language using a structure. You can refer to the snippet below.

// Understanding the snippet below:

// We construct a structure named Node. 
// Define two of its members, an integer data, which holds the node's data, and a structure pointer, next, which points to the address of the next structure node.aa

struct Node
{
    int data;
    struct Node *next; // Self referencing structure
};
