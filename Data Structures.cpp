#include <iostream>
using namespace std;

/*Simple Queue using Arrays*/
//template <class T, int size>
//class Queue {
//    public:
//        int rear, front;
//        T queue[size];
//    public :
//        Queue(): rear(-1), front(-1) { }
//        void enqueue(T);
//        T dequeue();
//        void display() {
//            for (int i = front + 1; i <= rear; i++)
//                cout << queue[i] << " ";
//            cout << "\n";
//        }
//};
//template <class T, int size>
//void Queue<T, size>::enqueue(T value) {
//    if (rear == size - 1)
//    {
//        cout << "Queue is full\n" << endl;
//        return;
//    }
//    queue[++rear] = value;
//}
//template <class T, int size>
//T Queue<T, size>::dequeue() {
//    if (front == rear) {
//        cout << "Queur is empty.\n";
//        return -1;
//    }
//    return queue[++front];
//}
//int main()
//{
//    Queue<int, 5> q;
//    int key, value, res;
//    do
//    {
//        cout << "Enter 1.Enqueue 2.Dequeue 3.Display : ";
//        cin >> key;
//        cout << "Rear = " << q.rear << " Front = " << q.front << endl;
//        switch (key)
//        {
//        case 1: cout << "Enter element :"; cin >> value; q.enqueue(value); 
//            break;
//        case 2:  res = q.dequeue();
//            if(res != -1)
//            cout << q.dequeue() << " dequeued successfully." << endl;
//            break;
//        case 3: q.display();
//            break;
//        default:
//            exit(0);
//            break;
//        }
//    } while (1);
//    system("pause>0");
//}

/*Simple Queue using linked lists*/
//struct node {
//	int data;
//	node* next;
//}*front, *rear;
//void dequeue()
//{
//	if (front == nullptr) {
//		cout << "Queue is empty.\n";
//		return;
//	}
//	int prev = front->data;
//	node* temp = front;
//	front = front->next;
//	if (front == nullptr)
//		rear = nullptr; 
//	delete temp;
//	cout << prev << " dequeued successfully." << endl;
//	return;
//}
//void enqueue(int value)
//{
//	node* newnode = new node;
//	newnode->data = value;
//	newnode->next = nullptr;
//	if (rear == nullptr)
//		rear = front = newnode;
//	else {
//		rear->next = newnode;
//		rear = newnode;
//	}
//}
//void display()
//{
//	if (front == nullptr)
//	{
//		cout << "Queue is empty.\n";
//		return;
//	}
//	node* temp = front;
//	while (temp != nullptr) {
//		cout << temp->data << "	";
//		temp = temp->next;
//	}
//	cout << "\n";
//}
//void main() {
//	front = nullptr, rear = nullptr;
//	int key, value;
//	do
//	{
//		cout << "Enter 1.Enqueue 2.Dequeue 3.Display 4.Exit: ";
//		cin >> key;
//		switch (key)
//		{
//		case 1: cout << "Enter the value : ";
//			cin >> value;
//			enqueue(value); break;
//		case 2: dequeue(); break;
//		case 3: display(); break;
//		default:
//			exit(0);
//		}
//	} while (1);
//	system("pause>0");
//}

