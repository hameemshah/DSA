#include <iostream>
using namespace std;

//Simple Queue using Arrays
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

////Simple Queue using linked lists
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

//
int main() {

	return 0;
}