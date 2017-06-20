	 /* Project on Creating the Long Form of Modern Periodic
	    Table Using C++ . Each and Every Element's Information
	    is also provided.



				 */

#include<iostream.h>
#include<conio.h>
#include<process.h>

void element(int,int);

int i,j,g;            // Globally declared

void frame()    // The borders of the individual element in 2nd black screen
{
    gotoxy(19,9);
    cout<<"|";
    for(i=20;i<=60;i++)
     {
     gotoxy(i,9);
     cout<<"=";
     }
    cout<<"|";
    gotoxy(19,16);
    cout<<"|";
    for(i=20;i<=60;i++)
     {
     gotoxy(i,16);
     cout<<"=";
     }
    cout<<"|";
    for(i=10;i<=15;i++)
     {
     gotoxy(19,i);
     cout<<"|";
     }
    for(i=10;i<=15;i++)
     {
     gotoxy(61,i);
     cout<<"|";
     }
    gotoxy(5,24);
    cout<<"Press Esc to Exit";
}

void display()          // Main borders in the periodic table
{ clrscr();
  gotoxy(28,2);
  cout<<" PERIODIC TABLE ";
 gotoxy(1,1);
 cout<<"=";
 for(i=2;i<=79;i++)
  {
  gotoxy(i,1);
  cout<<"=";
  }
 cout<<"=";
 for(i=2;i<=23;i++)
  {
  gotoxy(80,i);
  cout<<"|";
  }
 gotoxy(80,24);
 cout<<"|";
 for(i=2;i<=79;i++)
  {
  gotoxy(i,24);
  cout<<"=";
  }
 gotoxy(1,24);
 cout<<"|";
 for(i=2;i<=23;i++)
  {
  gotoxy(1,i);
  cout<<"|";
  }
gotoxy(13,3);
cout<<"1";
gotoxy(16,3);
cout<<"2";
gotoxy(19,3);
cout<<"3";
gotoxy(22,3);
cout<<"4";
gotoxy(25,3);
cout<<"5";
gotoxy(28,3);
cout<<"6";
gotoxy(31,3);
cout<<"7";
gotoxy(34,3);
cout<<"8";
gotoxy(37,3);
cout<<"9";
gotoxy(40,3);
cout<<"10";
gotoxy(43,3);
cout<<"11";
gotoxy(46,3);
cout<<"12";
gotoxy(49,3);
cout<<"13";
gotoxy(52,3);
cout<<"14";
gotoxy(55,3);
cout<<"15";
gotoxy(58,3);
cout<<"16";
gotoxy(61,3);
cout<<"17";
gotoxy(64,3);
cout<<"18";
gotoxy(9,5);
cout<<"I";
gotoxy(8,7);
cout<<"II";
gotoxy(8,9);
cout<<"III";
gotoxy(8,11);
cout<<"IV";
gotoxy(9,13);
cout<<"V";
gotoxy(8,15);
cout<<"VI";
gotoxy(8,17);
cout<<"VII";

gotoxy(9,23);
cout<<"******* ARROWS TO SCROLL...ENTER TO SELECT...ESC TO EXIT *******";

gotoxy(13,5);
cout<<"H";
gotoxy(13,7);
cout<<"Li";
gotoxy(13,9);
cout<<"Na";
gotoxy(13,11);
cout<<"K";
gotoxy(13,13);
cout<<"Rb";
gotoxy(13,15);
cout<<"Cs";
gotoxy(13,17);
cout<<"Fr";
gotoxy(16,7);
cout<<"Be";
gotoxy(16,9);
cout<<"Mg";
gotoxy(16,11);
cout<<"Ca";
gotoxy(16,13);
cout<<"Sr";
gotoxy(16,15);
cout<<"Ba";
gotoxy(16,17);
cout<<"Ra";
gotoxy(19,11);
cout<<"Sc";
gotoxy(19,13);
cout<<"Y";
gotoxy(19,15);
cout<<"La";
gotoxy(19,17);
cout<<"Ac";
gotoxy(22,11);
cout<<"Ti";
gotoxy(22,13);
cout<<"Zr";
gotoxy(22,15);
cout<<"Hf";
gotoxy(22,17);
cout<<"Rf";
gotoxy(25,11);
cout<<"V";
gotoxy(25,13);
cout<<"Nb";
gotoxy(25,15);
cout<<"Ta";
gotoxy(25,17);
cout<<"Db";
gotoxy(28,11);
cout<<"Cr";
gotoxy(28,13);
cout<<"Mo";
gotoxy(28,15);
cout<<"W";
gotoxy(28,17);
cout<<"Sg";
gotoxy(31,11);
cout<<"Mn";
gotoxy(31,13);
cout<<"Tc";
gotoxy(31,15);
cout<<"Re";
gotoxy(31,17);
cout<<"Bh";
gotoxy(34,11);
cout<<"Fe";
gotoxy(34,13);
cout<<"Ru";
gotoxy(34,15);
cout<<"Os";
gotoxy(34,17);
cout<<"Hs";
gotoxy(37,11);
cout<<"Co";
gotoxy(37,13);
cout<<"Rh";
gotoxy(37,15);
cout<<"Ir";
gotoxy(37,17);
cout<<"Mt";
gotoxy(40,11);
cout<<"Ni";
gotoxy(40,13);
cout<<"Pd";
gotoxy(40,15);
cout<<"Pt";
gotoxy(40,17);
cout<<"Ds";
gotoxy(43,11);
cout<<"Cu";
gotoxy(43,13);
cout<<"Ag";
gotoxy(43,15);
cout<<"Au";
gotoxy(43,17);
cout<<"Rg";
gotoxy(46,11);
cout<<"Zn";
gotoxy(46,13);
cout<<"Cd";
gotoxy(46,15);
cout<<"Hg";
gotoxy(46,17);
cout<<"Cn";
gotoxy(49,7);
cout<<"B";
gotoxy(49,9);
cout<<"Al";
gotoxy(49,11);
cout<<"Ga";
gotoxy(49,13);
cout<<"In";
gotoxy(49,15);
cout<<"Ti";
gotoxy(52,7);
cout<<"C";
gotoxy(52,9);
cout<<"Si";
gotoxy(52,11);
cout<<"Ge";
gotoxy(52,13);
cout<<"Sn";
gotoxy(52,15);
cout<<"Pb";
gotoxy(55,7);
cout<<"N";
gotoxy(55,9);
cout<<"P";
gotoxy(55,11);
cout<<"As";
gotoxy(55,13);
cout<<"Sb";
gotoxy(55,15);
cout<<"Bi";
gotoxy(58,7);
cout<<"O";
gotoxy(58,9);
cout<<"S";
gotoxy(58,11);
cout<<"Se";
gotoxy(58,13);
cout<<"Te";
gotoxy(58,15);
cout<<"Po";
gotoxy(61,7);
cout<<"F";
gotoxy(61,9);
cout<<"Cl";
gotoxy(61,11);
cout<<"Br";
gotoxy(61,13);
cout<<"I";
gotoxy(61,15);
cout<<"At";
gotoxy(64,5);
cout<<"He";
gotoxy(64,7);
cout<<"Ne";
gotoxy(64,9);
cout<<"Ar";
gotoxy(64,11);
cout<<"Kr";
gotoxy(64,13);
cout<<"Xe";
gotoxy(64,15);
cout<<"Rn";
gotoxy(12,20);
cout<<"L";
gotoxy(13,20);
cout<<"a";
gotoxy(14,20);
cout<<"=";
gotoxy(15,20);
cout<<"Lanthanides";
gotoxy(26,20);
cout<<":";
gotoxy(27,20);
cout<<"Ce";
gotoxy(30,20);
cout<<"Pr";
gotoxy(33,20);
cout<<"Nd";
gotoxy(36,20);
cout<<"Pm";
gotoxy(39,20);
cout<<"Sm";
gotoxy(42,20);
cout<<"Eu";
gotoxy(45,20);
cout<<"Gd";
gotoxy(48,20);
cout<<"Tb";
gotoxy(51,20);
cout<<"Dy";
gotoxy(54,20);
cout<<"Ho";
gotoxy(57,20);
cout<<"Er";
gotoxy(60,20);
cout<<"Tm";
gotoxy(63,20);
cout<<"Yb";
gotoxy(66,20);
cout<<"Lu";
gotoxy(12,21);
cout<<"A";
gotoxy(13,21);
cout<<"c";
gotoxy(14,21);
cout<<"=";
gotoxy(15,20);
gotoxy(15,21);
cout<<"Actinides";
gotoxy(26,21);
cout<<":";
gotoxy(27,21);
cout<<"Th";
gotoxy(30,21);
cout<<"Pa";
gotoxy(33,21);
cout<<"U";
gotoxy(36,21);
cout<<"Np";
gotoxy(39,21);
cout<<"Pu";
gotoxy(42,21);
cout<<"Am";
gotoxy(45,21);
cout<<"Cm";
gotoxy(48,21);
cout<<"Bk";
gotoxy(51,21);
cout<<"Cf";
gotoxy(54,21);
cout<<"Es";
gotoxy(57,21);
cout<<"Fm";
gotoxy(60,21);
cout<<"Md";
gotoxy(63,21);
cout<<"No";
gotoxy(66,21);
cout<<"Lr";
gotoxy(2,2);
i=2;j=2;
gotoxy(i,j);

do              // This "do-while loop" is for the free movement
{                //         of the cursor in the 1st black screen.
  g=getch();
  if(g==80)              //    If the Cursor goes to the last position
  {                        //     of the black screen then it is going
   if(j==23) j=1;         //    to come in the 1st position and vice-versa.
   gotoxy(i,++j);
  }
  else if(g==77)
  {
   if(i==79) i=1;
   gotoxy(++i,j);
  }
  else if(g==75)
  {
   if(i==2) i=80;
   gotoxy(--i,j);
  }
  else if(g==72)
  {
   if(j==2)
   j=24;
   gotoxy(i,--j);
  }
  if(g==13)
   element(i,j);
  }while(g!=27);
}

