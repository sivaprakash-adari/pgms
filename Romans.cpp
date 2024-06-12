/******************************************************************************

Description : Program to print the roman number
*******************************************************************************/
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;
int main()
{
    int num, place, units_val;
    string roman_num = "MDCLXVI";
    unordered_map<int,char> romans = {{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'}, {500,'D'}, {1000,'M'}};

    stack<char> roman_output;
    cout << "Enter the number : ";
    
    cin >>  num ;
    
    int t_num = num;
    
    int units_place = 1;
    
    while (t_num !=0) {
        units_val =  t_num % 10;
        
        switch (units_val) 
        {
                case 1 : roman_output.push(romans[1*units_place]); 
                         break;
                case 2 : roman_output.push(romans[1*units_place]);
                         roman_output.push(romans[1*units_place]);
                         break;
                case 3 : roman_output.push(romans[1*units_place]);
                         roman_output.push(romans[1*units_place]);
                         roman_output.push(romans[1*units_place]);
                         break;
                case 4 : roman_output.push(romans[5*units_place]);
                         roman_output.push(romans[units_place*1]);
                         break;
                case 5 : roman_output.push(romans[5*units_place]);
                         break;
                case 6 : roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[5*units_place]);
                         break;
                case 7 : roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[5*units_place]);
                         break;         
                case 8 : roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[units_place*1]);
                         roman_output.push(romans[5*units_place]);
                         break; 
                case 9 : roman_output.push(romans[10*units_place]);
                         roman_output.push(romans[1*units_place]);
                         break; 
        }
        units_place *= 10;
        t_num = t_num/10;
    }
    
    
    
    cout << "Roman Number : " ;
    
    while(!roman_output.empty())
    {
        cout << roman_output.top() ;
        roman_output.pop();
    }
    
    cout << endl;

    return 0;
}
