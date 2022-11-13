#include <iostream>
#include <encoder.h>
#include <decoder.h>
#include <test.h>
using namespace std;
int main(){
    string str ;
    int n;
    while(true){
        // Լավ կլիներ, որ սկզբում տպվեր ինչ է սպասում ծրագիրը, նոր սպասեր ներմուծման
        // Օրինակ՝ std::cout << "Please input the text to encode: " << std::endl;
        cin>>str;
        if(str=="break"){
            break;
        }
        cin>>n;
        cout<<unit_test(str,n)<<endl;
    }
    ;

    return 0;
}
