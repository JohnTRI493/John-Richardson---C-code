#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//This program is able to open a text file and read its contents into a queue of characters. 
//It then dequeue's each character, to covert it into uppercase and then to store it in a second file.


class Queue
{
private:
	char* data;
	int capacity;
	int numElements;
	int frontIndex;
	int backIndex;
public:
	Queue(int capacity){
		this->capacity = capacity;
		data = new char[capacity];
		numElements = 0;
		frontIndex = 0;
		backIndex = capacity - 1;
	}
	Queue(){
		delete[]data;
	}
	void enqueue(char value){
		backIndex = (backIndex + 1) % capacity;
		data[backIndex] = value;
		numElements++;
	}
	void dequeue(){
		frontIndex = (frontIndex + 1) % capacity;
		numElements--;
	}
	char peek(){
		return data[frontIndex];
	}
	int size(){
		return numElements;
	}
};

int main()
{
	ifstream inFile;
	ofstream outFile;
	string inFileName = "in.txt";
	string outFileName = "out.txt";

	inFile.open(inFileName);
	if (!inFile)
	{
		cout << "Error opening " << inFileName << endl;
		return 1;
	}
	outFile.open(outFileName);
	if (!outFile)
	{
		cout << "Error opening " << outFileName << endl;
		return 1;
	}

	Queue Q(100);
	char ch;
	while (inFile.get(ch))
	{
		Q.enqueue(ch);
	}

	while (Q.size() > 0)
	{
		ch = Q.peek();
		ch = toupper(ch);
		outFile << ch;
		Q.dequeue();
	}
	inFile.close();
	outFile.close();
	return 0;
}