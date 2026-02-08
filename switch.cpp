#include <iostream>
using namespace std;

// int main(){
//     int day;
//     cout <<"Enter day number (1-7):";
//     cin >> day;

//     switch (day){
//         case 1:
//         cout <<"Monday";
//         break;
//         case 2:
//         cout<<"Tuesday";
//         break;
//         case 3:
//         cout<<"Wednesday";
//         break;
//         case 4:
//         cout<<"Thureday";
//         break;
//         case 5:
//         cout<<"Friday";
//         break;
//         case 6:
//         cout<<"Saturday";
//         break;
//         case 7:
//         cout<<"Sunday";
//     } 
// }


int main(){
    char ch;
    cout<<"Enter the charecter";
    cin>>ch;

    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<"It is a vowel";
        break;
    default:
    cout<<"It is a consonant";
    }
}


