#include <iostream>

namespace person{
    std::string name ="I'm person";
}
namespace machine{
    std::string name ="I'm machine";
}

int noRepetition(){
    using namespace person;
    using namespace std;
    cout<<"No repition invoked\n";
    cout<<"My Name is "<<name; // output - I'm person
    return 0;
}



int main(){
    std::cout << "Use of namespace";
    std::string name = "Main Invocation";
    std::cout << name <<"\n";
    std::cout<< person::name<<"\n";
    std::cout<<machine::name<<"\n";
    noRepetition();

    return 0;
}

