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
//}*head = nullptr;
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
//inline bool isEmpty() {
//	return head == nullptr;
//}
//
//int count() {
//	int count = 0;
//	if (isEmpty())
//		return count;
//	node* temp = head;
//	while (temp != nullptr) {
//		count++;
//		temp = temp->next;
//	}
//	return count;
//}
//
//void print() {
//	if (isEmpty()) {
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
//void inserAtFront(int value) {
//	node* newnode = new node;
//	newnode->data = value;
//	if (isEmpty()) {
//		newnode->next = nullptr;
//		head = nullptr;
//		return;
//	}
//	newnode->next = head;
//	head = newnode;
//}
//
//void inserAtGivenNode(int value, int loc) {
//	if (isEmpty()) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	if (count() < loc) {
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
//void inserAtEnd(int value) {
//	node* newnode = new node;
//	newnode->data = value;
//	newnode->next = nullptr;
//	if (isEmpty()) {
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
//void deleteAtFront() {
//	if (isEmpty()) {
//		cout << "List is empty.";
//		return;
//	}
//	node* temp = head;
//	head = head->next;
//	delete temp;
//}
//
//void deleteAtEnd() {
//	if (isEmpty()) {
//		cout << "List is empty.";
//		return;
//	}
//	if (count() == 1) {
//		deleteAtFront();
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
//void deleteGivenNode(int loc) {
//	if (isEmpty()) {
//		cout << "List is empty." << endl;
//		return;
//	}
//	if (count() < loc) {
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
//int sum() {
//	int sum = 0;
//	if (isEmpty())
//		return sum;
//	node* temp = head;
//	while (temp != nullptr) {
//		sum += temp->data;
//		temp = temp->next;
//	}
//	return sum;
//}
//
//void reverse() {
//	if (isEmpty()) {
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
//void bubble() {
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
//int main() {
//	head = create();
//	print();
//	return 0;
//}

