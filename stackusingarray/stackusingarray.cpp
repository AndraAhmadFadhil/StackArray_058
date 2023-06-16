#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	StackArray() {
		top = -1;
	}
	void push() {
		int element;
		cout << "Enter an Element : ";
		cin >> element;
		if (top == 4) {
			cout << "Number of data exceed the Limit" << endl;
			return;
		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			return;
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n" << endl;
		cout << "1. Push \n" << endl;
		cout << "2. Pop \n" << endl;
		cout << "3. Display \n" << endl;
		cout << "4. Exit \n" << endl;
		cout << "Enter your choice :";
		cin >> ch;
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case '2': 
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.pop();
			break;
		
		case '3': 
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}
	}
}
