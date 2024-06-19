#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight;
    float height;
    float BMI;
    
    cout << "ENTER WEIGHT IN KG's: " <<endl;
    cin >> weight;
    
    cout << "ENTER HEIGHT IN METERS: "<<endl;
    cin >> height;
    
    BMI = weight/(height*height);
    
    cout << "BMI IS : " << setprecision(3)<< BMI <<endl;
    
    return 0;
}