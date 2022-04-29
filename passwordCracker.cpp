// Password cracker

#include <iostream>
#include <chrono>
#include <unistd.h>
 
using namespace std;


string passwordCracker(string pwd) {

	char alphabet = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'];



}

int main()
{
	// Start Timer
    auto start = chrono::steady_clock::now();
 	
    string pwd;
    cin >> pwd;

    // Password Cracker
    passwordCracker(pwd);
 	
 	// End Timer
    auto end = chrono::steady_clock::now();
 
 
    cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec";
 
    return 0;
}