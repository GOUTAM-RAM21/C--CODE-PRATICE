#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

long int code;

class persdetails {
    int trvlcode;
    int age[20];
    string name[20];
    string add;
    string phnum;
    char sex[20];
    string passnum[20]; // Increased size to match with name and other arrays
    string familyname;
    int num;
    int numppl;

public:
    void p_input(int);
    void p_output();
    void givefam();
    int givecode();
    int give();
} pob;

int persdetails::give() {
    return num;
}

void persdetails::givefam() {
    cout << familyname;
}

int persdetails::givecode() {
    return trvlcode;
}

void persdetails::p_input(int cd) {
    trvlcode = cd;
    num = 0;
    cout << "\n\n\t:::::::::::::::::::::: PERSONAL DETAILS ::::::::::::::::::::::\n";
    cout << "\t\t\t\t~~~~~~~~~~~~~~\n";
    cout << "\n\t\t* Please fill in the details:\n\n\n\t\t\t1.Family Name: ";
    cin.ignore(); // To ignore any leftover newline character
    getline(cin, familyname);
    cout << "\n\t\t\t2.Address: ";
    getline(cin, add);
    cout << "\n\t\t\t3.Contact Number(10 Digit Mobile Number): ";
    getline(cin, phnum);
    cout << "\n\n\n\t\tEnter The No of People Travelling: ";
    cin >> numppl;
    cin.ignore();

    if (numppl > 0) {
        cout << "\n\t\tPlease Enter The Details of each Member/Members: " << endl;
        for (int i = 0; i < numppl; i++) {
            cout << endl << "\n\t\tMember " << i + 1;
            cout << "\n\t\t~~~~~~~~";
            cout << "\n\n\t\tFirst Name: ";
            getline(cin, name[i]);
            cout << "\n\t\tAge: ";
            cin >> age[i];
            cin.ignore();
            cout << "\n\t\tSex (M/F): ";
            cin >> sex[i];
            cin.ignore();
            cout << "\n\t\tPassport Number: ";
            getline(cin, passnum[i]);
            if (age[i] > 5) {
                num++;
            }
        }
    }
}

void persdetails::p_output() {
    cout << "\n\n\t ********************  PERSONAL DETAILS  ******************** " << endl;
    cout << "\n\n\t\t\tFamily Name:\t " << familyname << endl;
    cout << "\t\t\tAddress:\t " << add << endl;
    cout << "\t\t\tPhone Number:\t " << phnum << endl;
    cout << "\n\n\tName\t\tAge\t\tSex\t\tPassport Number\n" << endl;
    for (int i = 0; i < numppl; i++) {
        cout << "\t" << name[i] << "\t\t" << age[i] << "\t\t" << sex[i] << "\t\t" << passnum[i] << endl;
    }
}

class travdetails {
    int trvtcode;
    int day;
    int month;
    int year;
    int num1;
    int bdg_pt;
    int go_pt;
    int deck;
    int cabin;
    int pool;
    int gym;
    int sports;
    int salon;
    int spa;
    int theatre;

public:
    void initial();
    void t_input(int);
    void t_output();
    void compute();
    int gtcode();
    void accept(int);
} tob;

void travdetails::initial() {
    pool = gym = theatre = sports = salon = 0;
}

void travdetails::accept(int c) {
    num1 = c;
}

int travdetails::gtcode() {
    return trvtcode;
}

