#include <iostream>
using namespace std;

int main()
// {
//     int age,marks;
//     cout<<"Enter your age:";
//     cin>>age;

//     cout<<"Enter your marks:";
//     cin>>marks;

//     if (age >=18 && marks >=40)
//     {
//         cout<<"Result using AND(&&): Eligible and Passed"<<endl;
//     }else 
//     {
//         cout<<"Result using AND(&&): Not eligible or Failed"<<endl;
//     }
// }

// And Operator 
// {
//     int age;
//     cout<<"Enter your age";
//     cin>>age;
//     if (age>=18 && age<=60){
//         cout<<"You are eligible for work"<<age;
//     }

// }

// OR Operator
// {
//     int marks = 35;
    
//     if (marks >= 40 || marks >= 33){
//         cout<<"Pass";
//     }
// }


// Not Operator
// {
//     int x = 5;
    
//     if (!(x>10)){
//     cout<<"X is not greter then 10";
//     }
// }

// Combination of logical operators



{
    string s1 = "Hello";
    string s2 = "World";
    string s3;


// Concatenation using +

    s3 = s1+" "+s2;
    cout<<"Concatenated string:"<<s3<<endl;

// Append using +=
s1 += s2;
cout <<"After +- Operator:" <<s1 <<endl;

// Comparison using --
if(s1 == s2){
    cout <<"String are equal"<<endl;
} else {
    cout<<"Strings are not equal"<<endl;
}

// Comparison Using <
if(s1<s2){
    cout<< s1 << "Comes before"<<s2<<endl;
}else{
    cout<<s1<<"Comes after "<<s2<<endl;
}

//Access character using[]
cout<<"First character of s2:"<<s2[0]<<endl;
return 0;
};

//Boolean Value

int main(){
    bool a = true;
    bool b = false;

    cout<< "Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;

    return 0;
}