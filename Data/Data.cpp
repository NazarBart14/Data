class CMyDate
{
    int day;
    int month;
    int year;

public:
    CMyDate();
    CMyDate(int d, int m, int y);

    void SetDate(int d, int m, int y);
    int GetDay(void);
    int GetMonth(void);
    int GetYear(void);
};

CMyDate::CMyDate()
{
    day = 1;
    month = 1;
    year = 1900;
}

CMyDate::CMyDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void CMyDate::SetDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

int CMyDate::GetDay(void)
{
    return day;
}

int CMyDate::GetMonth(void)
{
    return month;
}

int CMyDate::GetYear(void)
{
    return year;
}

CMyDate MD1;
CMyDate MD2(3, 6, 1912); 

int main()
{
    int t;

    t = MD1.GetDay();
    t = MD1.GetYear();

    t = MD2.GetMonth();
    t = MD2.GetYear();
}