#include <conio.h>
#include <iostream.h>

main(){
int pil;

menu:
cout<<"MENU : ";
cout<<"\n[1] Tambah";
cout<<"\n[2] Kurang";
cout<<"\n[3] Kali";
cout<<"\n[4] Bagi";
cout<<"\n[5] Modulo";

cout<<"\nInput pilihan : ";
cin>>pil;

if(pil==1)
	{int a,b,c,jawab;
	 cout<<"Input angka 1 : ";cin>>a;
    cout<<"Input angka 2 : ";cin>>b;
    c=a+b;
    cout<<"Hasil jumlahnya : "<<c;
    cout<<"\nIngin kembali ke menu ? ";cin>>jawab;
    if(jawab==1)
    	{clrscr();
      goto menu;}
    else if(jawab==0)
    	cout<<"Makasih";}
if(pil==2)
	{int a,b,c,jawab;
    cout<<"Input angka 1 : ";cin>>a;
    cout<<"Input angka 2 : ";cin>>b;
    c=a-b;
    cout<<"Hasil pengurangan : "<<c;
    cout<<"\nIngin kembali ke menu ? ";cin>>jawab;
    if(jawab==1)
    	{clrscr();
      goto menu;}
    else if(jawab==0)
    	cout<<"Makasih";}
if(pil==3)
	{int a,b,c,jawab;
    cout<<"Input angka 1 : ";cin>>a;
    cout<<"Input angka 2 : ";cin>>b;
    c=a*b;
    cout<<"Hasil perkalian : "<<c;
    cout<<"\nIngin kembali ke menu ? ";cin>>jawab;
    if(jawab==1)
    	{clrscr();
      goto menu;}
    else if(jawab==0)
    	cout<<"Makasih";}
if(pil==4)
	{int a,b,c,jawab;
    cout<<"Input angka 1 : ";cin>>a;
    cout<<"Input angka 2 : ";cin>>b;
    c=a/b;
    cout<<"Hasil pembagian : "<<c;
    cout<<"\nIngin kembali ke menu ? ";cin>>jawab;
    if(jawab==1)
    	{clrscr();
      goto menu;}
    else if(jawab==0)
    	cout<<"Makasih";}
getch();}


