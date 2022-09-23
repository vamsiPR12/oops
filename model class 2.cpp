#include <iostream>
using namespace std;
class car {
   public:
    void info() {
        cout << " car " << endl;
    }
};                                              
class steering: public car {
   public:
    void handle() {
        cout << " steering to handle." << endl;
    }
};
class brake : public car{
   public:
    void stop() {
        cout << " brake to stop." << endl;
    }
};
class tyre : public car{
	public:
		void move() {
			cout<< " tyre to move." << endl;
		}
};

int main() {
    steering steering1;
    cout << "steering Class:" << endl;
    steering1.info();  
    steering1.handle();

    brake brake1;
    cout << "\nbrake Class:" << endl;
    brake1.info();  
    brake1.stop();
    
    tyre tyre1;
    cout << "\ntyre Class:" << endl;
    tyre1.info();
    tyre1.move();
    

    return 0;
}
