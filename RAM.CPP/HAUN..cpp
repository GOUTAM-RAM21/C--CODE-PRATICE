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
    string passnum[10];
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
    tob.initial();
    trvtcode = cd;
    int i = 1, opt;

    do {
        cout << endl;
        cout << "\n\n\t\t\t\t_||__TRAVEL DETAILS__";
        cout << "\n\t\t\t\t\\___________________/";
        cout << "\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n\n\t\tPlease enter the following details for your journey:";
        cout << "\n\n\t\t*Note:Options marked with '*' are compulsory.\n\t\t\tPlease do select them.";
        cout << "\n\n\n\t\t\t\t*1.Boarding Point\n\t\t\t\t*2.Destination\n\t\t\t\t*3.Date of Departure\n\t\t\t\t*4.Deck\n\t\t\t\t 5.Cabin\n\t\t\t\t 6.Swimming Pool\n\t\t\t\t 7.Gymnasuim\n\t\t\t\t 8.Sports\n\t\t\t\t 9.Salon\n\t\t\t\t 10.Spa\n\t\t\t\t 11.Theatre\n\t\t\t\t 12.Back\n\n\t\t\t\t  ";
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

    cout << "\n\n\tDeck:\t\t";
    switch (deck) {
    case 1: cout << "Top Deck"; break;
    case 2: cout << "Middle Deck"; break;
    case 3: cout << "Bottom Deck"; break;
    }

    cout << "\n\n\tCabin:\t\t";
    switch (cabin) {
    case 1: cout << "AC"; break;
    case 2: cout << "Non AC"; break;
    }

    cout << "\n\n\tSwimming Pool Facility:\t";
    pool == 0 ? cout << "No" : cout << "Yes";
    cout << "\n\n\tGymnasium Facility:\t";
    gym == 0 ? cout << "No" : cout << "Yes";
    cout << "\n\n\tSports Facility:\t";
    sports == 0 ? cout << "No" : cout << "Yes";
    cout << "\n\n\tBeauty Salon Facility:\t";
    salon == 0 ? cout << "No" : cout << "Yes";
    cout << "\n\n\tSpa/Massage Parlour Facility:\t";
    spa == 0 ? cout << "No" : cout << "Yes";
    cout << "\n\n\tTheatre Facility:\t";
    theatre == 0 ? cout << "No" : cout << "Yes";
}

class bill {
    double fare;
    double swimpool;
    double gym;
    double sport;
    double theatre;
    double salon;
    double spa;
    double bill_amt;
    int persons;

public:
    void calc();
    void addpeople(int);
    void output();
    void accept(int);
} b;

void bill::accept(int c) {
    persons = c;
}

void bill::addpeople(int n) {
    persons = n;
}

void bill::calc() {
    fare = swimpool = gym = sport = theatre = salon = spa = 0;
    fare = (persons * 50000);

    if (top.gym == 1) {
        gym = (2000 * persons);
    }
    if(tool.swimpool==1) {
        swimpool = (1500 * persons);
    }
    if (tob.sports == 1) {
        sport = (3000 * persons);
    }
    if (tob.salon == 1) {
        salon = (3500 * persons);
    }
    if (tob.spa == 1) {
        spa = (4000 * persons);
    }
    if (tob.theatre == 1) {
        theatre = (2000 * persons);
    }

    bill_amt = fare + swimpool + gym + sport + theatre + salon + spa;
}

void bill::output() {
    cout << "\n\n\t ::::::::::::::::::::::::  BILL  :::::::::::::::::::::::: ";
    cout << "\n\t\t\t\t~~~~~";
    cout << "\n\n\n\t Fare\t\t\t" << persons << "*" << 50000 << "\t=\t" << fare;
    if (tob.pool == 1) {
        cout << "\n\n\t Swimming Pool Charges\t\t" << persons << "*" << 1500 << "\t=\t" << swimpool;
    }
    if (tob.gym == 1) {
        cout << "\n\n\t Gym Charges\t\t" << persons << "*" << 2000 << "\t=\t" << gym;
    }
    if (tob.sports == 1) {
        cout << "\n\n\t Sports Charges\t\t" << persons << "*" << 3000 << "\t=\t" << sport;
    }
    if (tob.theatre == 1) {
        cout << "\n\n\t Theatre Charges\t\t" << persons << "*" << 2000 << "\t=\t" << theatre;
    }
    if (tob.salon == 1) {
        cout << "\n\n\t Beauty Salon Charges\t\t" << persons << "*" << 3500 << "\t=\t" << salon;
    }
    if (tob.spa == 1) {
        cout << "\n\n\t Spa Charges\t\t" << persons << "*" << 4000 << "\t=\t" << spa;
    }
    cout << "\n\n\t\t\t\t\t\t_________";
    cout << "\n\n\t\t\tTotal Amount Payable is:\t=\t" << bill_amt;
}

