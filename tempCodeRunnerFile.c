#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
float radian=57.32,pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844,g=9.81;
void info();
void infoSR();
void infoMK();
void infoSH();
void infoSH1();
void infoSH1TZ();
void infoSH1FO();
void infoSH1FOM();
void infoSH1FOA();
void infoSH1FOF();
void infoSH1FOMI();
void infoSH1PR();
void infoSH2();
void infoSH21();
void infoSH21TZ();
void infoSH21FO();
void infoSH21FOM();
void infoSH21FOA();
void infoSH21FOF();
void infoSH21FOMI();
void infoSH21FOT();
void infoSH21PR();
void infoSH22();
void infoSH22TZ();
void infoSH22FO();
void infoSH22FOM1();
void infoSH22FOM2();
void infoSH22FOA();
void infoSH22FOF();
void infoSH22FOMI();
void infoSH22FOT();
void infoSH22PR();
void infoSH3();
void infoSH31();
void infoSH31TZ();
void infoSH31FO();
void infoSH31FOM();
void infoSH31FOA();
void infoSH31FOF();
void infoSH31FOMI();
void infoSH31FOT1();
void infoSH31FOT2();
void infoSH31PR();
void infoSH32();
void infoSH32TZ();
void infoSH32FO();
void infoSH32FOM1();
void infoSH32FOM2();
void infoSH32FOM3();
void infoSH32FOA();
void infoSH32FOF();
void infoSH32FOMI();
void infoSH32FOT1();
void infoSH32FOT2();
void infoSH32PR();
void infoSH4();
void infoSH41();
void infoSH41TZ();
void infoSH41FO();
void infoSH41FOM();
void infoSH41FOA();
void infoSH41FOF();
void infoSH41FOMI();
void infoSH41FOT1();
void infoSH41FOT2();
void infoSH41FOT3();
void infoSH41PR();
void infoSH42();
void infoSH42TZ();
void infoSH42FO();
void infoSH42FOM1();
void infoSH42FOM2();
void infoSH42FOM3();
void infoSH42FOM4();
void infoSH42FOA();
void infoSH42FOF();
void infoSH42FOMI();
void infoSH42FOT1();
void infoSH42FOT2();
void infoSH42FOT3();
void infoSH42PR();
void infoDE();
void infoKO();
void infoCR();
void VIP();
void VIPSH();
void VIPSR();
void VIPKP();
void VIPKPI();
void VIPKPPR();
void VIPKPFO();
void VIPKPTZ();
void unosSR();
void masaSR();
void MAmasaSR();
void FPmasaSR();
void FTRmasaSR();
void ubrzanjeSR();
void ugao_ravniSR();
void ugao_ravniSRFP();
void ugao_ravniSRN();
void koeficijent_trenjaSR();
void unosMK();
void MKNI();
void MKT();
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
void unosKO();
void KOM1();
void KOM1M1();
void KOM1M2();
void KOM1A();
void KOM1T();
void KOM2();
void KOM2M1();
void KOM2M2();
void KOM2A();
void KOM2T();
void main()
{
char u[4],r,str1[]="SR",str2[]="MK",str3[]="SH",str4[]="DE",str5[]="INFO",strg[]="DA",strgg[]="NE",str6[]="KO";
int i1,i2,i3,i4,i5,g1,g2,i6;
float g=0;
do
{
a:
printf("Za strmu ravan unesite 'SR'.\nZa matematicko klatno unesite 'MK'.\nZa delovanje sile na telo na horizontalnoj podlozi unesite 'SH'.\nZa doplerov efekat unesite 'DE'.\nZa vise informacija unesite 'INFO'.\nZa kretanje tela oko kotura unesite 'KO'.\n");
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
i6=strcmp(u,str6);
if(i6==0)
{
unosKO();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0)
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
char u[3],str1[]="SR",str2[]="MK",str3[]="SH",str4[]="DE",str5[]="CR",str6[]="VIP",str7[]="NZ",str8[]="KO";
int i1,i2,i3,i4,i5,i6,i7,i8;
a:
printf("Unesite 'SR' za podatke o strmoj ravni.\nUnesite 'MK' za podatke o matematickom klatnu.\nUnesite 'SH' za podatke o delovanju sile na telo na horizontalnoj podlozi.\nUnesite 'DE' za podatke o doplerovom efektu.\nUnesite 'KO' za informacije o telima na koturu.\nUnesite 'CR' za podatke o autoru programa.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSR();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoMK();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoDE();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoCR();
}
i6=strcmp(u,str6);
if(i6==0)
{
VIP();
}
i7=strcmp(u,str7);
if(i7==0)
{
main();
}
i8=strcmp(u,str8);
if(i8==0)
{
infoKO();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSR()
{

}

void infoMK()
{

}

void infoSH()
{
char u[6],str1[]="JEDAN",str2[]="DVA",str3[]="TRI",str4[]="CETIRI",str5[]="NZ";
int i1,i2,i3,i4,i5;
a:
printf("Unesite 'JEDAN' ako su Vam potrebne informacije o delovanju sila jednog tela.\nUnesite 'DVA' ako su Vam potrebne informacije o delovanju sila dva tela koja su medjusobno povezana.\nUnesite 'TRI' ako su Vam potrebne informacije o delovanju sila tri tela koja su medjusobno povezana.\nUnesite 'CETIRI' ako su Vam potrebne informacije o delovanju sila cetiri tela koja su medjusobno povezana.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH1();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH2();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH3();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH4();
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
}

void infoSH1()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH1TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH1FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH1PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH1TZ()
{
printf("Silom F se deluje na telo koje se nalazi na horizontalnoj podlozi. Naci:\na)Masu tela.\nb)Ubrzanje tela.\nc)Silu kojom se deluje na telo.\nd)Koeficijent trenja podloge.\n");
}

void infoSH1FO()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ";
int i1,i2,i3,i4,i5;
a:
printf("Unesite 'M' za formule izracunavanja mase tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH1FOM();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH1FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH1FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH1FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH1();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH1FOM()
{
printf("m*a=F-Ftr1\nm*a=F-mi*m*g\nm*a+mi*m*g=F\nm*(a+mi*g)=F\nm=F/(a+mi*g)\n");
}

void infoSH1FOA()
{
printf("m*a=F-Ftr1\nm*a=F-mi*m*g\na=(F-mi*m*g)/m\n");
}

void infoSH1FOF()
{
printf("m*a=F-Ftr1\nm*a=F-mi*m*g\nF=m*a+mi*m*g\nF=m*(a+mi*g)\n");
}

void infoSH1FOMI()
{
printf("m*a=F-Ftr1\nm*a=F-mi*m*g\nmi*m*g=F-m*a\nmi=(F-m*a)/(m*g)\n");
}

void infoSH1PR()
{
printf("Primer:\nMasa:3 kg\nUbrzanje: 3 m/s^2\nSila: 18 N\nKoeficijent trenja: 0.30581\n");
}

void infoSH2()
{
char u[2],str1[]="DA",str2[]="NE",str3[]="NZ";
int i1,i2,i3;
a:
printf("Unesite 'DA' ako su mase svih tela jednake.\nUnesite 'NE' ako su mase tela razlicite.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH21();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH22();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH();
}
if(i1!=0&&i2!=0&&i3!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}
void infoSH21()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH21TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH21FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH21PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH2();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH21TZ()
{
printf("Silom F se deluje na dva tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu tela i silu zatezanja.\nb)Ubrzanje tela i silu zatezanja.\nc)Silu kojom se deluje na tela i silu zatezanja.\nd)Koeficijent trenja podloge i silu zatezanja.\ne)Silu zatezanja niti");
}

void infoSH21FO()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T";
int i1,i2,i3,i4,i5,i6;
a:
printf("Unesite 'M' za formule izracunavanja mase tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T' za izracunavanja sile zatezanja tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH21FOM();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH21FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH21FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH21FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH21();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH21FOT();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH21FOM()
{
printf("m*a=F-T-Ftr | m*a=T-Ftr (sabiramo jednacine)\n2*m*a=F-2*Ftr\n2*m*a+2*m*mi*g=F\nm*(2*a+2*mi*g)=F\nm=F/(2*a+2*mi*g)\n");
}

void infoSH21FOA()
{
printf("m*a=F-T-Ftr | m*a=T-Ftr (sabiramo jednacine)\n2*m*a=F-2*Ftr\na=(F-2*mi*m*g)/(2*m)\n");
}

void infoSH21FOF()
{
printf("m*a=F-T-Ftr | m*a=T-Ftr (sabiramo jednacine)\n2*m*a=F-2*Ftr\n2*m*a+2*mi*m*g=F\n2*m*(a+mi*g)=F\nF=2*m*(a+mi*g)\n");
}

void infoSH21FOMI()
{
printf("m*a=F-T-Ftr | m*a=T-Ftr (sabiramo jednacine)\n2*m*a=F-2*Ftr\n2*mi*m*g=F-2*m*a\nmi=(F-2*m*a)/(2*m*g)\n");
}

void infoSH21FOT()
{
printf("m*a=F-Ftr-T\nT=F-m*a-mi*m*g\nT=F-m*(a+mi*g)\n");
}

void infoSH21PR()
{
printf("Primer:\nMasa tela:1.5 kg\nUbrzanje: 3 m/s^2\nSila: 18 N\nKoeficijent trenja: 0.30581\nSila zatezanja T1:9 N\n");
}

void infoSH22()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH22TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH22FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH22PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH2();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH22TZ()
{
printf("Silom F se deluje na dva tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu prvog tela i silu zatezanja.\nb)Masu drugog tela i silu zatezanja.\nc)Ubrzanje tela i silu zatezanja.\nd)Silu kojom se deluje na tela i silu zatezanja.\ne)Koeficijent trenja podloge i silu zatezanja.\nf)Silu zatezanja niti");
}

void infoSH22FO()
{
char u[2],str1[]="M1",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T",str7[]="M2";
int i1,i2,i3,i4,i5,i6,i7;
a:
printf("Unesite 'M1' za formule izracunavanja mase prvog tela.\nUnesite 'M2' za formule izracunavanja mase drugog tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T' za izracunavanja sile zatezanja tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH22FOM1();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH22FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH22FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH22FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH22();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH22FOT();
}
i7=strcmp(u,str7);
if(i7==0)
{
infoSH22FOM2();    
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH22FOM1()
{

}

void infoSH22FOM2()
{

}

void infoSH22FOA()
{

}

void infoSH22FOF()
{

}

void infoSH22FOMI()
{

}

void infoSH22FOT()
{

}

void infoSH22PR()
{
printf("Primer:\nMasa prvog tela:2 kg\nMasa drugog tela:1 kg\nUbrzanje: 3 m/s^2\nSila: 18 N\nKoeficijent trenja: 0.30581\nSila zatezanja:6 N\n");
}

void infoSH3()
{
char u[2],str1[]="DA",str2[]="NE",str3[]="NZ";
int i1,i2,i3;
a:
printf("Unesite 'DA' ako su mase svih tela jednake.\nUnesite 'NE' ako su mase tela razlicite.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH31();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH32();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH();
}
if(i1!=0&&i2!=0&&i3!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH31()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH31TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH31FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH31PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH3();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH31TZ()
{
printf("Silom F se deluje na tri tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu tela i sile zatezanja.\nb)Ubrzanje tela i sile zatezanja.\nc)Silu kojom se deluje na tela i sile zatezanja.\nd)Koeficijent trenja podloge i sile zatezanja.\ne)Sile zatezanja niti");
}

void infoSH31FO()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T1",str7[]="T2";
int i1,i2,i3,i4,i5,i6,i7;
a:
printf("Unesite 'M' za formule izracunavanja mase tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T1' za izracunavanja prve sile zatezanja tela.\nUnesite 'T2' za izracunavanja druge sile zatezanja tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH31FOM();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH31FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH31FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH31FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH31();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH31FOT1();
}
i7=strcmp(u,str7);
if(i7==0)
{
infoSH31FOT2();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH31FOM()
{

}

void infoSH31FOA()
{

}

void infoSH31FOF()
{

}

void infoSH31FOMI()
{

}

void infoSH31FOT1()
{

}

void infoSH31FOT2()
{

}

void infoSH31PR()
{
printf("Primer:\nMasa tela:2 kg\nUbrzanje: 3 m/s^2\nSila: 36 N\nKoeficijent trenja: 0.30581\nSila zatezanja T1:24 N\nSila zatezanja T2:12 N\n");
}

void infoSH32()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH32TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH32FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH32PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH3();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}    
}

void infoSH32TZ()
{
printf("Silom F se deluje na tri tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu prvog tela i sile zatezanje.\nb)Masu drugog tela i sile zatezanja.\nc)Masu treceg tela i sile zatezanja.\nd)Ubrzanje tela i sile zatezanja.\ne)Silu kojom se deluje na tela i sile zatezanja.\nf)Koeficijent trenja podloge i sile zatezanja.\ng)Sile zatezanja niti");
}

void infoSH32FO()
{
char u[2],str1[]="M1",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T1",str7[]="M2",str8[]="T2",str9[]="M3";
int i1,i2,i3,i4,i5,i6,i7,i8,i9;
a:
printf("Unesite 'M1' za formule izracunavanja mase prvog tela.\nUnesite 'M2' za formule izracunavanja mase drugog tela.\nUnesite 'M3' za formule izracunavanja mase treceg tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T1' za izracunavanja sile zatezanja prvog tela.\nUnesite 'T2' za izracunavanja sile zatezanja drugog tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH32FOM1();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH32FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH32FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH32FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH32();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH32FOT1();
}
i7=strcmp(u,str7);
if(i7==0)
{
infoSH32FOM2();    
}
i8=strcmp(u,str8);
if(i8==0)
{
infoSH32FOT2();
}
i9=strcmp(u,str9);
if(i9==0)
{
infoSH32FOM3();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0&&i9!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH32FOM1()
{

}

void infoSH32FOM2()
{

}

void infoSH32FOM3()
{

}

void infoSH32FOA()
{

}

void infoSH32FOF()
{

}

void infoSH32FOMI()
{

}

void infoSH32FOT1()
{

}

void infoSH32FOT2()
{

}

void infoSH32PR()
{
printf("Primer:\nMasa prvog tela:3 kg\nMasa drugog tela:2 kg\nMasa treceg tela:1 kg\nUbrzanje: 3 m/s^2\nSila: 36 N\nKoeficijent trenja: 0.30581\nSila zatezanja T1:18 N\nSila zatezanja T2:6 N\n");
}

void infoSH4()
{
char u[2],str1[]="DA",str2[]="NE",str3[]="NZ";
int i1,i2,i3;
a:
printf("Unesite 'DA' ako su mase svih tela jednake.\nUnesite 'NE' ako su mase tela razlicite.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH41();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH42();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH();
}
if(i1!=0&&i2!=0&&i3!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH41()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH41TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH41FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH41PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH4();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH41TZ()
{
printf("Silom F se deluje na cetiri tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu tela i sile zatezanja.\nb)Ubrzanje tela i sile zatezanja.\nc)Silu kojom se deluje na tela i sile zatezanja.\nd)Koeficijent trenja podloge i sile zatezanja.\ne)Sile zatezanja niti");
}

void infoSH41FO()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T1",str7[]="T2",str8[]="T3";
int i1,i2,i3,i4,i5,i6,i7,i8;
a:
printf("Unesite 'M' za formule izracunavanja mase tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T1' za izracunavanja prve sile zatezanja tela.\nUnesite 'T2' za izracunavanja druge sile zatezanja tela.\nUnesite 'T3' za izracunavanja trece sile zatezanja tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH41FOM();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH41FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH41FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH41FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH41();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH41FOT1();
}
i7=strcmp(u,str7);
if(i7==0)
{
infoSH41FOT2();
}
i8=strcmp(u,str8);
if(i8==0)
{
infoSH41FOT3();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH41FOM()
{

}

void infoSH41FOA()
{

}

void infoSH41FOF()
{

}

void infoSH41FOMI()
{

}

void infoSH41FOT1()
{

}

void infoSH41FOT2()
{

}

void infoSH41FOT3()
{

}

void infoSH41PR()
{
printf("Primer:\nMasa tela:1.5 kg\nUbrzanje: 3 m/s^2\nSila: 36 N\nKoeficijent trenja: 0.30581\nSila zatezanja T1:27 N\nSila zatezanja T2:18 N\nSila zatezanja T3:9 N\n");
}

void infoSH42()
{
char u[2],str1[]="TZ",str2[]="FO",str3[]="PR",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'TZ' za ispis teksta zadatka.\nUnesite 'FO' za ispis formula koje se koriste u zadatku.\nUnesite 'PR' za primere promenjivih.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH42TZ();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH42FO();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH42PR();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH4();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}    
}

void infoSH42TZ()
{
printf("Silom F se deluje na cetiri tela koja se nalaze na horizontalnoj podlozi i koja su povezana su neistegljivom niti. Naci:\na)Masu prvog tela i sile zatezanje.\nb)Masu drugog tela i sile zatezanja.\nc)Masu treceg tela i sile zatezanja.\nd)Masu cetvrtog tela i sile zatezanja.\ne)Ubrzanje tela i sile zatezanja.\nf)Silu kojom se deluje na tela i sile zatezanja.\ng)Koeficijent trenja podloge i sile zatezanja.\nh)Sile zatezanja niti");
}

void infoSH42FO()
{
char u[2],str1[]="M1",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ",str6[]="T1",str7[]="M2",str8[]="T2",str9[]="M3",str10[]="M4",str11[]="T3";
int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
a:
printf("Unesite 'M1' za formule izracunavanja mase prvog tela.\nUnesite 'M2' za formule izracunavanja mase drugog tela.\nUnesite 'M3' za formule izracunavanja mase treceg tela.\nUnesite 'M4' za formule izracunavanja mase cetvrtog tela.\nUnesite 'A' za formule izracunavanja ubrzanja tela.\nUnesite 'F' za formule izracunavanja sile tela.\nUnesite 'MI' za formule izracunavanja koeficijenta trenja tela.\nUnesite 'T1' za izracunavanja sile zatezanja prvog tela.\nUnesite 'T2' za izracunavanja sile zatezanja drugog tela.\nUnesite 'T3' za izracunavanja sile zatezanja treceg tela.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
infoSH42FOM1();
}
i2=strcmp(u,str2);
if(i2==0)
{
infoSH42FOA();
}
i3=strcmp(u,str3);
if(i3==0)
{
infoSH42FOF();
}
i4=strcmp(u,str4);
if(i4==0)
{
infoSH42FOMI();
}
i5=strcmp(u,str5);
if(i5==0)
{
infoSH42();
}
i6=strcmp(u,str6);
if(i6==0)
{
infoSH42FOT1();
}
i7=strcmp(u,str7);
if(i7==0)
{
infoSH42FOM2();    
}
i8=strcmp(u,str8);
if(i8==0)
{
infoSH42FOT2();
}
i9=strcmp(u,str9);
if(i9==0)
{
infoSH42FOM3();
}
i10=strcmp(u,str10);
if(i10==0)
{
infoSH42FOM4();
}
i11=strcmp(u,str11);
if(i11=0)
{
infoSH42FOT3();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0&&i9!=0&&i10!=0&&i11!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void infoSH42FOM1()
{

}

void infoSH42FOM2()
{

}

void infoSH42FOM3()
{

}

void infoSH42FOM4()
{

}

void infoSH42FOA()
{

}

void infoSH42FOF()
{

}

void infoSH42FOMI()
{

}

void infoSH42FOT1()
{

}

void infoSH42FOT2()
{

}

void infoSH42FOT3()
{

}

void infoSH42PR()
{
printf("Primer:\nMasa prvog tela:2.25 kg\nMasa drugog tela:1.75 kg\nMasa treceg tela:1.25 kg\nMasa cetvrtog tela:0.75 kg\nUbrzanje: 3 m/s^2\nSila: 36 N\nKoeficijent trenja: 0.30581\nSila zatezanja T1:22.5 N\nSila zatezanja T2:12 N\nSila zatezanja T3:7.5 N\n");
}

void infoDE()
{

}

void infoKO()
{

}

void infoCR()
{
printf("Kodirao program i proracunao podatke za zadatke: Dusan Gvozdenovic 1/4.\nMentor: Dalibor Rajkovic.\n");
}
void VIP()
{
char u[3],str1[]="SH",str2[]="SR",str3[]="KP",str4[]="KPI",str5[]="NZ";
int i1,i2,i3,i4,i5;
a:
printf("Unesite 'SH' za custom tekst zadatka ove oblasti.\nUnesite 'SR' za custom tekst zadatka ove oblasti.\nUnesite 'KP' za zadatak o kolonizovanju planeta.\nUnesite 'KPI' za informacije o kolonizovanju planeta.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
VIPSH();
}
i2=strcmp(u,str2);
if(i2==0)
{
VIPSR();
}
i3=strcmp(u,str3);
if(i3==0)
{
VIPKP();
}
i4=strcmp(u,str4);
if(i4==0)
{
VIPKPI();
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
}

void VIPSH()
{
printf("Natprirodna sila deluje na kock(e)u i salje je ka piramidi Rtanj.\na)Izracunaj masu kocke.\nb)Izracunaj ubrzanje kocke.\nc)Izracunaj natprirodnu silu koja deluje na kocku.\nd)Izracunaj koeficijent trenja kocke sa podlogom.\n*Napomena:Tekst je namenjen osnovno za jedno telo, ali se mogu koristiti i opcije sa vise tela koja mogu biti istih ili razlicitih masa.Takodje opcija sa vise tela dobija opciju izracunavanja sile zatezanja.*\n");
}

void VIPSR()
{
printf("Dusan izbacuje ves masinu iz kuce. Dosetio se da preko stepenista stavi daske koje je nasao i tako spusti ves masinu. Pomozite Dusanu da nadje:\na)Masu ves masine.\nb)Ubrzanje ves masine pri spustanju niz daske.\nc)Koeficijent trenja izmedju daske i ves masine.\nd)Ugao u odnosu na stepeniste pri pustanju ves masine.\n*)Silu koja je potrebna da se polomi kost Dusanu ako doceka ves masinu(samo za takmicare)(nazalost nemoguce napraviti u programu).\n");
}

void VIPKP()
{
float gp,gama,m,r;
int i1,i2;
/*gama=0.0000000000667;*/
gama=6.67*pow(10,-11);
printf("Unesite masu planete i stepen broja mase(10 na x).\n");
scanf("%f%d",&m,&i1);
m=m*pow(10,i1);
printf("Unesite poluprecnik planete i stepen broja poluprecnika(10 na x)\n");
scanf("%f%d",&r,&i2);
r=r*pow(10,i2);
gp=gama*(m/(r*r));
printf("Gravitacija planete iznosi:%f.\n",gp);
if(gp<0)
{
printf("Gravitacija planete ne moze biti negativna.\n");
}
}

void VIPKPI()
{
char u[2],str1[]="PR",str2[]="FO",str3[]="TZ",str4[]="NZ";
int i1,i2,i3,i4;
a:
printf("Unesite 'PR' za primere podataka za kolonizovanje planeta.\nUnesite 'FO' za ispis formula potrebnih za izracunavanje gravitacije planete.\nUnesite 'TZ' za tekst zadatka.\nnUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
VIPKPPR();
}
i2=strcmp(u,str2);
if(i2==0)
{
VIPKPFO();
}
i3=strcmp(u,str3);
if(i3==0)
{
VIPKPTZ();
}
i4=strcmp(u,str4);
if(i4==0)
{
VIP();
}
if(i1!=0&&i2!=0&&i3!=0)
{
printf("Greksa u unosu parametara, ponovite unos.\n");
goto a;
}
}

void VIPKPPR()
{
printf("Primer 1:\nZa vrednost mase planete uzmite->5.97*10^24 kg\nZa vrednost poluprecnika planete uzmite->6.37*10^6 m\nGravitacija planete sa datim vrednostima iznosi 9.81344 m/s^2 i predstavlja gravitaciju zemlje.\nPrimer 2:\nZa vrednost mase planete uzmite->6.4171*10^23 kg\nZa vrednost poluprecnika planete uzmite->3.3962*10^6 m\nGravitacija planete sa datim vrednostima iznosi 3.71089 m/s^2 i predstavlja gravitaciju marsa(odakle je odeljenje 1/4).\n");
}

void VIPKPFO()
{
printf("Za izracunavanje gravitacije planeta koriscena je formula:\ng=gama*(m/r^2)\nGama-predstavlja konstantu gravitacije i iznosi:\n6.67*10^-11 N*m^2/kg^2\nm-predstavlja masu planete.\nr-predstavlja poluprecnik planete.\n");
}

void VIPKPTZ()
{
printf("Elon Mask je unajmio odeljenje 1/4 da radi za njegovu kompaniju 'SpaceX'. Posto mu je receno da odlicno poznaju fiziku zatrazio je od njih da izracunaju gravitaciju na novo pronadjenim planetama.\n");
}

void unosSR()
{
    char u[2],str1[]="M",str2[]="A",str3[]="U",str4[]="MI",str5[]="NZ";
    int i1,i2,i3,i4,i5;
    a:
    printf("Ako vam je potrebna masa unesite 'M'.\nAko vam je potrebno ubrzanje unesite 'A'.\nAko vam je potreban ugao ravni unesite 'U'.\nAko vam je potreban koeficijent trenja unesite 'MI'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
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
    i5=strcmp(u,str5);
    if(i5==0)
    {
    main();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void masaSR()
{
float a, mi, ftr, alfa, m;
char u[3],str1[]="MA",str2[]="FP",str3[]="FTR";
int i1,i2,i3;
a:
printf("Ako vam je potrebna masa tela, a imate m*ax unesite 'MA'.\nAko vam je potrebna masa tela, a imate paralelnu silu unesite 'FP'.\nAko vam je potrebna masa tela, a imate FTR unesite 'FTR'.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
MAmasaSR();
}
i2=strcmp(u,str2);
if(i2==0)
{
FPmasaSR();
}
i3=strcmp(u,str3);
if(i3==0)
{
FTRmasaSR();
}
if(i1!=0&&i2!=0&&i3!=0)
{
printf("Greska u unosu parametra, ponovite unos.\n");
goto a;
}
}

void MAmasaSR()
{
float a,m,mi,alfa,ma;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(0>a)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite m*ax tela.\n");
scanf("%f",&ma);
if(ma<0)
{
printf("m*ax ne moze biti negativno, ponovite unos.\n");
goto e;
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
printf("Unesite ugao ravni.\n");
scanf("%f", &alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto d;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
}
alfa=alfa/radian;
m=ma/a;
printf("Masa iznosi: %f\n", m);
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
void FPmasaSR()
{
float a,m,mi,alfa,fp;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(0>a)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite paralelnu silu tela.\n");
scanf("%f",&fp);
if(fp<0)
{
printf("FP ne moze biti negativno, ponovite unos.\n");
goto e;
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
printf("Unesite ugao ravni.\n");
scanf("%f", &alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto d;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
}
alfa=alfa/radian;
m=fp/(g*sin(alfa));
printf("Masa iznosi: %f\n", m);
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
void FTRmasaSR()
{
float a,m,mi,alfa,ftr;
char u[2],str[]="DA",str1[]="NE",str2[]="S",str3[]="T",str4[]="V";
float i,i1,i2,i3,i4;
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(0>a)
{
printf("Ubrzanje ne moze biti negativno. Ponovite unos.\n");
goto b;
}
e:
printf("Unesite silu trenja.\n");
scanf("%f",&ftr);
if(ftr<0)
{
printf("FP ne moze biti negativno, ponovite unos.\n");
goto e;
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
printf("Unesite ugao ravni.\n");
scanf("%f", &alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto d;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
}
alfa=alfa/radian;
m=ftr/(mi*g*cos(alfa));
printf("Masa iznosi: %f\n", m);
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
printf("Unesite ugao ravni.\n");
scanf("%f", &alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto d;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
}
alfa=alfa/radian;
a=g*(sin(alfa)-mi*cos(alfa));
printf("Ubraznje iznosi: %f\n", a);
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
float a, mi, ftr, alfa, m;
char u[2],str1[]="FP",str2[]="N";
int i1,i2,i3;
a:
printf("Ako vam je potreban ugao ravni, a imate paralelnu silu unesite 'FP'.\nAko vam je potreban ugao ravni, a imate silu reakcije podloge unesite 'N'.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
ugao_ravniSRFP();
}
i2=strcmp(u,str2);
if(i2==0)
{
ugao_ravniSRN();
}
if(i1!=0&&i2!=0)
{
printf("Greska u unosu parametra, ponovite unos.\n");
goto a;
}
}

void ugao_ravniSRFP()
{
float a,m,mi,alfa,sin,fp;
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
printf("Unesite ubrzanje.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Greska u unosu ubrzanja, ponovite unos.\n");
goto d;
}
l:
printf("Unesite paralelnu silu.\n");
scanf("%f", &fp);
if(fp<0)
{
printf("Paralelna sila ne moze biti negativna, ponovite unos.\n");
goto l;
}
sin=fp/(m*g);
alfa=asin(sin)*radian;
printf("Ugao ravni iznosi: %f\n", alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
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

void ugao_ravniSRN()
{
float a,m,mi,alfa,cos,n;
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
printf("Unesite ubrzanje.\n");
scanf("%f", &a);
if(a<0)
{
    printf("Greska u unosu ubrzanja, ponovite unos.\n");
goto d;
}
l:
printf("Unesite horizontalnu silu.\n");
scanf("%f", &n);
if(n<0)
{
printf("Paralelna sila ne moze biti negativna, ponovite unos.\n");
goto l;
}
cos=n/(m*g);
alfa=acos(cos)*radian;
printf("Ugao ravni iznosi: %f\n", alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto b;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
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
printf("Unesite ugao ravni.\n");
scanf("%f", &alfa);
if(alfa<0||alfa>89)
{
    printf("Neispravan unos nekog parametra ponovite unos.\n");
    goto d;
}
if(alfa==0)
{
    printf("Zamolio bih vas da koristite SH za izracunjavanja bez ugla ravni.\n");
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
char u[2],str1[]="NI",str2[]="T",str3[]="NZ";
int i1,i2,i3;
a:
printf("Ako imate frenkvenciju oscilovanja i potrebna Vam je duzina matematickog klatna unesite 'NI'.\nAko imate period oscilovanja i potrebna Vam je duzina matematickog klatna unesite 'T'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
MKNI();
}
i2=strcmp(u,str2);
if(i2==0)
{
MKT();
}
i3=strcmp(u,str3);
if(i3==0)
{
main();
}
if(i1!=0&&i2!=0&&i3!=0)
{
printf("Greska u unosu parametara, ponovite unos.\n");
goto a;
}
}

void MKNI()
{
char u[2],str1[]="DA",str2[]="NE";
float ni,t,x,l,i1,i2;
a:
printf("Unesite frenkvenciju oscilovanja matematickog klatna.\n");
scanf("%f", &ni);
if(ni<=0)
{
printf("Frenkvencija oscilovanja ne moze biti manja ili jednaka nuli, ponovite unos.\n");
goto a;
}
t=1/ni;
printf("Period oscilovanja matematickog klatna iznosi:%f",t);
if(t<=0)
{
printf("Greska u unosu parametra, ponovite unos.\n");
goto a;
}
l=pow((t/(2*pi)),2)*g;
printf("Duzina matematickog klatna u metrima iznosi:%f, a u centimetrima iznosi:%f\n",l,l*100);
if(l<=0)
{
printf("Greska u unosu parametra, ponovite unos.\n");
goto a;
}
d:
printf("Ako zelite da vidite koliko se amplituda moze izvrsiti u datoj frenkvenciji matematickog klatna unesite 'DA', u suprotnom 'NE'\n");
scanf("%s",&u);
i1=strcmp(u,str1);
i2=strcmp(u,str2);
if(i1!=0&&i2!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto d;
}
if(i1==0)
{
x=ni*4;
printf("Za vreme jedne sekunde se moze preci %f amplituda.\n",x);
}
}

void MKT()
{
char u[2],str1[]="DA",str2[]="NE";
float t,x,ni,l,i1,i2;
a:
printf("Unesite period oscilovanja matematickog klatna.\n");
scanf("%f",&t);
if(t<=0)
{
printf("Greska u unosu, period oscilovanja matematickog klatna ne moze biti negativan ili ravan nuli, ponovite unos.\n");
goto a;
}
l=pow((t/(2*pi)),2)*g;
printf("Duzina matematickog klatna u metrima iznosi:%f, a u centimetrima iznosi:%f\n",l,l*100);
if(l<=0)
{
printf("Greska u unosu parametra, ponovite unos.\n");
goto a;
}
b:
printf("Ako zelite da vidite frenkvenciju ovog matematickog klatna unesite 'DA', a u suprotnom 'NE'\n");
scanf("%s",&u);
i1=strcmp(u,str1);
i2=strcmp(u,str2);
if(i1!=0&&i2!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto b;
}
if(i1==0)
{
ni=1/t;
printf("Frenkvencija matematickog klatna iznosi:%f.\n",ni);
if(ni<=0)
{
    printf("Frenkvencija ne moze biti negativna ili ravna nuli, ponovite unos.\n");
    goto a;
}
d:
printf("Ako zelite da vidite koliko se amplituda moze izvrsiti u datoj frenkvenciji matematickog klatna unesite 'DA', u suprotnom 'NE'\n");
scanf("%s",&u);
i1=strcmp(u,str1);
i2=strcmp(u,str2);
if(i1!=0&&i2!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto d;
}
if(i1==0)
{
x=ni*4;
printf("Za vreme jedne sekunde se moze preci %f amplituda.\n",x);
}
}
}

void unosSH()
{
char u[6],str1[]="JEDAN",str2[]="DVA",str3[]="TRI",str4[]="CETIRI",str5[]="NZ";
int i1,i2,i3,i4,i5;
    a:
    printf("Ako imate jedno telo unesite 'JEDAN'.\nAko imate dva tela unesite 'DVA'.\nAko imate tri tela unesite 'TRI'.\nAko imate cetiri tela unesite 'CETIRI'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
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
    i5=strcmp(u,str5);
    if(i5==0)
    {
    main();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
    printf("Greska u unosu parametra, ponovite unos.\n");
    goto a;
}
}

void unosSH1()
{
char u[2],str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="NZ";
    int i1,i2,i3,i4,i5;
    a:
    printf("Ako vam je potrebna masa unesite 'M'.\nAko vam je potrebno ubrzanje unesite 'A'.\nAko vam je potrebna sila unesite 'F'.\nAko vam je potreban koeficijent trenja unesite 'MI'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
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
    i5=strcmp(u,str5);
    if(i5==0)
    {
    unosSH();
    }
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
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
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str99[]="NE",str8[]="NZ";
int i,i1,i2,i3,i4,i5,i6,i99,i7;
a:
printf("Ako su mase oba tela jednake, unesite 'DA' u suprotnom 'NE'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i7=strcmp(u,str8);
if(i7==0)
{
unosSH();
}
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i7!=0)
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0)
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
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str8[]="M3",str99[]="NE",str9[]="NZ";
int i,i1,i2,i3,i4,i5,i6,i7,i99,i8;
a:
printf("Ako su mase svih tela jednake, unesite 'DA' u suprotnom 'NE'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i8=strcmp(u,str9);
if(i8==0)
{
unosSH();
}
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i8!=0)
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0)
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
char u[2],str[]="DA",str1[]="M",str2[]="A",str3[]="F",str4[]="MI",str5[]="T",str6[]="M1",str7[]="M2",str8[]="M3",str9[]="M4",str99[]="NE",str10[]="NZ";
int i,i1,i2,i3,i4,i5,i6,i7,i8,i99,i9;
a:
printf("Ako su mase svih tela jednake, unesite 'DA' u suprotnom 'NE'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i9=strcmp(u,str10);
if(i9==0)
{
unosSH();
}
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i9!=0)
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
    if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0&&i6!=0&&i7!=0&&i8!=0&&i9!=0)
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

void unosKO()
{
char u[2],str1[]="M1",str2[]="M2",str3[]="NZ";
int i1,i2,i3;
a:
printf("Ako je masa prvog tela(levo) veca od mase drugog tela(desno) unesite 'M1'\nAko je masa drugog tela(desno) veca od mase prvog tela(levo) unesite 'M2'\nUkoliko su mase tela jednake nema kretanja, odnosno tela su u ravnotezi.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s", &u);
i1=strcmp(u,str1);
if(i1==0)
{
KOM1();
}
i2=strcmp(u,str2);
if(i2==0)
{
KOM2();
}
i3=strcmp(u,str3);
if(i3==0)
{
main();
}
if(i1!=0&&i2!=0&&i3!=0)
{
printf("Greska u unosu, ponovite unos.\n");
goto a;
}
}

void KOM1()
{
char u[2],str1[]="M1",str2[]="M2",str3[]="A",str4[]="T",str5[]="NZ";
int i1,i2,i3,i4,i5;
a:
printf("Ako Vam je potrebna masa prvog tela(levo-vece) i sila zatezanja unesite 'M1'.\nAko Vam je potrebna masa drugog tela(desno-manje) i sila zatezanja unesite 'M2'.\nAko Vam je potrebno ubrzanje tela i sila zatezanja unesite 'A'.\nAko Vam je potrebna samo sila zatezanja unesite 'T'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",&u);
i1=strcmp(u,str1);
if(i1==0)
{
KOM1M1();    
}
i2=strcmp(u,str2);
if(i2==0)
{
KOM1M2();
}
i3=strcmp(u,str3);
if(i3==0)
{
KOM1A();
}
i4=strcmp(u,str4);
if(i4==0)
{
KOM1T();
}
i5=strcmp(u,str5);
if(i5==0)
{
unosKO();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto a;
}
}

void KOM1M1()
{
float m1,m2,a,t;
a:
printf("Unesite masu drugog tela.\n");
scanf("%f",&m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto b;
}
m1=(-m2*(a+g))/(a-g);
printf("Masa prvog tela iznosi:%f\n",m1);
if(m1<=0)
{
printf("Masa prvog tela ne moze biti negativna ili ravna nuli, ponovite unos.\n");
goto a;
}
t=m2*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM1M2()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto b;
}
m2=(m1*(g-a))/(a+g);
printf("Masa drugog tela iznosi:%f\n",m2);
if(m2<=0)
{
printf("Masa drugog tela ne moze biti negativna ili ravna nuli, ponovite unos.\n");
goto a;
}
t=m2*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM1A()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto b;
}
a=(g*(m1-m2))/(m1+m2);
printf("Ubrzanje tela iznosi:%f\n",a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto a;
}
t=m2*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM1T()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto b;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto c;
}
t=m2*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM2()
{
char u[2],str1[]="M1",str2[]="M2",str3[]="A",str4[]="T",str5[]="NZ";
int i1,i2,i3,i4,i5;
a:
printf("Ako Vam je potrebna masa prvog tela(desno-vece) i sila zatezanja unesite 'M1'.\nAko Vam je potrebna masa drugog tela(levo-manje) i sila zatezanja unesite 'M2'.\nAko Vam je potrebno ubrzanje tela i sila zatezanja unesite 'A'.\nAko Vam je potrebna samo sila zatezanja unesite 'T'.\nUnesite 'NZ' da biste se vratili jedan korak nazad.\n");
scanf("%s",&u);
i1=strcmp(u,str1);
if(i1==0)
{
KOM2M1();    
}
i2=strcmp(u,str2);
if(i2==0)
{
KOM2M2();
}
i3=strcmp(u,str3);
if(i3==0)
{
KOM2A();
}
i4=strcmp(u,str4);
if(i4==0)
{
KOM2T();
}
i5=strcmp(u,str5);
if(i5==0)
{
unosKO();
}
if(i1!=0&&i2!=0&&i3!=0&&i4!=0&&i5!=0)
{
printf("Greska u unosu ponovite unos.\n");
goto a;
}
}

void KOM2M1()
{
float m1,m2,a,t;
a:
printf("Unesite masu drugog tela.\n");
scanf("%f",&m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto b;
}
m1=(m2*(g-a))/(a+g);
printf("Masa prvog tela iznosi:%f\n",m1);
if(m1<=0)
{
printf("Masa prvog tela ne moze biti negativna ili ravna nuli, ponovite unos.\n");
goto a;
}
t=m1*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM2M2()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto b;
}
m2=(-m1*(a+g))/(a-g);
printf("Masa drugog tela iznosi:%f\n",m2);
if(m2<=0)
{
printf("Masa drugog tela ne moze biti negativna ili ravna nuli, ponovite unos.\n");
goto a;
}
t=m1*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void KOM2A()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto b;
}
a=(g*(m2-m1))/(m1+m2);
printf("Ubrzanje tela iznosi:%f\n",a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto a;
}
t=m1*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}

void  KOM2T()
{
float m1,m2,a,t;
a:
printf("Unesite masu prvog tela.\n");
scanf("%f",&m1);
if(m1<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto a;
}
b:
printf("Unesite masu drugog tela.\n");
scanf("%f", &m2);
if(m2<=0)
{
printf("Masa tela ne moze biti negativna, ponovite unos.\n");
goto b;
}
c:
printf("Unesite ubrzanje tela.\n");
scanf("%f", &a);
if(a<=0)
{
printf("Ubrzanje ne moze biti negativno ili ravno nuli u ovom slucaju, ponovite unos.\n");
goto c;
}
t=m1*(a+g);
printf("Sila zatezanja iznosi:%f\n",t);
if(t<=0)
{
printf("Sila zatezanja ne moze biti negativna ili jednaka nuli, ponovite unos.\n");
goto a;
}
}