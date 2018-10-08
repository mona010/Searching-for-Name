// Program: Searching for name from top 1000 girls&boys names.
// Author:  Mona Mohamed fathi
//ID:       20170300   Group: 11
// Date:    8 Oct 2018
// Version: 1.0
//------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name ;

    // Request user input.
    cout << "Enter the name : " ;
    cin >> name ;
    cout << endl ;

    string rank , boyName , girlName ;
    bool anyGirl = false , anyBoy = false ;
    int lineNumber = 0;

    ifstream inFileName( "file of names.txt" ) ;
    while( inFileName >> rank >> boyName  >> girlName )
    {
        ++lineNumber ;
        // Show message if name found in the  boy names list.
        if( boyName.compare(name) == 0 )
        {
            cout << name << " is ranked " << lineNumber << " in popularity among boys." << endl ;
            anyBoy = true;
        }
        // Show message if name found in the  girl names list.
        if( girlName.compare(name) == 0 )
        {
            cout << name << " is ranked " << lineNumber << " in popularity among girls." << endl ;
            anyGirl = true;
        }
    }
    inFileName.close() ;

    // Show message if name not found in the  boy names list.
    if( !anyBoy )
    {
        cout << name << " is not ranked among the top " << lineNumber << " boy names." << endl ;
    }

    // Show message if name not found in girl names list.
    if( !anyGirl )
    {
        cout << name << " is not ranked among the top " << lineNumber << " girl names." << endl ;
    }

    return 0 ;
}
