#include "iostream"
#include"ctime"
#include"windows.h"
using namespace std;

class Clock
{
    public:
    Clock(const time_t t)
    {
        tm* local = localtime(&t);
        m_hour = local->tm_hour;
        m_min = local->tm_min;
        m_sec = local->tm_sec;

    }
    void run()
    {
        while(1)
        {
           cout<<m_hour<<":"<<m_min<<":"<<m_sec<<endl;
         if(m_sec == 60)
           {
              m_sec = 0;
              m_min++;
           }
        
          if(m_min == 60)
          {
              m_min = 0;
              m_hour++;
          }
          if(m_hour == 24)
          {
              m_hour = 0;
          }
          Sleep(1000);
          system("cls");
        }
    }
    private:
    int m_hour;
    int m_min;
    int m_sec;
};
int main()
{
    Clock c(time(0));
c.run();
    return 0;
}