#include <string>

using namespace std;

class Grocery
{
private:
    int unique_id;
    string name;
    int price;
    int quantity;
public:
    void setUnique_id(int id);
    void setPrice(int p);
    void setQuantity(int q);
    void setName(string n);
    int getUnique_id();
    int getPrice();
    int getQuantity();
    string getName();
    void display1();
    Grocery(int id, int p, int q, string n);
    Grocery();
    ~Grocery();
};