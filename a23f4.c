#include <stdio.h>
#include "simpio.h"

bool Valid_Time (int hours,int min,int sec);

int main()
{
    int hours,min,sec;

    printf("Dose ores");
    hours=GetInteger();
    printf("Dose lepta");
    min=GetInteger();
    printf("Dose deuterolepta");
    sec=GetInteger();

    if (Valid_Time(hours,min,sec))
    {
        printf("WRA EGKYRH\n");

    }
    else
    {
        printf("WRA MH EGKYRH\n");
    }
    system("PAUSE");
    return 0;
}

bool Valid_Time(int hours, int min, int sec)
{
    if (hours>=0&&hours<=23)
    {
        if(min>=0&&min<=59)
        {
            if (sec>=0&&sec<=59)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}
