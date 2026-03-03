#include <iostream>
#include <string>

using namespace std;

class RobotPemadam {
private:
    int jarak;         
    string status;    

public:
    void inputSensor(int j) {
        jarak = j;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        } else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        } else if (jarak <= 5) {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    }
};

int main() {
    RobotPemadam bot;
    int inputUser;

    while (true) {
        cout << "Masukkan angka (simulasi input sensor): ";
        cin >> inputUser;

        if (inputUser == 67) {
            cout << "Program dihentikan." << endl;
            break;
        }

        bot.inputSensor(inputUser);
        bot.prosesLogika();
        bot.cetakStatus();
        cout << "-------------------------------------------" << endl;
    }

    return 0;
}