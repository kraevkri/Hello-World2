#include <iostream>
#include <fstream>
using namespace std;

int main()
{


        string jmeno,prijimeni; int vek, vyska, vzdelani;
        cout<<"zadejte cele jmeno zamestnance oddelene mezerou";
        cin>>jmeno>>prijimeni;
        cout<<"zadejte vek a vysku zamestnance oddelene mezerou";
        cin>>vek>>vyska;
        if (0<vek<106) {
            if (10< vyska <210){
                }
            else {cout<<"zadali jste nevalidni vysku";}
        }
        else {cout<<"zadali jste nevalidni vek";}

        cout<<"zadejte dosazene vzdelani, 1=zakladni, 2=maturita/vyucni, 3=vysokoskolske";
        cin>>vzdelani;


        ofstream myfile;
        myfile.open ("databaze.txt");
        myfile <<  jmeno;
        myfile <<  prijimeni;
        myfile <<  vek;
        myfile <<  vyska;
        myfile <<  vzdelani;
        myfile.close();

    return 0;
}
