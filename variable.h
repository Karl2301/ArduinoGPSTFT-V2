static const int RXPin = 4, TXPin = 5;
static const uint32_t GPSBaud = 9600;
const int redPin = 10;
const int greenPin = 9;
const int bluePin = 11;
const int chipSelect = 53;
char Time[]   = "Time: 00:00:00";
char Date[]   = "Date: 00-00-2000";
char TRAJET[] = "00000000";
uint16_t nbFichiers = 0;    // nombre de fichiers sur la carte SD
uint16_t noFichier; // le fichier en cours
unsigned long key_value = 0;
unsigned long octetFile;
byte trajet = 0;
byte blacklight = 1;
byte typefile = 0;
byte last_second, Second, Minute, Hour, Day, Month;
byte initvaldef = 0;
float oldlatnow  = 0.0;
float oldlonnow  = 0.0;
float latNOW = 0;
float lonNOW = 0;
float distance = 0.0;
float distanceparcouru = 0.0;
float distancecalc = 0.0;
float h;
float t;
float tr;
float DParcourue;
byte decalecatam = 0;
int jsonrecup = 0;
byte waitheure;
byte numtel = 1;
byte numfiletel = 1;
byte numtelenter = 1;
byte nouvtel = 0;
byte tablefinish = 0;
int compteTemps = 0;
int secondeTrajet = 0;
int minuteTrajet = 0;
byte heureTrajet = 0;
int nbrheure;
byte MaxSat = 0;
int MaxSpeed = 0;
int MaxAlt = 0;
byte distancechoix = 1;
int calculeladistance = 0;
byte nbrdecharlat = 0;
byte nbrpointlat = 0;
byte nbrpointlon = 0;
byte nbrdecharlon = 0;
int menuparametre = 0;
int ligne = 0;
int satconnection = 0;
byte numcodeun = 0;
byte numcodedeux = 0;
byte numcodetrois = 0;
byte numcodequatre = 0;
byte numcodecinq = 0;
byte numcodesix = 0;
byte comptenumcode = 0;
int choixlcd = 1;
int menuselectorlcd = 0;
int menuselectortrajet = 0;
int menuparam = 1;
int effafich = 0;
String Savejour;
byte menu = 1;
int onglet = 6;
byte menuselector = 0;
int Year;
String typedefichier = "";
String trajetencour;
String fileInfoStr;
String tablenewtel[19] = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
String IRdatatel = "";
String latDesti = "";
String lonDesti = "";
String StrlonDesti = "";
String StrlatDesti = "";
String nameFile;
String jour;
String Code  = "ABCDEF";
String NCode  = "ABCDEF";
String codeverif = "";
String nomFichier;
String clavier = "";
String Saveclavier;
int clavierdigit = 0;
double GPSLONG;
double GPSLAT;
float GPSSPEED;
float GPSALT;
float GPSDEG;
int GPSSAT;
int GPSHOURS;
int GPSMINUTES;
int GPSSECONDES;
int GPSDAY;
int GPSMONTH;
int GPSYEAR;

int frequenceSD;
int activelog;
int activecode;
int reptrajet;
String tailledufichier = "";
String extentionfichier = "";
String fichierseul;

int MaxSatellite;
int MaxAltitude;
int MaxVitesse;
int compteTempsTrajet;
int distanceparcouruTrajet;
int heuredata;
int minutedata;
int secondedata;

String Maxsatstr;
String MaxAltstr;
String MaxSpeedstr;
String compteTempsstr;
String distanceparcourustr;
String heureduTrajet;
String minuteduTrajet;
String secondeduTrajet;

String heureGPS = "00";
String minutesGPS = "00";
String secondeGPS = "00";
String jourGPS = "00";
String moisGPS = "00";
String anneGPS = "00";

String nomSansExtentionsDuFichier ="";
String nomExtentionsDuFichier ="";