/*Linked List All Operations */
//struct node{
//	int data;
//	node* next;
//};
//
//node* create() {
//	node* newnode = new node;
//	cout << "Enter the data of the node : ";
//	int value; cin >> value;
//	if (value == -1)
//		return nullptr;
//	newnode->data = value;
//	cout << "Enter -1 if there is no next node: ";
//	newnode->next = create();
//	return newnode;
//}
//
//inline bool isEmpty(node* head) {
//	return head == nullptr;
//}
//
//int count(node* head) {
//	int count = 0;
//	if (isEmpty(head))
//		return count;
//	node* temp = head;
//	while (temp != nullptr) {
//		count++;
//		temp = temp->next;
//	}
//	return count;
//}
//
//void print(node* head) {
//	if (isEmpty(head)) {
//		cout << "List is empty.\n";
//		return;
//	}
//	node* temp = head;
//	while (temp != nullptr) {
//		cout << temp->data << "	";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//
//void inserAtFront(node* head, int value) {
//	node* newnode = new node;
//	newnode->data = value;
//	if (isEmpty(head)) {
//		newnode->next = nullptr;
//		head = nullptr;
//		return;
//	}
//	newnode->next = head;
//	head = newnode;
//}
//
//void inserAtGivenNode(node* head, int value, int loc) {
//	if (isEmpty(head)) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	if (count(head) < loc) {
//		cout << "Elements less than specified index." << endl;
//		return;
//	}
//	node* temp = head;
//	for (int i = 1; i < loc - 1; ++i) {
//		temp = temp->next;
//	}
//	node* newnode = new node;
//	newnode->data = value;
//	newnode->next = temp->next;
//	temp->next = newnode;
//}
//
//void inserAtEnd(node* head, int value) {
//	node* newnode = new node;
//	newnode->data = value;
//	newnode->next = nullptr;
//	if (isEmpty(head)) {
//		head = nullptr;
//		return;
//	}
//	node* temp = head;
//	while (temp->next != nullptr) {
//		temp = temp->next;
//	}
//	temp->next = newnode;
//}
//
//void deleteAtFront(node* head) {
//	if (isEmpty(head)) {
//		cout << "List is empty.";
//		return;
//	}
//	node* temp = head;
//	head = head->next;
//	delete temp;
//}
//
//void deleteAtEnd(node* head) {
//	if (isEmpty(head)) {
//		cout << "List is empty.";
//		return;
//	}
//	if (count(head) == 1) {
//		deleteAtFront(head);
//		return;
//	}
//	node* temp = head;
//	while (temp->next->next != nullptr) {
//		temp = temp->next;
//	}
//	delete temp->next;
//	temp->next = nullptr;
//}
//
//void deleteGivenNode(node* head, int loc) {
//	if (isEmpty(head)) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	if (count(head) < loc) {
//		cout << "Elements less than specified index." << endl;
//		return;
//	}
//	node* temp = head;
//	for (int i = 1; i < loc - 1; ++i) {
//		temp = temp->next;
//	}
//	node* ttemp = temp->next;
//	temp->next = temp->next->next;
//	delete ttemp;
//}
//
//int sum(node* head) {
//	int sum = 0;
//	if (isEmpty(head))
//		return sum;
//	node* temp = head;
//	while (temp != nullptr) {
//		sum += temp->data;
//		temp = temp->next;
//	}
//	return sum;
//}
//
//void reverse(node* head) {
//	if (isEmpty(head)) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	node* prev;
//	node* next;
//	node* current;
//	prev = nullptr;
//	current = head;
//	while (current != nullptr) {
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//	}
//	head = prev;
//}
//
//void swap(node*& x, node*& y) {
//	int temp = x->data;
//	x->data = y->data;
//	y->data = temp;
//}
//
//void bubble(node* head) {
//	if (head == nullptr || head->next == nullptr) {
//		// List is empty or has only one element, no need to sort
//		return;
//	}
//	bool swapped;
//	node* current;
//	node* lastSorted = nullptr;
//
//	do {
//		swapped = false;
//		current = head;
//
//		while (current->next != lastSorted) {
//			if (current->data > current->next->data) {
//				swap(current, current->next);
//				swapped = true;
//			}
//			current = current->next;
//		}
//		lastSorted = current;
//	} while (swapped);
//}
//
//node* insertAtNode(node* b, node* a) {
//	b->next = a->next;
//	a->next = b;
//	return b->next;
//}
//
//node* merge(node* first, node* second) {
//	if (first == nullptr) {
//		return second;
//	}
//	if (second == nullptr) {
//		return first;
//	}
//
//	node* mergedList = new node;  // Create a dummy node as the starting point of merged list
//	node* current = mergedList;
//
//	while (first != nullptr && second != nullptr) {
//		if (first->data <= second->data) {
//			current->next = first;
//			current = current->next;
//			first = first->next;
//		}
//		else {
//			current->next = second;
//			current = current->next;
//			second = second->next;
//		}
//	}
//
//	// Append any remaining nodes from either list
//	if (first != nullptr) {
//		current->next = first;
//	}
//
//	if (second != nullptr) {
//		current->next = second;
//	}
//
//	// Clean up dummy node and return the merged list
//	node* mergedHead = mergedList->next;
//	delete mergedList;
//	return mergedHead;
//}
//int main() {
//	node* first = nullptr;
//	node* second = nullptr;
//	cout << "Creating First List." << endl;
//	first = create();
//	cout << "Creating Second List." << endl;
//	second = create();
//	//bubble(head);
//	print(first);
//	first = merge(first, second);
//	print(first);
//	return 0;
//}

