#include <conio.h>
#include <iostream.h>

int main(void)
{
int jumlah= 0;
int bilangan;
for (bilangan = 1;bilangan <= 5;bilangan++)
	{
   if (bilangan == 3 || bilangan == 4) continue;
   jumlah+=bilangan;
   }
cout<<"Deret Bilangan : 1+2+3+4+ "<<bilangan-1<<endl;
cout<<"Jumlah Deret Bilangan = "<<jumlah;
getch();
return 0;
}