void checkcode() {
    fstream file1;
    file1.open("PERSONAL.dat", ios::in | ios::binary);
    int n, found = 0;
    cout << "\n\n\tPlease enter the travel code:";
    cin >> n;
    while (file1.read((char*)&pob, sizeof(pob))) {
        if (pob.givecode() == n) {
            found = 1;
            break;
        }
    }
    file1.close();
    if (found == 1) {
        cout << "\n\n\tThe Code Number Is Present.\n";
        pob.p_output();
        tob.t_output();
        b.output();
    } else {
        cout << "\n\n\tInvalid code number";
    }
}

void modify() {
    fstream file1, file2;
    file1.open("PERSONAL.dat", ios::in | ios::binary);
    file2.open("TEMP.dat", ios::out | ios::binary);
    int n, ch;
    cout << "\n\n\tEnter the travel code to be edited:";
    cin >> n;
    while (file1.read((char*)&pob, sizeof(pob))) {
        if (pob.givecode() == n) {
            cout << "\n\n\n\t\tWhat would you like to edit: ";
            cout << "\n\n\n\t\t1.Personal Details\n\n\t\t2.Travel Details\n\n\t\t3.Exit";
            cout << "\n\n\t\tEnter your choice:";
            cin >> ch;
            cin.ignore();

            switch (ch) {
            case 1:
                pob.p_input(n);
                break;
            case 2:
                tob.t_input(n);
                break;
            case 3:
                exit(0);
            }
        }
        file2.write((char*)&pob, sizeof(pob));
    }
    file1.close();
    file2.close();
    remove("PERSONAL.dat");
    rename("TEMP.dat", "PERSONAL.dat");
    cout << "\n\n\tYour changes have been saved.\n";
    pob.p_output();
    tob.t_output();
}

void deletedata() {
    fstream file1, file2;
    file1.open("PERSONAL.dat", ios::in | ios::binary);
    file2.open("TEMP.dat", ios::out | ios::binary);
    int n;
    cout << "\n\n\tPlease enter the travel code to be deleted:";
    cin >> n;
    while (file1.read((char*)&pob, sizeof(pob))) {
        if (pob.givecode() != n) {
            file2.write((char*)&pob, sizeof(pob));
        }
    }
    file1.close();
    file2.close();
    remove("PERSONAL.dat");
    rename("TEMP.dat", "PERSONAL.dat");
    cout << "\n\n\tThe travel code has been deleted.\n";
}

int main() {
    int code = 0;
    int opt, ch, n;

    while (true) {
        cout << "\n\n\n\t\tMENU";
        cout << "\n\t\t~~~~\n";
        cout << "\n\n\t1. Enter Details For New Cruise Booking";
        cout << "\n\n\t2. Display Passengers List";
        cout << "\n\n\t3. Display Travel Details";
        cout << "\n\n\t4. Display Bill";
        cout << "\n\n\t5. Check Code";
        cout << "\n\n\t6. Modify Existing Record";
        cout << "\n\n\t7. Delete Existing Record";
        cout << "\n\n\t8. Exit";

        cout << "\n\n\n\tPlease enter your option: ";
        cin >> opt;
        cin.ignore();

        switch (opt) {
        case 1:
            code++;
            pob.p_input(code);
            tob.t_input(code);
            b.accept(1);
            b.calc();
            break;
        case 2:
            pob.p_output();
            break;
        case 3:
            tob.t_output();
            break;
        case 4:
            b.output();
            break;
        case 5:
            checkcode();
            break;
        case 6:
            modify();
            break;
        case 7:
            deletedata();
            break;
        case 8:
            exit(0);
        default:
            cout << "\n\n\tInvalid option. Please try again.";
        }
    }
    return 0;
}
   