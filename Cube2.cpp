#include <iostream>
#include <iomanip>
using namespace std;
void Appearance1(char L1,char L2,char L3);
int main()
{
	char Line1[3]={"R","R","R"};
	char Line2[3]={"R","R","R"};
	char Line3[3]={"R","R","R"};
	//Appearance1(Line1,Line2,Line3);
	return -2;
}
void Appearance1(char L1,char L2,char L3)
{
	cout<<endl;
	cout<<setw(5)<<Line1[0]<<setw(4)<<Line1[1]<<setw(4)<<Line1[2]<<endl<<endl;
	cout<<setw(5)<<Line2[0]<<setw(4)<<Line2[1]<<setw(4)<<Line2[2]<<endl<<endl;
	cout<<setw(5)<<Line3[0]<<setw(4)<<Line3[1]<<setw(4)<<Line3[2]<<endl<<endl;
}
