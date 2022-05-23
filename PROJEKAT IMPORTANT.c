#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
float radian=57.32,pi=3.14,g=9.81;
void info();
void unosSR();
void masaSR();
void ubrzanjeSR();
void ugao_ravniSR();
void koeficijent_trenjaSR();
void unosMK();
void unosSH();
void unosSH1();
void masaSH();
void ubrzanjeSH();
void silaSH();
void koeficijent_trenjaSH();
void unosSH2();
void masaSH21();
void ubrzanjeSH21();
void silaSH21();
void koeficijent_trenjaSH21();
void sila_zatezanjaSH21();
void masaSH221();
void masaSH222();
void ubrzanjeSH22();
void silaSH22();
void koeficijent_trenjaSH22();
void sila_zatezanjaSH22();
void unosSH3();
void masaSH31();
void ubrzanjeSH31();
void silaSH31();
void koeficijent_trenjaSH31();
void sila_zatezanjaSH31();
void masaSH321();
void masaSH322();
void masaSH323();
void ubrzanjeSH32();
void silaSH32();
void koeficijent_trenjaSH32();
void sila_zatezanjaSH32();
void unosSH4();
void masaSH41();
void ubrzanjeSH41();
void silaSH41();
void koeficijent_trenjaSH41();
void sila_zatezanjaSH41();
void masaSH421();
void masaSH422();
void masaSH423();
void masaSH424();
void ubrzanjeSH42();
void silaSH42();
void koeficijent_trenjaSH42();
void sila_zatezanjaSH42();
void predjeni_putSHSR(float a);
void vremeSHSR(float a);
void brzinaSHSR(float a);
void unosDE();
void main()
{
char u[4],r,str1[]="SR",str2[]="MK",str3[]="SH",str4[]="DE",str5[]="INFO",strg[]="DA",strgg[]="NE";
int i1,i2,i3,i4,i5,g1,g2;
float g=0;
do
{
a:
printf("Za strmu ravan unesite 'SR'.\nZa matematicko klatno unesite 'MK'.\nZa delovanje sile na telo na horizontalnoj podlozi unesite 'SH'.\nZa doplerov efekat unesite 'DE'.\nZa vise informacija unesite 'INFO'.\n");
scanf("%s",&u);
i1=strcmp(u,str1);
if(i1==0)
{
unosSR(); 
}
i2=strcmp(u,str2);
if(i2==0)
{
unosMK();
}
i3=strcmp(u,str3);
if(i3==0)
{
unosSH();
}
i4=strcmp(u,str4);
if(i4==0)
{
unosDE();
}
i5=strcmp(u,str5);
if(i5==0)
{
info();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
y:
printf("Ako zelite da ponovo pokrenete program unesite 'DA', u suprotnom 'NE'.\n");
scanf("%s", &u);
g1=strcmp(u,strg);
g2=strcmp(u,strgg);
if(g1!=0&&g2!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto y;
}
}while(g1==0);
}
void info()
{

}

void unosSR()
{
    char u[2],str1[]="M",str2[]="A",str3[]="U",str4[]="MI";
    int i1,i2,i3,i4;
    a:
    printf("Ako vam je potrebna masa unesite 'M'.\nAko vam je potrebno ubrzanje unesite 'A'.\nAko vam je potreban ugao ravni unesite 'U'.\nAko vam je potreban koeficijent trenja unesite 'MI'.\n");
    scanf("%s", &u);
    i1=strcmp(u,str1);
    if(i1==0)
    {
    masaSR();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSR();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    ugao_ravniSR();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSR();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void masaSR()
{

}

void ubrzanjeSR()
{
float a,m,mi,alfa;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(0>=m)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ugao ravni(moze biti 30,45 i 60 stepeni).\n");
scanf("%f", &alfa);
if(alfa!=45&&alfa!=60&&alfa!=30)
{
    printf("Greska u unosu ugla ravni, ponovite unos.\n");
goto d;
}
alfa=alfa/radian;
a=g*(sin(alfa)-mi*cos(alfa));
printf("Ubraznje iznosi: %f", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void ugao_ravniSR()
{

}

void koeficijent_trenjaSR()
{
float a,m,mi,alfa;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(0>=m)
{
printf("Masa ne moze biti negativna, ponovite unos.\n");
goto b;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
    printf("Ubrzanje u ovom slucaju ne sme biti negativno, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ugao ravni(moze biti 30,45 i 60 stepeni).\n");
scanf("%f", &alfa);
if(alfa!=45&&alfa!=60&&alfa!=30)
{
    printf("Greska u unosu ugla ravni, ponovite unos.\n");
goto d;
}
alfa=alfa/radian;
mi=(g*sin(alfa)-a)/(g*cos(alfa));
printf("Koeficijent trenja iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}
void unosMK()
{

}

void unosSH()
{
char u[6],str1[]="JEDAN",str2[]="DVA",str3[]="TRI",str4[]="CETIRI";
int i1,i2,i3,i4;
    a:
    printf("Ako imate jedno telo unesite 'JEDAN'.\nAko imate dva tela unesite 'DVA'.\nAko imate tri tela unesite 'TRI'.\nAko imate cetiri tela unesite 'CETIRI'.\n");
    scanf("%s", &u);
    i1=strcmp(u,str1);
    if(i1==0)
    {
    unosSH1();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    unosSH2();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    unosSH3();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    unosSH4();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void unosSH1()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI";
    int i1,i2,i3,i4;
    a:
    printf("Ako vam je potrebna masa unesite 'M'.\nAko vam je potrebno ubrzanje unesite 'A'.\nAko vam je potrebna sila unesite 'F'.\nAko vam je potreban koeficijent trenja unesite 'MI'.\n");
    scanf("%s", &u);
    i1=strcmp(u,str1);
    if(i1==0)
    {
    masaSH();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void masaSH()
{
float a,m,mi,f;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m=f/(a+mi*g);
printf("Masa iznosi: %f", m);
if(m<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void ubrzanjeSH()
{
float a,m,mi,f;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(0>=m)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-mi*m*g)/m;
printf("Ubraznje iznosi: %f", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void silaSH()
{
float a,m,mi,f;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(0>=m)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ubrzanje kojim se telo krece.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
    goto d;
}
f=m*(a+mi*g);
printf("Sila iznosi: %f", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void koeficijent_trenjaSH()
{
float a,m,mi,f;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(0>=m)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f", &f);
if(m<0)
{
    printf("Greska u unosu sile, sila ne moze biti negativna, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ubrzanje kojim se telo krece.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
    goto d;
}
mi=(f-m*a)/(m*g);
printf("Koeficijent trenja iznosi: %f", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void unosSH2()
{
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str99[]="NE";
int i,i1,i2,i3,i4,i5,i6,i99;
a:
printf("Ako su mase oba tela jednake, unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i99=strcmp(u,str99);
if(i!=0&&i99!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto a;
}
if(i==0)
{
b:
printf("Ako vam je potrebna masa i T unesite 'M'.\nAko vam je potrebno ubrzanje i T unesite 'A'.\nAko vam je potrebna sila i T unesite 'F'.\nAko vam je potreban koeficijent trenja i T unesite 'MI'.\nAko vam je potrebna samo sila zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
    {
    masaSH21();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH21();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH21();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH21();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH21();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto b;
}
}
else
{
c:
printf("Ako vam je potrebna masa prvog tela i T unesite 'M1'.\nAko vam je potrebna masa drugog tela i T unesite 'M2'.\nAko vam je potrebno ubrzanje i T unesite 'A'.\nAko vam je potrebna sila i T unesite 'F'.\nAko vam je potreban koeficijent trenja i T unesite 'MI'.\nAko vam je potrebna sila zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str6);
if(i1==0)
    {
    masaSH221();
    }
    i6=strcmp(u,str7);
    if(i6==0)
    {
    masaSH222();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH22();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH22();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH22();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH22();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto c;
}
}
}

void masaSH21()
{
float a,m,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m=f/(2*a+2*mi*g);
printf("Masa iznosi: %f\n", m);
if(m<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T=f-m*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void ubrzanjeSH21()
{
float a,m,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-2*mi*m*g)/(2*m);
printf("Ubrzanje iznosi: %f\n", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T=f-m*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
} 

void silaSH21()
{
float a,m,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
    goto d;
}
f=2*m*(a+mi*g);
printf("Sila iznosi: %f\n", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T=f-m*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void koeficijent_trenjaSH21()
{
float a,m,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
mi=(f-2*m*a)/(2*m*g);
printf("Koeficijent trenja iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T=f-m*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void sila_zatezanjaSH21()
{
float a,m,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
e:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto e;
}
T=f-m*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void masaSH221()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite intezitet sile koja deluje na telo.\n");
scanf("%f", &f);
if(f<0)
{
printf("Sila ne moze biti negativna, ponovite uslov.\n");
goto b;
}
e:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
m1=(f-m2*(a+mi*g))/(a+mi*g);
printf("Masa prvog tela iznosi: %f\n", m1);
if(m1<0)
{
printf("Neispravan unos nekog parametra ponovite unos.\n");
goto b;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void masaSH222()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite intezitet sile koja deluje na telo.\n");
scanf("%f", &f);
if(f<0)
{
printf("Sila ne moze biti negativna, ponovite uslov.\n");
goto b;
}
e:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
m2=(f-m1*(a+mi*g))/(a+mi*g);
printf("Masa prvog tela iznosi: %f\n", m2);
if(m2<0)
{
printf("Neispravan unos nekog parametra ponovite unos.\n");
goto b;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void ubrzanjeSH22()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite masu drugog tela tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite intezitet sile kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
printf("Sila ne moze biti negativna, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
a=(f-mi*g*(m1+m2))/(m1+m2);
printf("Ubrzanje iznosi: %f\n", a);
if(a<0)
{
printf("Neispravan unos nekog parametra ponovite unos.\n");
goto b;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void silaSH22()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite masu drugog tela tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
f=(m1+m2)*(a+mi*g);
printf("Sila iznosi: %f\n", f);
if(f<0)
{
printf("Neispravan unos nekog parametra ponovite unos.\n");
goto b;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void koeficijent_trenjaSH22()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite masu drugog tela tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite intezitet sile koja deluje na telo.\n");
scanf("%f", &f);
if(f<0)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
mi=(f-a*(m1+m2))/(g*(m1+m2));
printf("Koeficijent trenja iznosi: %f\n", mi);
if(mi<0||mi>1)
{
printf("Neispravan unos nekog parametra ponovite unos.\n");
goto b;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
} 

void sila_zatezanjaSH22()
{
float a,m1,m2,mi,f,T;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite masu drugog tela tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto e;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
goto d;
}
f:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto f;
}
g:
printf("Unesite intezitet sile koja deluje na telo.\n");
scanf("%f", &f);
if(f<0)
{
printf("Sila ne moze biti negativna, ponovite uslov.\n");
goto g;
}
T=m2*(a+mi*g);
printf("Sila zatezanja niti iznosi: %f\n",T);
if(T<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void unosSH3()
{
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str8[]="M3",str99[]="NE";
int i,i1,i2,i3,i4,i5,i6,i7,i99;
a:
printf("Ako su mase svih tela jednake, unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i99=strcmp(u,str99);
if(i!=0&&i99!=0)
{
    printf("Greska u unosu, ponovite unos.\n");
    goto a;
}
if(i==0)
{
b:
printf("Ako vam je potrebna masa i T unesite 'M'.\nAko vam je potrebno ubrzanje i T unesite 'A'.\nAko vam je potrebna sila i T unesite 'F'.\nAko vam je potreban koeficijent trenja i T unesite 'MI'.\nAko su vam samo potrebne sile zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
    {
    masaSH31();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH31();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH31();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH31();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH31();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto b;
}
}
else
{
c:
printf("Ako vam je potrebna masa prvog tela i T1,T2 unesite 'M1'.\nAko vam je potrebna masa drugog tela i T1,T2 unesite 'M2'.\nAko vam je potrebno ubrzanje i T1,T2 unesite 'A'.\nAko vam je potrebna sila i T1,T2 unesite 'F'.\nAko vam je potreban koeficijent trenja i T1,T2 unesite 'MI'.\nAko su vam samo potrebne sile zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str6);
if(i1==0)
    {
    masaSH321();
    }
    i6=strcmp(u,str7);
    if(i6==0)
    {
    masaSH322();
    }
    i7=strcmp(u,str8);
    if(i7==0)
    {
    masaSH323();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH32();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH32();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH32();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH32();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto c;
}
}
}

void masaSH31()
{
float a,m,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m=f/(3*a+3*mi*g);
printf("Masa iznosi: %f\n", m);
if(m<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void ubrzanjeSH31()
{
float a,m,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-3*mi*m*g)/(3*m);
printf("Ubrzanje iznosi: %f\n", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void silaSH31()
{
float a,m,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite masu tela.\n");
scanf("%f",&m);
if(m<0)
{
    printf("Masa ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
f=3*m*(a+mi*g);
printf("Sila iznosi: %f\n", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void koeficijent_trenjaSH31()
{
float a,m,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Greska u unosu masa, masa ne moze biti negativna, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
mi=(f-3*m*a)/(3*m*g);
printf("Koeficijent trenja iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void sila_zatezanjaSH31()
{
float a,m,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Greska u unosu masa, masa ne moze biti negativna, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
j:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f",&mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto j;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void masaSH321()
{
float a,m1,m2,m3,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
k:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto k;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m1=(f-mi*g*(m2+m3)-a*(m2+m3))/(a+mi*g);
printf("Masa prvog tela iznosi: %f\n", m1);
if(m1<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void masaSH322()
{
float a,m1,m2,m3,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
k:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto k;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m2=(f-mi*g*(m1+m3)-a*(m1+m3))/(a+mi*g);
printf("Masa drugog tela iznosi: %f\n", m2);
if(m2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void masaSH323()
{
float a,m1,m2,m3,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
k:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto k;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m3=(f-mi*g*(m1+m2)-a*(m1+m2))/(a+mi*g);
printf("Masa treceg tela iznosi: %f\n", m3);
if(m3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void ubrzanjeSH32()
{
float a,m1,m2,m3,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna.\n");
goto b;
}
y:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna.\n");
goto y;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
printf("Masa ne moze biti negativna.\n");
goto x;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-mi*g*(m1+m2+m3))/(m1+m2+m3);
printf("Ubrzanje tela iznosi: %f\n", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void silaSH32()
{
float a,m1,m2,m3,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna.\n");
goto b;
}
y:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna.\n");
goto y;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
printf("Masa ne moze biti negativna.\n");
goto x;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
    goto d;
}
f=a*(m1+m2+m3)+mi*g*(m1+m2+m3);
printf("Sila koja deluje na tela iznosi: %f\n", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void koeficijent_trenjaSH32()
{
float a,m1,m2,m3,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna.\n");
goto b;
}
y:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna.\n");
goto y;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
printf("Masa ne moze biti negativna.\n");
goto x;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
mi=(f-a*(m1+m2+m3))/(g*(m1+m2+m3));
printf("Koeficijent trenja tela iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void sila_zatezanjaSH32()
{
float a,m1,m2,m3,mi,f,T1,T2;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
printf("Masa ne moze biti negativna.\n");
goto b;
}
y:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
printf("Masa ne moze biti negativna.\n");
goto y;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
printf("Masa ne moze biti negativna.\n");
goto x;
}
u:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno, ponovite unos.\n");
goto u;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=m3*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}    
}

void unosSH4()
{
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str8[]="M3",str9[]="M4",str99[]="NE";
int i,i1,i2,i3,i4,i5,i6,i7,i8,i99;
a:
printf("Ako su mase svih tela jednake, unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i99=strcmp(u,str99);
if(i!=0&&i99!=0)
{
    printf("Greska u unosu, ponovite unos.\n");
    goto a;
}
if(i==0)
{
    b:
printf("Ako vam je potrebna masa i T1,T2,T3 unesite 'M'.\nAko vam je potrebno ubrzanje i T1,T2,T3 unesite 'A'.\nAko vam je potrebna sila i T1,T2,T3 unesite 'F'.\nAko vam je potreban koeficijent trenja i T1,T2,T3 unesite 'MI'.\nAko su vam samo potrebne sile zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
    {
    masaSH41();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH41();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH41();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH41();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH41();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto b;
}
}
else
{
    c:
printf("Ako vam je potrebna masa prvog tela i T1,T2,T3 unesite 'M1'.\nAko vam je potrebna masa drugog tela i T1,T2,T3 unesite 'M2'.\nAko vam je potrebna masa drugog tela i T1,T2,T3 unesite 'M3'.\nAko vam je potrebna masa drugog tela i T1,T2,T3 unesite 'M4'.\nAko vam je potrebno ubrzanje i T1,T2,T3 unesite 'A'.\nAko vam je potrebna sila i T1,T2,T3 unesite 'F'.\nAko vam je potreban koeficijent trenja i T1,T2,T3 unesite 'MI'.\nAko su vam samo potrebne sile zatezanja unesite 'T'.\n");
scanf("%s", &u);
i1=strcmp(u,str6);
if(i1==0)
    {
    masaSH421();
    }
    i6=strcmp(u,str7);
    if(i6==0)
    {
    masaSH422();
    }
    i7=strcmp(u,str8);
    if(i7==0)
    {
    masaSH423();
    }
    i8=strcmp(u,str9);
    if(i8==0)
    {
    masaSH424();
    }
    i2=strcmp(u,str2);
    if(i2==0)
    {
    ubrzanjeSH42();
    }
    i3=strcmp(u,str3);
    if(i3==0)
    {
    silaSH42();
    }
    i4=strcmp(u,str4);
    if(i4==0)
    {
    koeficijent_trenjaSH42();
    }
    i5=strcmp(u,str5);
    if(i5==0)
    {
    sila_zatezanjaSH42();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto c;
}
}
}

void masaSH41()
{
float a,m,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m=f/(4*a+4*mi*g);
printf("Masa iznosi: %f\n", m);
if(m<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
} 
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}   
}

void ubrzanjeSH41()
{
float a,m,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu tela.\n");
scanf("%f", &m);
if(m<0)
{
printf("Masa ne moze biti negativna. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-4*mi*m*g)/(4*m);
printf("Ubrzanje iznosi: %f\n", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}  
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}  
}

void silaSH41()
{
float a,m,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite masu tela.\n");
scanf("%f",&m);
if(m<0)
{
    printf("Masa ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
f=4*m*(a+mi*g);
printf("Sila iznosi: %f\n", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void koeficijent_trenjaSH41()
{
float a,m,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite silu kojom se deluje na telo.\n");
scanf("%f", &f);
if(f<0)
{
    printf("Greska u unosu sile, sila ne moze biti negativna, ponovite unos.\n");
goto c;
}
d:
printf("Unesite masu tela.\n");
scanf("%f",&m);
if(m<0)
{
    printf("Masa ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
mi=(f-4*m*a)/(4*m*g);
printf("Koeficijent trenja iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void sila_zatezanjaSH41()
{
float a,m,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite masu tela.\n");
scanf("%f",&m);
if(m<0)
{
    printf("Masa ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
l:
printf("Unesite silu kojom se deluje na tela.\n");
scanf("%f", &f);
if(f<0)
{
    printf("Neispravan unos sile, sila ne moze biti negativna, ponovite unos.\n");
    goto l;
}
T1=f-m*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}    
}
T2=T1-m*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}   
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
} 
}

void masaSH421()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m1=(f-mi*g*(m2+m3+m4)-a*(m2+m3+m4))/(a+mi*g);
printf("Masa prvog tela iznosi: %f\n", m1);
if(m1<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void masaSH422()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m2=(f-mi*g*(m1+m3+m4)-a*(m1+m3+m4))/(a+mi*g);
printf("Masa drugog tela iznosi: %f\n", m2);
if(m2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void masaSH423()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m3=(f-mi*g*(m1+m2+m4)-a*(m1+m2+m4))/(a+mi*g);
printf("Masa treceg tela iznosi: %f\n", m3);
if(m3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void masaSH424()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
m4=(f-mi*g*(m1+m2+m3)-a*(m1+m2+m3))/(a+mi*g);
printf("Masa cetvrtog tela iznosi: %f\n", m4);
if(m4<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void ubrzanjeSH42()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
a=(f-mi*g*(m1+m2+m3+m4))/(m1+m2+m3+m4);
printf("Ubrzanje tela iznosi: %f\n", a);
if(a<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void silaSH42()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite uslov.\n");
    goto d;
}
f=a*(m1+m2+m3+m4)+mi*g*(m1+m2+m3+m4);
printf("Sila koja deluje na tela iznosi: %f\n", f);
if(f<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void koeficijent_trenjaSH42()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto z;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
mi=(f-a*(m1+m2+m3+m4))/(g*(m1+m2+m3+m4));
printf("Koeficijent trenja tela iznosi: %f\n", mi);
if(mi<0||mi>1)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void sila_zatezanjaSH42()
{
float a,m1,m2,m3,m4,mi,f,T1,T2,T3;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite masu prvog tela.\n");
scanf("%f", &m1);
if(m1<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto b;
}
x:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto x;
}
m:
printf("Unesite masu treceg tela.\n");
scanf("%f", &m3);
if(m3<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto m;
}
z:
printf("Unesite masu cetvrtog tela.\n");
scanf("%f", &m4);
if(m4<0)
{
    printf("Masa ne moze biti negativna.\n");
    goto z;
}
c:
printf("Unesite koeficijent trenja od 0 do 1(0 znaci da nema trenja).\n");
scanf("%f", &mi);
if(mi<0||mi>1)
{
    printf("Greska u unosu koeficijenta trenja, ponovite unos.\n");
goto c;
}
d:
printf("Unesite silu koja deluje na tela.\n");
scanf("%f",&f);
if(f<0)
{
    printf("Sila ne moze biti negativna, ponovite uslov.\n");
    goto d;
}
j:
printf("Unesite ubrzanje tela.\n");
scanf("%f",&a);
if(a<0)
{
    printf("Ubrzanje ne moze biti negativno, ponovite unos.\n");
    goto j;
}
T1=f-m1*(a+mi*g);
printf("Sila zatezanja niti (T1) iznosi: %f\n",T1);
if(T1<0)
{
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
}
T2=T1-m2*(a+mi*g);
printf("Sila zatezanja niti (T2) iznosi: %f\n", T2);
if(T2<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
T3=m3*(a+mi*g);
printf("Sila zatezanja niti (T3) iznosi: %f\n", T3);
if(T3<0)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
q:
printf("Ako zelite izracunati predjeni put/vreme/brzinu kretanja tela unesite 'DA' u suprotnom 'NE'.\n");
scanf("%s", &u);
i=strcmp(u,str);
i1=strcmp(u,str1);
if(i!=0&&i1!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto q;
}
if(i==0)
{
t:
printf("Ako vam je potreban predjeni put i brzina unesite 'S'\nAko vam je potrebno vreme i brzina unesite 'T'\nAko vam je potrebna samo brzina unesite 'V'\n");
scanf("%s", &u);
i2=strcmp(u,str2);
i3=strcmp(u,str3);
i4=strcmp(u,str4);
if(i2!=0&&i3!=0&&i4!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto t;
}
if(i2==0)
{
predjeni_putSHSR(a);   
}
if(i3==0)
{
vremeSHSR(a);
}
if(i4==0)
{
brzinaSHSR(a);
}
}
}

void predjeni_putSHSR(float a)
{
float s,t,v;
a:
printf("Unesite vreme kretanja.\n");
scanf("%f", &t);
if(t<0)
{
    printf("Vreme ne moze biti negativno, ponovite unos.\n");
    goto a;
}
s=(a*t*t)/2;
printf("Predjeni put iznosi %f metara od tacke polaska.\n",s);
if(s<0)
{
    printf("Greska u unosu parametara, ponovite unos.\n");
    goto a;
}
v=a*t;
printf("Brzina posle %f sekundi iznosi:%f.\n",t,v);
if(v<0)
{
    printf("Greska u unosu parametara, ponovite unos.\n");
    goto a;
}    
1;
}

void vremeSHSR(float a)
{
float s,t,v;
a:
printf("Unesite predjeni put tela.\n");
scanf("%f", &s);
if(s<0)
{
    printf("Predjeni put ne moze biti negativan, ponovite unos.\n");
    goto a;
}
t=sqrt((2*s)/a);
printf("Vreme iznosi %f sekundi.\n",t);
if(t<0)
{
    printf("Greska u unosu parametara, ponovite unos.\n");
    goto a;
}
v=a*t;
printf("Brzina posle %f sekundi iznosi:%f.\n",t,v);
if(v<0)
{
    printf("Greska u unosu parametara, ponovite unos.\n");
    goto a;
}    
}

void brzinaSHSR(float a)
{

float t,v;
b:
printf("Unesite vreme kretanja.\n");
scanf("%f", &t);
if(t<0)
{
    printf("Vreme ne moze biti negativno, ponovite unos.\n");
    goto b;
}
v=a*t;
printf("Brzina posle %f sekundi iznosi:%f.\n",t,v);
if(v<0)
{
    printf("Greska u unosu parametara, ponovite unos.\n");
    goto b;
}
}

void unosDE()
{

}