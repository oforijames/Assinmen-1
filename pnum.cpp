/* James 10953743 */

#include <iostream>
using namespace std;

int main(){
	
	cout << "Calculating average of prime numbers from 1 to a given number." << endl << endl;
	
	int b;
	cout << "Enter your value: ";
	cin >> b;

	double sum;
	int countprime;
	
	for(int o=2; o<=b; o++)
  {
		int n;
		for(n=2; n<o; n++){
			if(o%n == 0){
				break;
				}
		}
		if(n == o){
			sum = sum + o;
			countprime++;
				}
  }
	
	cout << "The number of prime numbers available is: " << countprime << endl << endl;
	cout << "The sum of the numbers is: " << sum << endl << endl;


	double avg;
	avg = sum/countprime;
	cout << "The mean is calculated as: " << avg << endl;

return 0;
}