void travdetails::t_input(int cd) {
    initial();
    trvtcode = cd;
    int i = 1, opt;

    do {
        cout << endl;
        cout << "\n\n\t\t\t\t_||__TRAVEL DETAILS__";
        cout << "\n\t\t\t\t\\___________________/";
        cout << "\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n\n\t\tPlease enter the following details for your journey:";
        cout << "\n\n\t\t*Note:Options marked with '*' are compulsory.\n\t\t\tPlease do select them.";
        cout << "\n\n\n\t\t\t\t*1.Boarding Point\n\t\t\t\t*2.Destination\n\t\t\t\t*3.Date of Departure\n\t\t\t\t*4.Deck\n\t\t\t\t 5.Cabin\n\t\t\t\t 6.Swimming Pool\n\t\t\t\t 7.Gymnasium\n\t\t\t\t 8.Sports\n\t\t\t\t 9.Salon\n\t\t\t\t 10.Spa\n\t\t\t\t 11.Theatre\n\t\t\t\t 12.Back\n\n\t\t\t\t  ";
        cin >> opt;
        cin.ignore();

        switch (opt) {
        case 1:
            cout << "\n\n\n\t\t\tSelect Boarding point:\n\n\t\t\t1.Mumbai\n\n\t\t\t2.Cochin\n\n\t\t\t3.Chennai\n\n\t\t\t  ";
            cin >> bdg_pt;
            cin.ignore();
            break;
        case 2:
            cout << "\n\n\t\t\t****** Select Destination ******\n\n\n";
            cout << "\t 1.New York\t\t6.Dubai\t\t\t11.Antananariv";
            cout << "\n\n\t 2.Miami\t\t7.Lisbon\t\t12.Cairo\n\n";
            cout << "\t 3.Rio De Janeiro\t8.London\t\t13.Perth";
            cout << "\n\n\t 4.Colombo\t\t9.Copenhagen\t\t14.Sydney";
            cout << "\n\n\t 5.Hong Kong\t\t10.Cape Town\t\t15.Wellington\n\n\n\n\n\t\t\t\t   ";
            cin >> go_pt;
            cin.ignore();
            break;
        case 3:
            cout << "\n\n\t               Date of Departure                 ";
            cout << "\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
            cout << "\n\n\t\tEnter your preferred date of departure: ";
            cin >> day;
            cout << "/";
            cin >> month;
            cout << "/";
            cin >> year;
            cin.ignore();
            break;
        case 4:
            cout << "\n\n\t\t\tEnter The Choice OF Deck\n\n\t\t\t1.Top Deck\n\n\t\t\t2.Middle Decks\n\n\t\t\t3.Bottom Deck\n\n\t\t\t  ";
            cin >> deck;
            cin.ignore();
            break;
        case 5:
            cout << "\n\n\t\t\tEnter The Choice Of Cabin\n\n\t\t\t1.AC\n\n\t\t\t2.Non AC\n\n\t\t\t  ";
            cin >> cabin;
            cin.ignore();
            break;
        case 6:
            cout << "\n\n\t\tDo You Like To Avail The Facility Of A Swimming Pool\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> pool;
            pool--;
            cin.ignore();
            break;
        case 7:
            cout << "\n\n\t\tDo You Like To Avail The Facility Of A Gymnasium\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> gym;
            gym--;
            cin.ignore();
            break;
        case 8:
            cout << "\n\n\t\tDo You Like To Avail The Sports Facilities Offered\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> sports;
            sports--;
            cin.ignore();
            break;
        case 9:
            cout << "\n\n\t\tDo You Like To Avail The Facility Of Beauty Salon\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> salon;
            salon--;
            cin.ignore();
            break;
        case 10:
            cout << "\n\n\tDo You Like To Avail The Facility Of Spa/Massage Parlour\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> spa;
            spa--;
            cin.ignore();
            break;
        case 11:
            cout << "\n\n\t\tDo You Like To Avail The Facility Of Theatre\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t  ";
            cin >> theatre;
            theatre--;
            cin.ignore();
            break;
        }
    } while (opt != 12);
}

