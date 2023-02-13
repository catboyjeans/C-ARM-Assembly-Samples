// #include <iostream>
// #include <stdarg.h>

// int sum(int a){
//     static int sum_so_far = 0; 
//     sum_so_far += a;
//     return sum_so_far; 
// }

// int main(){
//     int temp=0;
//     for(int i=0; i<11;i++ ){
//         temp+=1;
//         temp=sum(temp);
//         std::cout<<temp<<std::endl;
//     }
// }


// #include <cstdint>
// #include <iostream>

// int main(){
//     int8_t a;
//     uint8_t b;

//     a=100;
//     b=200;

//     std::cout<<"UINT16_MAX: "<<UINT16_MAX<<std::endl;
    
// }


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}