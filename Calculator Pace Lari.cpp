#include <iostream> 
#include <iomanip>

using namespace std;

void calculatepace(double distance, int hours, int minutes, int seconds) {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    double paceSeconds = totalSeconds / distance;
    int paceMinutes = static_cast<int>(paceSeconds) / 60;
    int paceRemainingSecs = static_cast<int>(paceSeconds) % 60;

    cout << "Pace yang harus Anda gunakan untuk menempuh " << distance << " km dalam waktu " << hours << ":" << minutes << ":" 
    << setfill('0') << setw (2) << seconds << " adalah " << paceMinutes << ":" << setfill('0') << setw (2) << paceRemainingSecs << " menit per kilometer" << endl;

}

int main() {
    double distance;
    int hours, minutes, seconds;

    cout << "Kalkulator Pace Lari" << endl;
    do {
    cout << "Berapa jarak yang ingin anda tempuh?(dalam kilometer)" ;
    cin >> distance;
    if (distance <=0) {
        cout << " Jarak yang anda masukkan tidak valid, silakan coba lagi. " << endl;
    }
 }  while (distance <=0);

    do {
    cout << "Masukkan target waktu anda lari berapa jam: ";
    cin >> hours;

    cout << "Masukkan target waktu anda lari berapa menit: ";
    cin >> minutes;

    cout << "Masukkan target waktu anda lari berapa detik: ";
    cin >> seconds;
if (hours < 0 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
            cout << "Waktu yang anda masukkan tidak valid. Menit dan detik harus di antara 0 hingga 59." << endl;
        }
    } while (hours < 0 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60);

    calculatepace(distance, hours, minutes, seconds);
    
    return 0;
 
}

