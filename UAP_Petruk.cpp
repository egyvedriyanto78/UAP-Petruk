/*
	Kelompok :
	Egy Vedriyanto 2117051035
	Ferisna Yanti Hima 2117051056
	Firman Ahmad Bayumi 2117051062
	
	Tema : "Tumpukan Barang pembelian dalam totebag supermarket"
*/

#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

void output(stack <string> stack)
{
    cout << "\n\t============================================\n";
    
    if(stack.empty())
    {
        cout << "\t\t\tTotebag kosong !";
    }
    else
    {
        while(!stack.empty())
        {
            cout << "\t" << stack.top() << endl;
            stack.pop();
        }
    }

    cout << "\n\t============================================\n";
}

void program()
{
    stack <string> stack;
    char totebag[150];
    int menu;

    while(true)
    {
        system("cls");
        output(stack);

        cout << "\t============================================\n"
		     << "\t||   [1] Masukkan barang belanjaan        ||\n"
		     << "\t||   [2] Total barang belanjaan           ||\n"
		     << "\t||   [3] Ambil barang belanjaan           ||\n"
		     << "\t||   [4] Keluar program                   ||\n"
		     << "\t============================================\n" 
		     << "\n\tInput menu : "; cin >> menu;
        
        cout << endl;

        switch(menu)
        {
            case 1 :
                    cout << "Barang : ";
                    cin.ignore(1,'\n');
                    gets(totebag);
                    stack.push(totebag);

                    cout << "\n" << totebag << " telah dimasukkan ke dalam totebag\n";
                    getch ();
                    break;
            
            case 2 :
                    cout << "Ada " << stack.size() << " barang di dalam totebag" << endl;
                    getch();
                    break;
            
           case 3 :
                    if(!stack.empty())
                    {
                        cout << "\n" << stack.top() << " telah diambil\n";
                        stack.pop();
                    }
                    else
                    {
                        cout << "Totebag kosong !";
                    }
                    getch();
                    break;
            
            case 4 :
                    cout << "Terima Kasih telah menggunakan program ini.";
                    exit(1);
                    getch();
                    break;
            
            default :
                    cout << "Error !";
                    getch();
        }
    }
}

int main()
{
    program();
    return 0;
}
/*
sadfhyaowufyhwoafhwa;efuhaweufhwieafafgbkadfasfkawefgkawefgbwea
weafweaifnhoweafhoweuafgbeawkafgahejgfawuyfgahfgbkadf
weafhyiweafgiegfwe
fewfhnweifhgeiwfweifoewugfweofe
gewg
ewg
wrge
wg
ewgewgwe
geg
ewg
ewgew
ge
wgew
g
ewge
wg
ewg
egwe
g
ewgwe
gewg
ew
ge
wg
ewg
ew
gew
gew
g
ewg
eweg
wege
wg
ewg
weg
weeg
gehgakghoaferghoehgerg
ergregerwgresgresg
ergregsergb
stegsebesfberswgrg
gsethtshesfgdsgtes
segsegsdfbsetbhset
setbsetbsebsdgbstr
setbstgbstrbtrsbb
stnstrnsebtsfstrb
setbtnbsnbsrbnbsdbsdb
ststnbsdgfbsdbst
sgbsdbsdtbstbs
tgbstgbstgbtgs
bsdgbsdgbsrtbst
gbsrtbsrtgbsrtbstrb
tsrbsbstbsdbsdfbsdbtse
bstbstb
trsbstg
btstb
stbst
bs
tbs
fgn
*/
