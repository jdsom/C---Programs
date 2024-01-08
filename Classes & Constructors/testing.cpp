#include <iostream>

class User{
    public:
        std::string first;
        std::string last;
        int age;

        User(std::string fn, std::string ln, int agee)
            : first{fn}, last{ln}, age{agee}
            {
            }
};

void getUserInfo(User u){
    std::cout << "User's name is " << u.first+" "+ u.last << " and he is " << u.age
        << " years old.\n";
}

int main(){
    User Jordan("Jordan", "Sommerville", 26);
    User Kwame("Kwame", "Yamoah", 27);
    
    getUserInfo(Kwame);
    getUserInfo(Jordan);
    return 0;
}