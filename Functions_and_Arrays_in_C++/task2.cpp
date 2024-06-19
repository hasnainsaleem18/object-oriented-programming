#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int vowels(char option, string name);
int vowels_and_consonants(char option, string name);

int main()
{

int vowels1;
int con;
char option;

string name;
string h;

cout <<"Enter string: " << endl;
getline(cin, name);

cout << "string: " << name << endl << endl;

for (option; option != ('E');)
{

cout << "option 'A': Count the number of vowels in the string" << endl;
cout << "option 'B': Count both the vowels and consonants in the string" << endl;
cout << "option 'C': Display the most frequent character in the string." << endl;
cout << "option 'D': Concatenate another string with the existing string." << endl;
cout << "option 'E': Exit the program." << endl;
cout << "Enter your Option: " << endl;
cin >> option;

 if ((option == 'A')||(option =='a'))
  {
    vowels1 = vowels(option, name);
    cout << "total vowels are: " << vowels1 << endl << endl;
  }
 else if ((option == 'B')||(option =='b'))
   { 
     vowels1 = vowels(option, name);
     cout << "total vowels are: " << vowels1 << endl << endl;
     con = vowels_and_consonants(option, name);
     cout << "total consonants are: " << con << endl << endl;
   }
 else if ((option == 'D')||(option =='d'))
   {
     h = "CODE"; 
     string concatenate;
     concatenate = h + " " + name;
     //strcat(c, string);
     cout << "The word concatenate is: " << concatenate << endl << endl;
   }
 else if ((option == 'C')||(option =='c'))
   {
    
   int sum=0;
   char charr;
    for(int i=0; i<name.length();i++)
    {
      int count=0;
        for(int j=i+1;j<name.length();j++)
        {
            if(name[i]==name[j]){
                count++;
                if(sum<count)
                {
                    sum=count;
                    charr=name[i];
                }   
            }
        }
    }
   cout << "Most frequent character = " << charr << endl << endl;
   }
   }
   return 0;
}
int vowels(char option, string name)
{       
int count = 0;
for (int i = 0; i<name.length()-1; i++)
    {
      if ('a' == name[i])
        count++;
      else if ('e' == name[i])
        count++;
      else if ('i' == name[i])
        count++;
      else if ('o' == name[i])
        count++;
      else if ('u' == name[i])
        count++;
    }
    
     return count;
}    
int vowels_and_consonants(char option, string name)
{
int count = 0;
int count2 = 0;
for (int i = 0; i<name.length()-1; i++)
    {
      if ('a' == name[i])
        count++;
      else if ('e' == name[i])
        count++;
      else if ('i' == name[i])
        count++;
      else if ('o' == name[i])
        count++;
      else if ('u' == name[i])
        count++;
      else 
        count2++;
     }
     
     return count2;  
}      

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

