#include<iostream>
using namespace std;

int queue[50];
int Max_Size = 50;
int front = -1;
int rear = -1;

void enqueue() {
    int val;
    if (rear == Max_Size - 1)
        cout << "Queue Overflow" << endl;
    else {

        front = 0;
        cout << " insert value in the queue : " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow ";
        return;
    }
    else {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;;
    }
}

void Display_Queue() {
    if (front == -1)
        cout << "Queue is empty" << endl;
    else {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
int main() {
    int op;
    cout << "1) insertion element to the queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;
    do {
        cout << "choose your operation : " << endl;
        cin >> op;
        switch (op)
        {
        case 1: enqueue();
            break;
        case 2: dequeue();
            break;
        case 3: Display_Queue();
            break;
        case 4: cout << "Exit" << endl;
            break;
        default: cout << "Invalid choice" << endl;
        }
    } while (op != 4);
    return 0;
}