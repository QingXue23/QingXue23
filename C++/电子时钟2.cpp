#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

using namespace std;
using namespace std::chrono;

class Clock {
public:
    Clock(const time_t t) {
        tm* local = localtime(&t);
        m_hour = local->tm_hour;
        m_min = local->tm_min;
        m_sec = local->tm_sec;
    }

    void run() {
        while (true) {
            cout << m_hour << ":" << m_min << ":" << m_sec << endl;
            cout.flush(); // ȷ���������

            // �ȴ�һ����
            this_thread::sleep_for(seconds(1));

            // ����ʱ��
            m_sec++;
            if (m_sec == 60) {
                m_sec = 0;
                m_min++;
            }
            if (m_min == 60) {
                m_min = 0;
                m_hour++;
            }
            if (m_hour == 24) {
                m_hour = 0;
            }
        }
    }

private:
    int m_hour;
    int m_min;
    int m_sec;
};

int main() {
    Clock c(time(0));
    cout << "Press enter to stop the clock..." << endl;
    cin.get(); // �ȴ��û����룬�Ա��˳�
    c.run();
    return 0;
}