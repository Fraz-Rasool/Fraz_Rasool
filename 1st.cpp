#include <iostream>
using namespace std;
class student{
	private:
		int rollid;
		string name;
	public:
		student(int r,string n):rollid(r),name(n){
			cout<<"Constructor\n";
		}
		void print(){
			cout<<rollid<<endl<<name;
		}
};
int main(){
	student s(231202,"Fraz Rasool");
	student s(231204,"Zubair Khalil");
	s.print();
	s.print();
	return 0;
}

