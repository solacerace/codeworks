#include<A.h>
#include<B.h>
#include<iostream>
#include <boost/regex.hpp>
#include <iostream>
#include <string>

using namespace std;
int main()
{
   cout << "I am Main - Mod In Windows new " << endl;
   A a;
   B b;
   auto testFun = [](){cout << "HelloGod"<< endl; };
   testFun();

   // Windowschanges
    std::string line = "Subject: Re: Where are you going";
    boost::regex pat( "^Subject: Re:.*" );

    boost::smatch matches;
    if (boost::regex_match(line, matches, pat))
        std::cout << "Matches" << std::endl;

   return 0;
}