/*Doubly Lined List All Operations*/
struct node {
	int data;
	struct node* prev;
	struct node* next;
};

node* create() {
	int value;
	cout << "Enter the data (-1 if no node) :";
	cin >> value;
	if (value == -1)
		return nullptr;
	node* head = new node;
	head->data = value;
	cout << "Enter the next node: ";
	head->next = create();
	if (head->next != nullptr) {
		head->next->prev = head; // Set the previous node's prev pointer
	}
	head->prev = nullptr;
	return head;
}

inline bool isEmpty(node* head) {
	return head == nullptr;
}

int count(node* head) {
	int count = 0;
	if (isEmpty(head))
		return count;
	node* temp = head;
	while (temp != nullptr) {
		count++;
		temp = temp->next;
	}
	return count;
}

void print(node* temp) {
	while (temp->next != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	while (temp->prev != nullptr) {
		cout << temp->data << " ";
		temp = temp->prev;
	}
}

void inserAtFront(node* head, int value) {
	node* newnode = new node;
	newnode->data = value;
	if (isEmpty(head)) {
		newnode->next = nullptr;
		head = nullptr;
		return;
	}
	newnode->next = head;
	head = newnode;
}

void inserAtGivenNode(node* head, int value, int loc) {
	if (isEmpty(head)) {
		cout << "List is empty." << endl;
		return;
	}
	if (count(head) < loc) {
		cout << "Elements less than specified index." << endl;
		return;
	}
	node* temp = head;
	for (int i = 1; i < loc - 1; ++i) {
		temp = temp->next;
	}
	node* newnode = new node;
	newnode->data = value;
	newnode->next = temp->next;
	temp->next = newnode;
}

void inserAtEnd(node* head, int value) {
	node* newnode = new node;
	newnode->data = value;
	newnode->next = nullptr;
	if (isEmpty(head)) {
		head = nullptr;
		return;
	}
	node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newnode;
}

void deleteAtFront(node* head) {
	if (isEmpty(head)) {
		cout << "List is empty.";
		return;
	}
	node* temp = head;
	head = head->next;
	delete temp;
}

void deleteAtEnd(node* head) {
	if (isEmpty(head)) {
		cout << "List is empty.";
		return;
	}
	if (count(head) == 1) {
		deleteAtFront(head);
		return;
	}
	node* temp = head;
	while (temp->next->next != nullptr) {
		temp = temp->next;
	}
	delete temp->next;
	temp->next = nullptr;
}

void deleteGivenNode(node* head, int loc) {
	if (isEmpty(head)) {
		cout << "List is empty." << endl;
		return;
	}
	if (count(head) < loc) {
		cout << "Elements less than specified index." << endl;
		return;
	}
	node* temp = head;
	for (int i = 1; i < loc - 1; ++i) {
		temp = temp->next;
	}
	node* ttemp = temp->next;
	temp->next = temp->next->next;
	delete ttemp;
}

int main() {
	node* head = create();
	print(head);
}