void main()
{
 clrscr();
 display();
}

void element(int i,int j)
 {
 if(((i==13)||(i==14))&&(j==5))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :1"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :H"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Hydrogen"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :0.37"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegetivity        :2.20"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }

 else if(((i==64)||(i==65))&&(j==5))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :2"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :He"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Helium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.2"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :24.58"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :------"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(j==7))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :3"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Li"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Lithium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.23"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.97"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(j==7))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :4"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Be"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Berryllium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :0.89"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :1.47"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==49)||(i==50))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :5"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :B"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Boron"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.80"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :8.3"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.01"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==52)||(i==53))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :6"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :C"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Carbon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.77"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :11.26"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.50"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==55)||(i==56))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :7"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :N"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Nitrogen"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.74"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :14.54"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :3.07"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==58)||(i==59))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :8"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :O"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Oxygen"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.74"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :13.61"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :3.50"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==61)||(i==62))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :9"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :F"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Fluorine"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.72"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :17.42"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :4.10"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==64)||(i==65))&&(j==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :10"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Ne"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Neon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.60"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :21.56"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :-"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(j==9))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :11"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Na"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Sodium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.57"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :1.01"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(j==9))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :12"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Mg"<<"\n";
	gotoxy(21,12);
	cout<<"Name       	        :Magnesium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.36"<<"\n";
	gotoxy(21,15);
	cout<<"Electonegativity         :1.23"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return.....   ";
     }

 else if(((i==49)||(i==50))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :13"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Al"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Aluminium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.25"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :6.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :1.47"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==52)||(i==53))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :14"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Si"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Silicon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.17"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :8.15"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :1.74"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==55)||(i==56))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :15"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :P"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Phosphorus"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.10"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :11.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.06"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==58)||(i==59))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :16"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :S"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Sulphur"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.04"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :10.36"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.44"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}



 else  if(((i==61)||(i==62))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :17"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Cl"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Chlorine"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.99"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :13.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.83"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}



 else if(((i==64)||(i==65))&&(j==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :18"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Ar"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Argon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.90"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :15.76"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :-"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(j==11))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :19"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :K"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Potassium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.03"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.91"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(j==11))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No               :20"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                  :ca"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name       	        :Calcium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius           :1.74"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electonegativity            :1.04"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return.....   ";
    }

 else if(((i==13)||(i==14))&&(j==13))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :37"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Rb"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Rubidium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.16"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.89"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(j==15))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :55"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Cs"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Cesium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.35"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.86"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(j==17))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :87"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Fr"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Francium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :-"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.86"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}
