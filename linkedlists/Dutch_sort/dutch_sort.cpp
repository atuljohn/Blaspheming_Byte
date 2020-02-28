struct Cell {
int value;
Cell* next;
}
/* Pointers to the heads of the three lists. */
Cell* lists[3] = { NULL, NULL, NULL };
/* Distribute the cells across the lists. */
while (list != NULL) {
/* Cache a pointer to the next cell in the list, since we will be
* rewiring this linked list.
*/
Cell* next = list->next;
/* Prepend this cell to the list it belongs to. */
list->next = lists[list->value];
lists[list->value] = list;
/* Advance to the next cell in the list. */
list = next;
}