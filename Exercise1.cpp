#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

template <class T1, class T2>
class HeterogenousPair {
	private:
		T1 first_value;
		T2 second_value;

	public:
		HeterogenousPair(T1 first, T2 second)
		{
			first_value = first;
			second_value = second;
		}
		HeterogenousPair()
		{
			first_value = 0;
			second_value = 10;
		}
		void set_first_value(T1 n1){
			first_value = n1;
		}
		void set_second_value(T2 n2){
			second_value = n2;
		}
		T1 get_first_value(){
			return(first_value);
		}
		T2 get_second_value(){
			return(second_value);
		}

};

int main() {


	system("pause");
	return(0);
} 