else if(((i==19)||(i==20))&&(j==11))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :21"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :Sc"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Scandium"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :2.09 A"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegativity        :1.36"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }
else if(((i==22)||(i==23))&&(j==11))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :22"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :Ti"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Titanium"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :2 A"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegativity        :1.54"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }
else if(((i==25)||(i==26))&&(j==11))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :23"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :V"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Vanadium"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :1.92 A"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegativity        :1.63"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }
else if(((i==28)||(i==29))&&(j==11))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :24"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :Cr"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Chromium"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :1.85 A"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegativity        :1.66"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }
else if(((i==31)||(i==32))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :25"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Mn"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Manganese"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.35 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.435 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.55"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==34)||(i==35))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :26"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Fe"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Iron"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.72 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.87 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.83"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==37)||(i==38))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :27"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Co"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Cobalt"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.67 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.86 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.86"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==40)||(i==41))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :28"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Ni"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Nickel"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.62 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.635 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.91"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==43)||(i==44))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :29"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Cu"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Copper"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.57 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.726 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.90"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==46)||(i==47))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :30"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Zn"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Zinc"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.53 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :9.394 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.65"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==49)||(i==50))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :31"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Ga"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Gallium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.81 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :5.999 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.81"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==52)||(i==53))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :32"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Ge"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Germanium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.52 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.899 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :2.01"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==55)||(i==56))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :33"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :As"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Arsenic"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.33 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :9.81 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :2.81"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==58)||(i==59))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :34"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Se"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Selenium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.22 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :9.752 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :2.55"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==61)||(i==62))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :35"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Br"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Bromine"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.12 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :11.814 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :2.96"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==64)||(i==65))&&(j==11))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :36"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Kr"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Krypton"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.03 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :13.999 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :3.00"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==16)||(i==17))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :38"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Sr"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Strontium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :2.45 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :5.695 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :0.95"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==19)||(i==20))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :39"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Y"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Yttrium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :2.27 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :6.38 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.22"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==22)||(i==23))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :40"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Zr"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Zirconium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :2.15 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :6.84 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.33"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==25)||(i==26))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :41"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Nb"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Niobium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :2.08 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :6.88 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.60"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==28)||(i==29))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :42"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Mo"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Molybdenum"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :2.01 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.099 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :2.16"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
else if(((i==31)||(i==32))&&(j==13))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.               :43"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                   :Tc"<<"\n";
       gotoxy(21,12);
       cout<<"Name                     :Technetium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius            :1.95 A"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential :7.28 eV"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity         :1.90"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }

char key;
key=getch();
if(key==27) exit(0);
else display();
}