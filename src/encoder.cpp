#include <string>
#include <encoder.h>
using namespace std;
string encode(string a , int n){
    int len = a.length();
    
    // Լավ բան ես փորձել անել, բայց մինչև վերջ չես արել
    // Եթե ներմուծած թիվը 52֊ից մեծ լինի նորից նույն խնդրի առաջ կկանգնենք։
    // Ավելի ճիշտ կլիներ առանց պայմանի ստուգման n %= 26 անեիր, այդպիսով
    // ստանալով թիվը 26֊ի բաժանելիս մնացորդը, որն էլ հենց կլիներ այն թիվը որով պետք է տեղափոխել այբուբենը։
    if(n>=26){
        n-=26;
    }
    for (int i = 0; i < len; i++) {
        if( int(a[i])== 32){
            continue;
        } else if (int(a[i])<= 90 && int(a[i])>= 65){
            if(int(a[i])+n > 90) {
                a[i] = n + 26- int(a[i]) ; 
            }else {
                a[i] = int(a[i])+n;
            }
        }else if (int(a[i])>=97 && int(a[i])<=122){
            if(int(a[i])+n > 122) {
                a[i] = n + int(a[i]) -26; 
            }else {
                a[i] = int(a[i])+n;
            }
        }
        continue;
    }
    return a;
}
