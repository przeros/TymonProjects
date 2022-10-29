#include <iostream>

using namespace std;

int countImageWidth(int k)
{
    return 2 * k + 3;
}

int countImageHeight(int k)
{
    int height = 2; //pień
    for (int i = 1; i <= k; ++i)
    {
        height += i + 1;
    }

    return height;
}

void drawImage(int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << ".";
        }
        cout << endl;
    }
}

void drawTrunk(int width)
{
    for (int x = 0; x < width; x++)
    {
        if (x < ((width / 2)))
            cout << ".";
        else if (x > ((width / 2)))
            cout << ".";
        else
            cout << "X";
    }
    cout << endl;
    for (int x = 0; x < width; x++)
    {
        if (x < ((width / 2)))
            cout << ".";
        else if (x > ((width / 2)))
            cout << ".";
        else
            cout << "X";
    }
}

void drawTree(int k, int width)
{
    for (int x = 1; x <= k; x++)
    {
        for (int y = 0; y < x + 1; y++)
        {
            for (int z = 0; z < width; z++)
            {
                if (z < ((width / 2) - y))
                    cout << ".";
                else if (z > ((width / 2) + y))
                    cout << ".";
                else
                    cout << "X";
            }
            cout << endl;
        }
    }
    drawTrunk(width);
}

int main()
{
    int numberOfLevels;
    cout << "Podaj ilosc poziomow: ";
    cin >> numberOfLevels;
    int h = countImageHeight(numberOfLevels);
    int w = countImageWidth(numberOfLevels);
    //drawImage(h, w);
    drawTree(numberOfLevels, w);

    return 0;
}

