// 22P-9123 HASNAIN SALEEM BSE-2A ASSIGNMENT-01 QUESTION-01
// TO MAM FARIBA LAIQ 
// **** COMMENTS ADDED FOR BETTER UNDERSTANDING ****

#include <iostream>
#include <cstring>

using namespace std;

class Zodiac
{
    private:
        string name;
        string description;
    public:

        // default constructor and parametrized constructor

        Zodiac()
        {

        }
        
        Zodiac(string n, string d)
        {
            name = n;
            description = d;
        }

        /* this method will take the day and month of a person and
        find the zodiac sign against it, by assigning the name, and the relevant description to
        the variables. */

        void generateZodiacData(int day, int month)
        {
            if ((month >= 3 && month <= 4) && ((day >= 21 && day <= 31) || (day >= 1 && day <= 19)))
            {
                name = "Aries";
                description = " The first sign of the zodiac, Aries loves to be number one. Naturally this dynamic fire sign is no stranger to competition. Bold and ambitious, Aries dives headfirst into even the most challenging situations and they will make sure they always come out on top ";
            }
            else if ((month >= 4 && month <= 5) && ((day >= 20 && day <= 30) || (day <= 20 && day >= 1)))
            {
                name = "Taurus";
                description = "Taurus is the second sign of the zodiac, considered as governing that portion of the year from about April 20 to about May 20. Its representation as a bull is related to the Greek myth of Zeus, who assumed the form of a bull to abduct Europa.";
            }
            else if ((month >= 5 && month <= 6) && ((day >= 21 && day <= 31) || (day <= 20 && day >= 1)))
            {
                name = "Gemini";
                description = "The twins of the zodiac universe have a refreshing duality that makes them attract people like a magnet. Inquisitive yet adaptable, playful yet sensitive—that’s you, Gemini! Some might call you indecisive but this sense of curiosity for what the world has to offer next means that things will never get stale. ";
            }
            else if ((month >= 6 && month <= 7) && ((day >= 21 && day <= 30) || (day <= 22 && day >= 1)))
            {
                name = "Cancer";
                description = "With an emotional register that is dictated by passion, warmth and a nurturing spirit, a Cancer is as loyal as the day is long. The homebody of the zodiac wheel, your loved ones feel a sense of belonging when they are with you.";
            }
            else if ((month >= 7 && month <= 8) && ((day >= 23 && day <= 31) || (day <= 22 && day >= 1)))
            {
                name = "Leo";
                description = "Outgoing, cheerful and theatrical—nobody could ever accuse Leo of lack of confidence! You know what you want in life and you are unabashed in your quest to get it done. The world might think that you thrive on being the centre of attention but it is obvious that the spotlight loves you. ";
            }
            else if ((month >= 8 && month <= 9) && ((day >= 23 && day <= 31) || (day <= 22 && day >= 1)))
            {
                name = "Virgo";
                description = "If you want something done, call anybody. But if you want it done right, call a Virgo. Methodical, meticulous and detail-oriented to a fault, the world is in disarray and it is clearly only your diligence that can set it back in order. ";
            }
            else if ((month >= 9 && month <= 10) && ((day >= 23 && day <= 30) || (day <= 22 && day >= 1)))
            {
                name = "Libra";
                description = "Harmony and peace assume top billing on your zodiac sign’s calling card, and with good reason. Symbolised by the scales, you are known for your sense of fairness and justice that drives you to establish equilibrium in all aspects of your life. ";
            }
            else if ((month >= 10 && month <= 11) && ((day >= 23 && day <= 31) || (day <= 21 && day >= 1)))
            {
                name = "Scorpio";
                description = "Among the most misunderstood signs of the zodiac, what the world sees as aggressive and confrontational is actually your deep-rooted passion for standing up for the underdog. There are no laurels for fighting others’ battles for them, but your deeply passionate nature means that you won’t go down without a fight. ";
            }
            else if ((month >= 11 && month <= 12) && ((day >= 22 && day <= 30) || (day <= 21 && day >= 1)))
            {
                name = "Sagittarius";
                description = "As a fire sign, your quest for knowledge is destined to take you to great places. A wandering spirit, your nonconformist personality doesn’t put down roots easily—not when there’s a whole wide world to be discovered. ";
            }
            else if ((month >= 12 && month <= 1) && ((day >= 22 && day <= 31) || (day <= 19 && day >= 1)))
            {
                name = "Capricorn";
                description = "Methodical, practical and determined, there is no deterring a Capricorn once they have a goal in their sights. Not one for small talk and vain flattery, this quest for keeping things real means that your inner circle is small but loyal. ";
            }
            else if ((month >= 1 && month <= 2) && ((day >= 20 && day <= 31) || (day <= 18 && day >= 1)))
            {
                name = "Aquarius";
                description = "Don’t let the ‘aqua’ in its moniker fool you. This airy sign is not one to get tied down with arbitrary ideals. At the risk of earning a reputation as detached and aloof, this analytical and innovative sign would rather stand at the fringes of the crowd instead of following the herd. ";
            }
            else if ((month >= 2 && month <= 3) && ((day >= 19 && day <= 29) || (day <= 20 && day >= 1)))
            {
                name = "Pisces";
                description = "Yes, Pisces tends to see the world through rose-coloured glasses but your hopelessly romantic soul is grounded in a deep sense of intuition, sensitivity and empathy which helps you connect with people on a deeper level beyond what the world sees.  ";
            }
            else 
            cout << "ERROR" << endl;

        }
        
        /* this method will display the name of the zodiac,
        along with its personality, by simply printing the instance variables of that class. */
        
        void displayPersonality() const
        {
            cout << "Zodiac Sign: " << name << endl << endl;
            cout << "Personality: " << description << endl << endl;
        }
};

class DateOfBirth
{
    private:
        int day;
        int month;
        int year;
        Zodiac data;  // composition done here from zodiac class
    public:

        // setter and getters for members 

        int getDay() const
        {
            return day;
        }
        int getMonth() const
        {
            return month;
        }

        // in this method we are calling zodiac class method with zodiac object data member with getters 

        void setData()
        {
            int d = getDay();
            int m = getMonth();
            data.generateZodiacData(d, m);
        }

        // in this method we are calling zodiac class method with zodiac object data member which will display the traits and signs and also calling first setData method.
       
        void getData() 
        {
           setData();
           data.displayPersonality();
        }

        // default constructor and parametrized constructor
        
        DateOfBirth()
        {

        }
        DateOfBirth(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }

};

class Person
{
    private:
        string name;
        DateOfBirth date_of_birth; // composition done here from DateOfBirth class
    public:
       
       // default constructor and parametrized constructor 
       
        Person()
        {

        }
        Person(string n, int d, int m, int y): date_of_birth(d, m, y)
        {
            name = n;
        }

        // this method will call DateOfBirth class method with its object data member

        void displayZodiacInfo()
        {   
            cout << name << " " << "Your, Zodiac Sign with personality traits are: " << endl << endl; 
            date_of_birth.getData();
        }
};

int main()
{

    string name;
    int day;
    int month;
    int year;
            
    cout << "Enter your name: " << endl;
    getline(cin >> ws, name);

    cout << "Enter you Date Of Birth: " << endl;

    cout << "Day: ";
    cin >> day;

    cout << "Month: ";
    cin >> month;

    cout << "Year: ";
    cin >> year;

    // creating object of person class and initialising it 

    Person p(name, day, month, year);
    p.displayZodiacInfo();

}