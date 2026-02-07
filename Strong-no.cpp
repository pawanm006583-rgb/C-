#include <iostream>
using namespace std;

int main()
{
    int num, original,digit;
    int sum=0;
    cout<<"Enter a number";
    cin>>num;

    original = num;

    while(num>0){
        digit = num%10;

        int fact=1;
        for(int i=0; i<=digit;i++){
            fact= fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==original){
        cout<<"Strong Number";
    }else{
        cout<<"Not a Strong Number";
    }
    return 0;
}


// {
//     int num, original, digit;
//     cout<<"Enter a number: ";
//     cin>>num;

//     original = num;
//     while(num>0){
//         digit = digit%10;

//         int fact = 1;
//         for(int i=0;i<=digit;i++){
//             fact =fact*i;
//         }
//         sum =sum+fact;
//         num = num/10;
//     }
//     if(num==original){
//         cout<<"Strong no";
//     }else
//     cout<<"Not a Strong no";
// }

// {
//     int num,original,digit;
//     cout<<"Enter a number:";
//     cin>>num;

//     original=num;
//     while(num>0){
//         digit =digit%10;

//         int fact =1;
//         for(int i=1;i<=digit;i++){
//             fact =fact*i;
//         }
//         sum = sum+fact;
//         num = num/10;
//     }
// }

// {
//     int num,original,digit;
//     cout<<"Enter a no:";
//     cin>>num;

//     original =num;
//     while(num>0){
//         digit = digit%10;

//         int fact = 1;
//         for(int i=1;i<=digit;i++){
//             fact = fact*i;
//         }
//         sum = sum+fact;
//         num = num/10;
//     }
//     cout
// }

// {
//     int num,original,digit;
//     cout<<"Enter a no:";
//     cin>>num;

//     original = num;
//     while(num>0){
//         digit = digit%10;
        
//         int fact =1;
//         for(int i=1;i<=digit;i++){
//             fact = fact*i;
//         }
//         sum = sum+fact;
//         num = num/10;
//     }
//     if()

// }