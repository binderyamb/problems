#include <iostream> // input output stream
using namespace std;// standart san
#include <string>

//int main(){
//	int a, b;
//	
//	//scanf()
//	cin >> a;
//	cin >> b;
//	
//	//printf
//	std::cout << (a * b);
//}

//class Rectangle{
//	
//	//member data
//	private:
//		int x;
//		int y;
//	
//	//member function
//	public:
//	void set_rect(int a, int b){
//		x = a;
//		y = b;	
//	}
//	
//	void rect_area(){
//		cout << x * y << endl;
//	}
//};
//
////private-programmiin uyed hndh bolomjgui, uuriinh n member function hndh blmjtoi
////public-bolomjtoi
////protected-udamshliin uyed l ashiglh blmjtoi
//
//int main(){
//	Rectangle rect_a , rect_b;
//	
//	rect_a.set_rect(4, 5);
//	rect_a.rect_area();
//	
//	rect_b.set_rect(5, 9);
//	rect_b.rect_area();
//}

//class Person{
//	private:
//		string registration_number;
//		string huis;
//		int nas;
//		string school;
//		string ovog;
//		string ner;
//		
//	public:
//		void set_full_name(string a, string b){
//			ovog = a;
//			ner = b;
//		}
//		
//		void full_name(){
//			cout << ovog << " " << ner<< endl;
//		}
//		
//		void information(int age, string n, string rd ){
//			nas = age;
//			ner = n;
//			registration_number = rd;
//		}
//		
//		void print(){
//			cout << "Name : " << ner << endl;
//			cout << "Age : " << nas << endl;
//			cout << "Registration_number : " << registration_number;
//		}
//};
//
//int main() {
//	Person per_a, p1;
//	
//	per_a.set_full_name("Mendsaikhan", "Binderya");
//	per_a.full_name();
//	
//	p1.information(19, "Binderya", "UP02321481");
//	p1.print();
//}

class Person{
	int *age;
	string name;
	string registration_number;
	
	public:
		Person(int *a, string n, string rd){
			age = a;
			name = n;
			registration_number = rd;
		}
		
		void print(){
			cout << "Name : " << name << endl;
			cout << "Age : " << *age << endl;
			cout << "Registration_number : " << registration_number;
    	}			
};

int main(){
	int age = 19;
	Person p1(&age, "Binderya", "UP02321481");
	p1.print();

//	int *p;
//	int x;
//	
//	scanf("%d", &x);
//	
//	p = &x;
//	
//	printf("%d", *p);
//
//	p =new int;
//	
//	delete p;
}