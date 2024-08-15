#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char arr[100];
	cin.getline(arr,100);
	ofstream myfile;
	myfile.open("c://storage//emulated//0//Pictures//neww.txt");
	myfile<<arr;
	myfile.close();
	
	cout<<"File write operation performed successfully"<<endl;
	
	char arr1[100];
	ifstream krk("neww.txt");
	krk.getline(arr1,100);
	cout<<"Array Content : "<<arr1<<endl;
	krk.close();
	
		cout<<"File Read operation performed successfully"<<endl;
	
	return 0;
}
