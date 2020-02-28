
// ------------------------------ START ------------------------------

/*
 * @param head: pointer to the head node of the original linkedList
 * @returns the pointer to the newly cloned linkedList head node
 *  For your reference:
 *  class SinglyLinkedListNode
 *  {
 *      int data;
 *      SinglyLinkedListNode *next;
 *      SinglyLinkedListNode *randomPointer;
 *  }
 */
SinglyLinkedListNode *cloneLinkedList(SinglyLinkedListNode *list)
{
    auto iter = list;
    while(iter) {
        // Set up the new node
        auto temp = new SinglyLinkedListNode(iter->data);
        temp->next = iter->next;
        // Connect the current node to the new feku node.
        iter->next = temp;
        
        // Move to the next element in the original array.
        iter = temp->next;
    }
    auto new_head = list->next;
    iter = list;
    while(iter) {
        if(iter->randomPointer) {
          iter->next->randomPointer =  iter->randomPointer->next;
          //cout << iter->next->randomPointer->data << endl;
        }
        iter = iter->next->next;
    }
    auto new_list = list->next;
    while(new_list) {
        auto yolo = new_list->next;
        if(yolo == nullptr) {
            new_list->next = NULL;
            break;
        }
        new_list->next = new_list->next->next;
        new_list = yolo->next;
    }
    return new_head;
}


// ------------------------------ STOP -------------------------------

