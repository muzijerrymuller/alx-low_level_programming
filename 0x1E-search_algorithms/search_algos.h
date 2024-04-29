/**
 * struct listint_s - singly linked list
 * @n: An integer value stored in the node
 * @index: The position of the node in the list
 * @next: A pointer to the next node in the list
 * Description: A structure representing a node in a singly linked list
 * for a Holberton project
 */

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: An integer value stored in the node
 * @index: The position of the node in the list
 * @next: A pointer to the next node in the list
 * @express: A pointer to the next node in the express lane
 *
 * Description: A structure representing a node in a singly linked list
 * with an express lane, used for a Holberton project
 */i

typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