void travdetails::t_output() {
    cout << "\n\n\t *********************  TRAVEL DETAILS  ********************* " << endl;
    cout << "\n\n\n\tDate Of Departure:\t" << day << "/" << month << "/" << year << endl;
    cout << "\n\n\tBoarding Point:\t";
    switch (bdg_pt) {
    case 1: cout << "Mumbai"; break;
    case 2: cout << "Cochin"; break;
    case 3: cout << "Chennai"; break;
    }
    cout << "\n\n\tDestination:\t";
    switch (go_pt) {
    case 1: cout << "New York"; break;
    case 2: cout << "Miami"; break;
    case 3: cout << "Rio De Janeiro"; break;
    case 4: cout << "Colombo"; break;
    case 5: cout << "Hong Kong"; break;
    case 6: cout << "Dubai"; break;
    case 7: cout << "Lisbon"; break;
    case 8: cout << "London"; break;
    case 9: cout << "Copenhagen"; break;
    case 10: cout << "Cape Town"; break;
    case 11: cout << "Antananariv"; break;
    case 12: cout << "Cairo"; break;
    case 13: cout << "Perth"; break;
    case 14: cout << "Sydney"; break;
    case 15: cout << "Wellington"; break;
    }
    cout << "\n\n\tDeck:\t";
    switch (deck) {
    case 1: cout << "Top Deck"; break;
    case 2: cout << "Middle Decks"; break;
    case 3: cout << "Bottom Deck"; break;
    }
    cout << "\n\n\tCabin:\t";
    switch (cabin) {
    case 1: cout << "AC"; break;
    case 2: cout << "Non AC"; break;
    }
    if (pool == 1)
        cout << "\n\n\t\tSwimming Pool Facility.";
    if (gym == 1)
        cout << "\n\n\t\tGymnasium Facility.";
    if (sports == 1)
        cout << "\n\n\t\tSports Facility.";
    if (salon == 1)
        cout << "\n\n\t\tBeauty Salon Facility.";
    if (spa == 1)
        cout << "\n\n\t\tSpa/Massage Parlour Facility.";
    if (theatre == 1)
        cout << "\n\n\t\tTheatre Facility.";
}

class finance {
    int trvcod;
    int price;
    int nos;
    int sum;
    int pool;
    int gym;
    int sports;
    int salon;
    int spa;
    int theatre;

public:
    void finput(int);
    void foutput();
    int givetcode();
} fob;

int finance::givetcode() {
    return trvcod;
}

void finance::finput(int cd) {
    trvcod = cd;
    ifstream fin("prices.txt");

    if (!fin) {
        cerr << "\n\n\t\tFile Not Found. Aborting!";
        exit(1);
    }

    while (fin >> price >> nos >> pool >> gym >> sports >> salon >> spa >> theatre) {
        if (price == trvcod) {
            break;
        }
    }

    fin.close();
}

void finance::foutput() {
    sum = (nos * 5000) + (pool * 2000) + (gym * 1500) + (sports * 2500) + (salon * 1000) + (spa * 3000) + (theatre * 1000);
    cout << "\n\n\t ********************  FINANCE DETAILS  ******************** " << endl;
    cout << "\n\n\tCode:\t\t\t" << trvcod << endl;
    cout << "\tTotal:\t\t\t" << sum << endl;
}

void list() {
    fstream file;
    file.open("records.dat", ios::in | ios::binary);

    if (!file) {
        cout << "\n\n\t\t\tFile Not Found. Aborting!";
        return;
    }

    while (file.read(reinterpret_cast<char*>(&pob), sizeof(pob))) {
        if (pob.givecode() != 0) {
            cout << "\n\n\t\t\t\tTravel Code: " << pob.givecode();
            cout << "\n\n\t\t\t\tFamily Name: ";
            pob.givefam();
            cout << "\n\n\t\t\t\t\tNumber of People: " << pob.give();
        }
    }

    file.close();
}

void status(int cd) {
    fstream file;
    file.open("records.dat", ios::in | ios::binary);

    if (!file) {
        cout << "\n\n\t\t\tFile Not Found. Aborting!";
        return;
    }

    while (file.read(reinterpret_cast<char*>(&pob), sizeof(pob))) {
        if (pob.givecode() == cd) {
            pob.p_output();
            tob.t_output();
            fob.foutput();
        }
    }

    file.close();
}

int main() {
    int opt, cd;
    do {
        cout << "\n\n\t\t********** TRAVEL MANAGEMENT SYSTEM **********";
        cout << "\n\n\t\t1. Enter New Details";
        cout << "\n\t\t2. View Details";
        cout << "\n\t\t3. View All Families";
        cout << "\n\t\t4. Exit";
        cout << "\n\n\t\tEnter your choice: ";
        cin >> opt;

        switch (opt) {
        case 1:
            cout << "\n\n\t\tEnter Code: ";
            cin >> cd;
            cin.ignore();
            pob.p_input(cd);
            tob.t_input(cd);
            fob.finput(cd);
            break;
        case 2:
            cout << "\n\n\t\tEnter Code: ";
            cin >> cd;
            cin.ignore();
            status(cd);
            break;
        case 3:
            list();
            break;
        case 4:
            exit(0);
        default:
            cout << "\n\n\t\tInvalid Choice!";
        }
    } while (opt != 4);

    return 0;
}
