#include <Windows.h>


void Draw_Bricks(HDC hdc, int left_margin, int height_margin)
{
    int left_position = 24;
    int top_positin = 18;
    int right_positin = 74;
    int bottom_positin = 48;
    HBRUSH hbrush = CreateSolidBrush(RGB(255, 85, 255));
    SelectObject(hdc, hbrush);
    Rectangle(hdc, left_position + left_margin, top_positin + height_margin, right_positin + left_margin, bottom_positin + height_margin);   //317
}

void Drawe_Frame(HDC hdc)
{
    int step_width = 50;
    int step_height = 30;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Draw_Bricks(hdc, step_width * j, step_height * i);
        }
    }
}

void Drawe_Platform(HDC hdc)
{
    Ellipse(hdc, 475, 520, 485, 530);
}

void Print_Game(HDC hdc)
{
    Drawe_Frame(hdc);
    Drawe_Platform(hdc);

}