bool HasCycle(Node * head) {
	Node *fast = head, *slow = head;
	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
			return true;
	}
	return false;
}