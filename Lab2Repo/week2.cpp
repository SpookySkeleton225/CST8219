
#include<iostream>

using namespace std;

namespace CST8219 {
	class Car {
		private:
			int numWheels;
			int numDoors;

		public:
			Car(int w, int d) {
				numWheels = w;
				numDoors = d;

				cout << "In constructor with 2 parameters" << endl;
			}
			Car(int w) : Car(w, 4) {
				cout << "In constructor with 1 parameters, wheels = " << w << endl;
			}
			Car() : Car(4) {
				cout << "In constructor with 0 parameters" << endl;
			}

			~Car() {
				cout << "In destructor" << endl;
			}
	};
}

int main(int argc, char **argv)
{
   CST8219::Car myVehicle(4);
   cout << "I made a Car!" << endl;
   return 0;
}