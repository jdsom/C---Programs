#include <iostream>

class User{
    public:
        std::string First;
        std::string Last;
        int Age;
        int* Rates;
        int RatesCounter;

        User(std::string fn, std::string ln, int age) // User-Defined Constructor with parameters
            : First{fn}, Last{ln}, Age{age}
            {
                RatesCounter = 2;
                Rates = new int {RatesCounter};
                Rates[0] = 4;
                Rates[1] = 5;
            }

        // User(){};  Default Constructor

       /*User(){      Default Constructor with initialization
            first = "";
            last = "";
            age = 0;
        }; */

        ~User(){ // Destructor
            delete [] Rates;
            Rates = nullptr;
        }

        User(const User& original){ // User-Defined Copy Constructor
            First = original.First;
            Last = original.Last;
            Age = original.Age;
            RatesCounter = original.RatesCounter;

            Rates = new int[RatesCounter];
            for (int i = 0; i < RatesCounter; i++){
                Rates[i] = original.Rates[i];
            }
        }
};

void getUserInfo(User u){
    std::cout << "User's name is " << u.First+" "+ u.Last << " and he is " << u.Age
        << " years old.\n";
}

int main(){
    User Jordan("Jordan", "Sommerville", 26); //invoking user-defined constructor
    User Kwame("Kwame", "Yamoah", 27);

    User Jordan2(Jordan); // User defined copy constructor will be invoked
    
    getUserInfo(Kwame); // Calling function with object as argument to output initialized variables
    getUserInfo(Jordan);
    return 0;
    
}