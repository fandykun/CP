
/*PROGRAM EDIT KONVERSI BILANGAN*/
#include <stdio.h>
#include <iostream>
#include <conio.h>

int main()
{
int d;
int i=0,n,j,b[100];
char karakter;

cout<<"\n\n\t\tmenu:\n";
cout<<"\n\n\t\t[1] Desimal ke Biner\n";
cout<<"\t\t[2] Desimal ke Oktal\n";
cout<<"\t\t[3] Desimal ke Hexadesimal\n";
cout<<"\n\n\t\tpilihan hanya 1 s/d 3";

cout<<"\n\t\tsilahkan pilih menu: ";
cin>>d;

switch(d)
{
case 1:
cout<<"\n\t\tmasukan angka desimal: ";
cin>>n;
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;

}
cout<<"\n\t\tdalam biner: ";
j=i-1;

for (i=j;j>=0;j--)
{
cout<<b[j];

}

break;

case 2:
cout<<"\n\t\tmasukan angka desimal: ";
cin>>n;

while (n>0)
{
b[i]=n%8;
n=n/8;
i++;
}

printf("\n\t\tdalam oktal :");
j=i-1;

for (i=j;j>=0;j--)
{
cout<<b[j];
}

break;

case 3:
cout<<"\n\t\tmasukan angka desimal: ";
cin>>n;

while (n>0)
{
b[i]=n%16;
n=n/16;
i++;
}

cout<<"\n\t\tdalam hexa:";
j=i-1;
for (i=j;j>=0;j--)
{
if(b[j]<10)
{
cout<<b[j];
}
else
{
switch(b[j])
{
case 10:
cout<<"A";
break;
case 11:
cout<<"B";
break;
case 12:
cout<<"C";
break;
case 13:
cout<<"D";
break;
case 14:
cout<<"E";
break;
case 15:
cout<<"F";
break;
}
}
}
}
  cout<<"\n\n\t\tcoba lagi? y/n";
  karakter=getch();
  if(karakter=='y')
  {
  goto awal;
  }
  else
  {cout<<"\n\n\t\tterima kasih telah menggunakan program ini";}

}

