// 22P-9123 HASNAIN SALEEM BSE-2A ASSIGNMENT-01 QUESTION-02
// TO MAM FARIBA LAIQ 
// **** COMMENTS ADDED FOR BETTER UNDERSTANDING ****

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class UAV
{
    public:

        // virtual method with message

        virtual void takeOff()   
        {
            cout << "taking off" << endl;
        }
        virtual void land() 
        {
            cout << "landing" << endl;
        }
};

class SurveillanceUAV: virtual public UAV   // solving diamond problem through virtual key word
{
    private:
        string Name;
        float weight;
        float maxAltitude;
        float zoomLevel;
        float recordingCapacity;
        bool isNightVision;
    public:
        void captureImage() const
        {
            cout << "image captured" << endl;
        }
        void recordVideo() const
        {
            cout << "video recorded" << endl;
        }

        // constructors parameterized and default 

        SurveillanceUAV()
        {

        }
        SurveillanceUAV(string n, float w, float mA, float zL, float rC, bool nV)
        {
            Name = n;
            weight = w;
            maxAltitude = mA;
            zoomLevel = zL;
            recordingCapacity = rC;
            isNightVision = nV;
        }

        // showing output of uav

        void display() const
        {
            cout << endl << "I am a Surveillance UAV" << endl;
            cout << "My name is: " << Name << endl;
            cout << fixed << setprecision(3) << "My weight is: " << weight << " kg" << endl;
            cout << fixed << setprecision(2) << "My altitude is: " << maxAltitude << " ft"<<endl;  
            cout << fixed<<setprecision(2) << "My zoom level is: " << zoomLevel << " x"<<endl;
            cout << fixed << setprecision(2) << "My recording capacity is: " << recordingCapacity << " GB"<<endl;

            if (isNightVision == true)
            cout << "i have a night vision" << endl;
            else 
            cout << "i dont have a night vision" << endl;
        }
        float getZoomLevel() const
        {
            return zoomLevel;
        }
        float getRecordCapacity() const
        {
            return recordingCapacity;
        }
        bool getVision() const
        {
            return isNightVision;
        }
};

class CargoDeliveryUAV: virtual public UAV // solving diamond problem through virtual key word
{
    private:
        string Name;
        float weight;
        float maxAltitude;
        float cargoArea;
    public:
        void deliverCargo() const
        {
            cout << "delivering cargo" << endl;
        }

        // constructors parameterized and default 

        CargoDeliveryUAV()
        {

        }
        CargoDeliveryUAV(string n, float w, float mA, float cA)
        {
            Name = n;
            weight = w;
            maxAltitude = mA;
            cargoArea = cA;
        }

        // showing output of uav

        void display() const
        {
            cout << endl << "I am a Cargo Delivery UAV" << endl;
            cout << "My name is: " << Name << endl;
            cout << fixed << setprecision(3) << "My weight is: " << weight << " kg" << endl;
            cout << fixed << setprecision(2) << "My altitude is: " << maxAltitude << " ft"<<endl;  
            cout << fixed << setprecision(2) << "My cargo area is: " << cargoArea <<endl;
        }
        float getCargoArea() const
        {
            return cargoArea;
        }
};

class MultiPurposeUAV: public SurveillanceUAV, public  CargoDeliveryUAV  // solving diamond problem
{
    private:
        string Name;
        float weight;
        float maxAltitude;
        float solarPanelEfficiency;
    public:

        // calling methods in this method of parent class

        void deliverCargoWithSurveillance()
        {
            cout << endl << endl << "I am going to deliver a cargo along with  Surveillance" << endl;
            takeOff();
            recordVideo();
            land();
            deliverCargo();
        }

        // constructors parameterized and default 

        MultiPurposeUAV()
        {

        }
        MultiPurposeUAV(string n, float w, float mA, float sP, float zL,float rC, bool nV, float cA): SurveillanceUAV(n, w, mA, zL, rC, nV), CargoDeliveryUAV(n, w, mA, cA)
        {
            Name = n;
            weight = w;
            maxAltitude = mA;
            solarPanelEfficiency = sP;
        }

        // showing output of uav

        void display() const
        {
            cout << endl << "I am a Multi Purpose UAV" << endl;
            cout << "My name is: " << Name << endl;
            cout << fixed << setprecision(3) << "My weight is: " << weight << " kg" << endl;
            cout << fixed << setprecision(2) << "My altitude is: " << maxAltitude << " ft"<<endl;  
            cout << fixed<<setprecision(2) << "My zoom level is: " << getZoomLevel() << " x"<<endl;
            cout << fixed << setprecision(2) << "My recording capacity is: " << getRecordCapacity() << " GB"<<endl;
            if (getVision() == true)
            cout << "i have a night vision" << endl;
            else 
            cout << "i dont have a night vision" << endl;
            cout << fixed << setprecision(2) << "My cargo area is: " << getCargoArea() <<endl;
            cout << fixed << setprecision(3) << "My solar panel efficiency is: " << solarPanelEfficiency << endl;
        }
};

int main()
{

    // taking inputs from user and then making objects of 3 child classes and then calling their respective methods

    string name1;
    float weight1;
    float altitude1;
    float zoom1;
    float capacity1;
    int vision1;

    string name2;
    float weight2;
    float altitude2;
    float cargoArea1;

    string name3;
    float weight3;
    float altitude3;
    float solar;
    float cargoArea2;
    float zoom2;
    float capacity2;
    int vision2;

    cout << "surveillance" << endl;
    cout << "Enter name: " << endl;
    getline(cin >> ws,name1);
    cout << "Enter weight: " << endl;
    cin >> weight1;
    cout << "Enter altitude: " << endl;
    cin >> altitude1;
    cout << "Enter zoom level: " << endl;
    cin >> zoom1;
    cout << "Enter recording capacity: " << endl;
    cin >> capacity1;
    cout << "Enter 1 for TRUE or 0 for FALSE for surveillance uav night vision" << endl;
    cin >> vision1;

    SurveillanceUAV S(name1, weight1, altitude1, zoom1, capacity1, vision1);

    cout << "cargo" << endl;
    cout << "Enter name: " << endl;
    getline(cin >> ws, name2);
    cout << "Enter weight: " << endl;
    cin >> weight2;
    cout << "Enter altitude: " << endl;
    cin >> altitude2;
    cout << "Enter cargo area: " << endl;
    cin >> cargoArea1;

    CargoDeliveryUAV C(name2, weight2, altitude2, cargoArea1);
    
    cout << "multi purpose" << endl;
    cout << "Enter name: " << endl;   
    getline(cin >> ws, name3);    
    cout << "Enter weight: " << endl;
    cin >> weight3;
    cout << "Enter altitude: " << endl;
    cin >> altitude3;
    cout << "Enter zoom level: " << endl;
    cin >> zoom2;
    cout << "Enter recording capacity: " << endl;
    cin >> capacity2;
    cout << "Enter cargo area: " << endl;
    cin >> cargoArea2;
    cout << "Enter solar panel efficiency" << endl;
    cin >> solar;
    cout << "Enter 1 for TRUE or 0 for FALSE for surveillance uav night vision" << endl;
    cin >> vision2;

    MultiPurposeUAV M(name3, weight3, altitude3, solar, zoom2, capacity2, vision2, cargoArea2);

    S.display();
    S.recordVideo();

    C.display();
    C.deliverCargo();

    M.display();

    M.deliverCargoWithSurveillance();

}