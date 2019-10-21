/*
 ________  ________  ________  ___  ___   ________  ___       ___  ________  ________  ________  ___  ________
 |\   __  \|\   __  \|\   __  \|\  \|\  \ |\   __  \|\  \     |\  \|\   __  \|\   ____\|\_____  \|\  \|\   ____\
 \ \  \|\  \ \  \|\  \ \  \|\  \ \  \/  /|\ \  \|\  \ \  \    \ \  \ \  \|\  \ \  \___|_\|___/  /\ \  \ \  \___|_
  \ \   __  \ \   ____\ \  \\\  \ \   ___  \ \   __  \ \  \    \ \  \ \   ____\ \_____  \   /  / /\ \  \ \_____  \
   \ \  \ \  \ \  \___|\ \  \\\  \ \  \\ \  \ \  \ \  \ \  \____\ \  \ \  \___|\|____|\  \ /  /_/__\ \  \|____|\  \
    \ \__\ \__\ \__\    \ \_______\ \__\\ \__\ \__\ \__\ \_______\ \__\ \__\     ____\_\  \\________\ \__\____\_\  \
     \|__|\|__|\|__|     \|_______|\|__| \|__|\|__|\|__|\|_______|\|__|\|__|    |\_________\|_______|\|__|\_________\
 */
#define RESET   "\033[0m"       /* Reset */
#define BLACK   "\033[30m"      /* Black */
#define GRAY    "\033[1;30m"    /* Gray */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#include <iostream>
#include "stdlib.h"
#include <unistd.h>

using namespace std;

