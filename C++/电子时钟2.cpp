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
            cout.flush(); // 确保立即输出

            // 等待一秒钟
            this_thread::sleep_for(seconds(1));

            // 更新时间
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
    cin.get(); // 等待用户输入，以便退出
    c.run();
    return 0;
}