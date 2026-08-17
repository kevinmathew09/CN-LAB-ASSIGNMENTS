#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
   string ip;
   int firstOctet;
   cout << "Enter IPv4 address: ";
   cin >> ip;
   stringstream ss(ip);
   string firstPart;
   getline(ss, firstPart, '.');
   firstOctet = stoi(firstPart);

 
   // Check whether first octet is valid
   if (firstOctet < 0 || firstOctet > 255)
   {
       cout << "Invalid IP address!";
       return 0;
   }
   cout << "\nFirst Octet : " << firstOctet;
 
   // Class A
   if (firstOctet >= 0 && firstOctet <= 127)
   {
       cout << "\n\n===== CLASS A =====";
       cout << "\nFirst Octet Range : 0 - 127";
       cout << "\nBinary Pattern    : 0XXXXXXX";
       cout << "\nIP Address Range  : 0.0.0.0 - 127.255.255.255";
       cout << "\nDefault Subnet Mask: 255.0.0.0";
       cout << "\nCIDR              : /8";
       cout << "\nNetwork Bits      : 8";
       cout << "\nHost Bits          : 24";
       cout << "\nHosts per Network  : 2^24 - 2";
       cout << "\nNumber of Networks : 2^7";

       if (firstOctet == 127)
       {
           cout << "\n\nNote: 127.x.x.x is reserved for Loopback.";
       }
   }

 

   // Class B
   else if (firstOctet >= 128 && firstOctet <= 191)
   {
       cout << "\n\n===== CLASS B =====";
       cout << "\nFirst Octet Range : 128 - 191";
       cout << "\nBinary Pattern    : 10XXXXXX";
       cout << "\nIP Address Range  : 128.0.0.0 - 191.255.255.255";
       cout << "\nDefault Subnet Mask: 255.255.0.0";
       cout << "\nCIDR              : /16";
       cout << "\nNetwork Bits      : 16";
       cout << "\nHost Bits          : 16";
       cout << "\nHosts per Network  : 2^16 - 2";
       cout << "\nNumber of Networks : 2^14";

   }
 
   // Class C
   else if (firstOctet >= 192 && firstOctet <= 223)
   {
       cout << "\n\n===== CLASS C =====";
       cout << "\nFirst Octet Range : 192 - 223";
       cout << "\nBinary Pattern    : 110XXXXX";
       cout << "\nIP Address Range  : 192.0.0.0 - 223.255.255.255";
       cout << "\nDefault Subnet Mask: 255.255.255.0";
       cout << "\nCIDR              : /24";
       cout << "\nNetwork Bits      : 24";
       cout << "\nHost Bits          : 8";
       cout << "\nHosts per Network  : 2^8 - 2";
       cout << "\nNumber of Networks : 2^21";
   }

 
   // Class D
   else if (firstOctet >= 224 && firstOctet <= 239)
   {
       cout << "\n\n===== CLASS D =====";
       cout << "\nFirst Octet Range : 224 - 239";
       cout << "\nBinary Pattern    : 1110XXXX";
       cout << "\nIP Address Range  : 224.0.0.0 - 239.255.255.255";
       cout << "\nDefault Subnet Mask: Not Applicable";
       cout << "\nCIDR              : Not Applicable";
       cout << "\nPurpose            : Multicast";
       cout << "\nNetwork Bits      : Not Applicable";
       cout << "\nHost Bits          : Not Applicable";
       cout << "\nHosts per Network  : Not Applicable";
       cout << "\nNumber of Networks : Not Applicable";
   }

   // Class E
   else
   {
       cout << "\n\n===== CLASS E =====";
       cout << "\nFirst Octet Range : 240 - 255";
       cout << "\nBinary Pattern    : 1111XXXX";
       cout << "\nIP Address Range  : 240.0.0.0 - 255.255.255.255";
       cout << "\nDefault Subnet Mask: Not Applicable";
       cout << "\nCIDR              : Not Applicable";
       cout << "\nPurpose            : Experimental / Reserved";
       cout << "\nNetwork Bits      : Not Applicable";
       cout << "\nHost Bits          : Not Applicable";
       cout << "\nHosts per Network  : Not Applicable";
       cout << "\nNumber of Networks : Not Applicable";
   }
   return 0;

}