int main()
    {
        //clearing and setting the size of the terminal, setting the cursor to line,column: 1
        cout << "\033[2J\033[1;1H";
        cout << "\e[8;50;150t";
        
        cout <<"------------------------------------------------------------------------------------------ " <<endl;
        cout <<"------------------------------------------------------------------------------------------ " <<endl;
        cout << "   █████╗ ██████╗  ██████╗ ██╗  ██╗ █████╗ ██╗     ██╗██████╗ ███████╗███████╗██╗███████╗ " <<endl;
        cout << "  ██╔══██╗██╔══██╗██╔═══██╗██║ ██╔╝██╔══██╗██║     ██║██╔══██╗██╔════╝╚══███╔╝██║██╔════╝ " <<endl;
        cout << "  ███████║██████╔╝██║   ██║█████╔╝ ███████║██║     ██║██████╔╝███████╗  ███╔╝ ██║███████╗ " <<endl;
        cout << "  ██╔══██║██╔═══╝ ██║   ██║██╔═██╗ ██╔══██║██║     ██║██╔═══╝ ╚════██║ ███╔╝  ██║╚════██║ " <<endl;
        cout << "  ██║  ██║██║     ╚██████╔╝██║  ██╗██║  ██║███████╗██║██║     ███████║███████╗██║███████║ " <<endl;
        cout << "  ╚═╝  ╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝╚═╝     ╚══════╝╚══════╝╚═╝╚══════╝ " <<endl;
        cout <<"------------------------------------------------------------------------------------------ " <<endl;
        cout <<"------------------------------------------------------------------------------------------ " <<endl;
   
        char név[100];
        cout << BOLDRED << "\n!!!----------------------Első fejezet: Prológus----------------------!!!" << RESET << endl;
        cout << GRAY << "### Egy kórházban ébredsz. Nem emlékszel semmire, nem tudod mi történt, amikor elindulsz kifelé az épületből, felfigyelsz egy fura hangra." << RESET << endl;
        cout << "Vénember: Hogy hívnak fiam ?" << endl;
        cout << "Te:";
        cin.getline(név, 100);
        cout << "Vénember: Gyere velem " << név << " ha nem akarod, itt tölteni az éjszakát !" << endl;
        cout << GRAY << "\n----------------------Nyomj egy gombot a folytatáshoz----------------------" << RESET << endl;
  

        int választás_első=0;
        int választás_második=0;
        int választás_harmadik=0;
        int választás_negyedik=0;
        unsigned short int erőnlét=0;
        unsigned short int kitartás=0;
        unsigned short int intelligencia=0;
        cout << GRAY << "### Követed a vénembert ?" << RESET << endl;
        cout << GRAY << "\t >> Nyomj '1'-et ha követni szeretnéd a vénembert." << RESET << endl;
        cout << GRAY << "\t >> Nyomj '2'-t ha a saját utanod szeretnél továbbmenni." << RESET << endl;
        cout << GRAY << "\n A választásod: " RESET ;
        cin >> választás_első;
        
    vissza_választás_első: if (választás_első == 1)
        {
            cout << BOLDRED << "\n!!!----------------------Második fejezet: A Város----------------------!!!" << RESET << endl;
            cout << "Te: Hová megyünk ?" << endl;
            cout << "Vénember: Lassan megtudod, csak kövess tovább." << endl;
            cout << GRAY << "### A vénember nyomaiban lépkedsz előre." << RESET << endl;
            cout << GRAY << "### Ahogyan haladtok előre, lassan kikörvonalazódnak előtted egy város épületei. Amint a városkapuhoz értek, a vénembert egyből felismerik és köszöntik. Téged pedig megkérnek arra, hogy mutatkozz be." << RESET << endl;
            cout << GRAY << "### Az erősségeidre kiváncsiak." << RESET  << endl;
            cout << GRAY << "### A három fő érték az: Erőnlét, Kitartás, Intelligencia" << RESET  << endl;
            cout << GRAY << "### Kérlek adj hozzá értékeket ! [1-10]" << RESET  << endl;
            cout << "Erőnlét:";
            cin >> erőnlét;
            cout << "Kitartás:";
            cin >> kitartás;
            cout << "Intelligencia:";
            cin >> intelligencia;
        
            if ((erőnlét > 5 && erőnlét <11) && (kitartás > 5 && kitartás <11) && (intelligencia >5 && intelligencia <11))
                {
                    cout << "Őr: Óh, hát ez egy kellemes meglepetés. Remélem hasznodat fogjuk venni a város fejlődésében és a járvány megfékezésében. Gyere beljebb !" << endl;
                    cout << BOLDRED << "\n!!!----------------------Harmadik fejezet: A Felszerelés----------------------!!!" << RESET << endl;
                    cout << "Te: Hova menjek először, vagy mit kellene most tennem ?" << endl;
                    cout << "Őr: Először menj Willi-hez, hogy kapj némi vizet és ételt, majd keresd meg Robin-t és kérdezd meg tőle miben tudsz segíteni !" << endl;
                    cout << "Te: Merre találom őket ? " << endl;
                    cout << "Őr: Willi mindig a város szélén levő tónál ül a kis bódéjában, őt ott találod, Robin-t pedig a fegyverraktár mellett." << endl;
                    cout << "Te: Rendben, köszönöm!" << endl;
                    cout << GRAY << "### Elindulsz a tó felé, és lassan a távolban meglátsz egy kissé tépett embert, miközben éppen alkoholt kortyolgat és dohányt szív." << RESET  << endl;
                    cout << "Te: Üdvözletem, most vagyok itt először és az Őr a kapunál azt mondta, hogy téged keresselek meg. Te vagy Willi igaz ?" << endl;
                    cout << "Willi: Jó helyen jársz vándor, gondolom élelem és víz miatt jöttél." << endl;
                    cout << "Te: Igen." << endl;
                    cout << "Willi: Csak egy kevés kenyeret és ivóvizet tudok adni, mert nagyon fogynak a készletek a járvány és a sok beteg miatt." << endl;
                    cout << "Te: Mit lehet tudni erről az egész járványról ?" << endl;
                    cout << "Willi: Konkrét válasz nincs rá sajnos, mindenki csak találgat. Van aki azt mondja egy biológia fegyver okozta, van aki azt mondja, hogy egy magától kialakult vírus hozta magával, és vannak akik azt mondják, hogy maga az Isten csapása a bűneinkért." << endl;
                    cout << "Willi: Bár az utolsó inkább badarság mint tényleges ok, viszont mindenki azon dolgozik, hogy megtalálja a járvány okát és feltalálja annak ellenszerét." << endl;
                    cout << "Te: Értem, eléggé fura, hogy egyébként semmit nem lehet tudni erről az egészről pontosan. Na mindegy is, azt mondták, miután beszéltem veled menjek Robin-hoz és, hogy valami fegyverraktárnál kellene keresnem. Meg tudod mondani merre menjek ?" << endl;
                    cout << "Willi: Persze, gyere velem, megmutatom. Úgy sincs jobb dolgom." << endl;
                }
            else if (!(erőnlét >= 5) && !(kitartás >= 5) && !(intelligencia >= 5))
                {
                    cout << "Őr: Sajnálom, de nem hinném, hogy hasznodat tudjuk venni a város fejlődésében. Élelmet és vizet kapsz, de nem maradhatsz a városban !" << endl;
                    cout << BOLDRED << "\n!!!----------------------Harmadik fejezet: A Választás----------------------!!!" << RESET << endl;
                    cout << GRAY << "### Miután megkaptad a vizet és az élelmet, a várost magad mögött hagyva elindulsz egy kitaposott úton. Egy idő után észreveszed, hogy az út egy sűrű erdőn keresztül vezet." << RESET  << endl;
                    cout << GRAY << "\n----------------------Nyomj egy gombot a folytatáshoz----------------------" << RESET << endl;
                    cout << GRAY << "### Követed az utat az erdőbe, vagy más irányt veszel ?" << RESET << endl;
                    cout << GRAY << "\t >> Nyomj '1'-et ha követni szeretnéd az utat az erdőbe." << RESET << endl;
                    cout << GRAY << "\t >> Nyomj '2'-t ha másik irányba szeretnél menni." << RESET << endl;
                    cout << GRAY <<"\n A választásod: " << RESET;
                    cin >> választás_második;
                    
            
            vissza_választás_második: if (választás_második == 1)
                        {
                            cout << BOLDRED << "\n!!!----------------------Negyedik fejezet: Az Erdő----------------------!!!" << RESET << endl;
                            cout << GRAY << "### Lassan elkezdesz befelé menni az erdő sűrűjébe, fura hangokat hallasz, bizonytalanul lépkedsz előre." << RESET  << endl;
                        }
            
                    else if (választás_második == 2)
                        {
                            cout << BOLDRED << "\n!!!----------------------Negyedik fejezet: A Kereskedő----------------------!!!" << RESET << endl;
                            cout << GRAY << "### Ahogyan haladsz tovább az úton az erdő mellett, egyszercsak felbukkan egy alak előtted egy szamárral. Odalépsz hozzá." << RESET  << endl;
                            cout << "Te: Jó napot uram !" << endl;
                            cout << "Kereskedő: A napok már régóta nem jók..." << endl;
                            cout << "Te: Látom árulsz dolgokat, megmutatod a kínálatot ?" << endl;
                            cout << "Kereskedő: Nem sok mindent tudok kínálni manapság de persze, mutatom is:" << endl;
                            cout << "Kés   " << "Élelem   " << "Víz   " << "Gránát   " << "Kötszer   " << "Kabát   " << endl;
                        }
                
                    else
                        {
                            cout << BOLDRED << "Helytelen gomblenyomás, kérlek '1' és '2' közül válassz! " << RESET << endl;
                            goto vissza_választás_második;
                        }
                }
            else
            {
                 cout << BOLDRED << "Helytelen gomblenyomás, kérlek [1-10] közül válassz! " << RESET << endl;
                goto vissza_választás_első;
            }
        }
    else if (választás_első == 2)
        {
            cout << BOLDRED << "\n!!!----------------------Második fejezet: Az Út ----------------------!!!" << RESET << endl;
            cout << "Te: A saját utamat járom, nincs szükségem segítségre, viszont lenne pár kérdésem." << endl;
            cout << "Vénember: Bolond vagy ! Csak megöleted magad odakint, de kérdezz nyugodtan!" << endl;
            cout << "Te: Nem emlékszem semmire. Hol vagyok ? Hol vannak az emberek ?" << endl;
            cout << "Vénember: Mi az utolsó emléked ? Van családod ?" << endl;
            cout << "Te: Munkából tartottam hazafelé, pont a családomhoz. Van egy kisfiam és egy feleségem." << endl;
            cout << "Vénember: Sajnálom fiam, de a családod már valószínűleg nem él." << endl;
            cout << "Te: Micsoda ? Miről beszélsz ? Miért ne élnének még ?" << endl;
            cout << "Vénember: Egy járvány tört ki, gondolom azért nem tudsz róla mert eszméleteden kívül voltál." << endl;
            cout << GRAY << "### Látsz egy újságot magad mellett megfogod és a dátumot keresed" << RESET << endl;
            cout << "Te: Január 29 ? Te jó ég!" << endl;
            cout << "Vénember: Gyere velem, segíthetek neked!" << endl;
            cout << GRAY <<"\n----------------------Nyomj egy gombot a folytatáshoz----------------------" << RESET << endl;
            cout << GRAY << "### Követed a vénembert ?" << RESET  << endl;
            cout << GRAY << "\t >> Nyomj '1'-et ha követni szeretnéd a vénembert." << RESET << endl;
            cout << GRAY << "\t >> Nyomj '2'-t ha nem szeretnél vele menni." << RESET << endl;
            cout << GRAY << "\n A választásod: " << RESET ;
            cin >> választás_harmadik;
            
            vissza_választás_harmadik:  if (választás_harmadik == 1 )
           {
            cout << "Te: Rendben, hová megyünk ?" << endl;
           
           }
            if (választás_harmadik == 2 )
            {
                cout << BOLDRED << "\n!!!----------------------Harmadik fejezet: A Szembesülés ----------------------!!!" << RESET << endl;
            cout << "Te: Nem tartok veled, nem tudom mi van a családommal, megkeresem őket!" << endl;
            cout << GRAY << "### Pár saroknyira laksz, elindulsz hazafelé. Mikor megérkezel a ház üres látványa fogad. Belépve a feleséged élettelen testét veszed észre, a kisfiad pedig nem találod sehol, viszont találsz egy tetemet, nem tudod eldönteni, hogy az micsoda. " << RESET << endl;
            cout << GRAY << "###Eltemeted a feleséged, észreved, hogy lassan lenyugszik a nap, így a házban maradsz estére. Az este folyamán fura, ismeretlen hangokat hallasz. Elkezdesz kutakodni a házban és minden használhatót magadhoz veszel: Öngyűjtó, Kés, Ásó, Zseblámpa." << RESET << endl;
            cout << GRAY << "### Egész éjjel nem alszol a fura hangok miatt, miután felkelt a nap, elinduslz élelmet és vizet keresni." << RESET << endl;
            cout << GRAY << "### Meglátsz egy boltot, bemész, remélve, hogy találsz élelmet. Miután belépsz és szerzel pár konzervet és vizet, meghallod azt a hangot amit éjszaka is hallottál. Ahogy a hang egyre közeledik, választanod kell:" << endl;
                cout <<"\n----------------------Nyomj egy gombot a folytatáshoz----------------------" << endl;
                cout << GRAY << "\t >> Nyomj '1'-et ha úgy döntesz, hogy elbújsz." << RESET << endl;
                cout << GRAY << "\t >> Nyomj '2'-t ha úgy döntesz, hogy elmenekülsz." << RESET << endl;
                cout << GRAY << "\t >> Nyomj '3'-t ha úgy döntesz, hogy követed a hangot." << RESET << endl;
                cout << GRAY << "\n A választásod: " << RESET ;
                cin >> választás_negyedik;

            }
            else
            {
                cout << BOLDRED << "Helytelen gomblenyomás, kérlek '1' és '2' közül válassz! " << RESET << endl;
                goto vissza_választás_harmadik;
            }
              if (választás_negyedik == 1)
              {
                  cout << GRAY << "### Elbújsz." << RESET << endl;
                  cout << GRAY << "### Lassan elhalkulnak a számodra ismeretlen hangok, sajnos nem láttad meg, mi vagy ki adja ki ezeket a hangokat." << RESET << endl;
              }
              else if (választás_negyedik == 2)
              {
                  cout << GRAY << "### Elmenekülsz." << RESET << endl;
                  cout << GRAY << "### Egy hátsó kijáraton keresztül elmenekülsz, tovább futsz, amíg nem érzed magad biztonságban." << RESET << endl;
              }
                else if (választás_negyedik == 3)
                {
                    cout << GRAY << "### Követed a hangot." << RESET << endl;
                    cout << GRAY << "### Nem hagy nyugodni mi lehet ez a hang, úgyhogy megpróbálsz minél közelebb kerülni hozzá, hogy megtudd mi is ez valójában." << RESET << endl;
                }
        }
    else
        {
            cout << BOLDRED << "Helytelen gomblenyomás, kérlek '1' és '2' közül válassz! " << RESET << endl;
            
        }
        
cout << BOLDRED <<"\n----------------------SZERKESZTÉS ALATT!----------------------" << RESET << endl;
        return 0;
    }


