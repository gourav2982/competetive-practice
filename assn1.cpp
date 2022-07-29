#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    int buildHeight[] = {7, 4, 8, 2, 9};
    int a = 0; //this is to make and array with building height which will get sun light
    int sunLighteast[5];
    int tallestBuild=0;
    string direction;
    cout<< "Input the direction were sun is 'east' or 'west': "<<endl;
    cin >> direction;
    for(int i=0;i<5;i++){
        if(tallestBuild<buildHeight[i]){
            tallestBuild = buildHeight[i];
        }
        else if(tallestBuild>=buildHeight[i]){
            tallestBuild = tallestBuild ;
        }
        
    }
    cout<<"Building height which will get the sun light first is :"<<tallestBuild<<endl;
    if (direction != "east" && direction != "west")
    {
        cout << "Invalid Input";
        return 0;
    }
    if (direction == "east")
    {
        for (int i = 0; i < 5; i++)
        {
            if (buildHeight[i] < buildHeight[i + 1])
            {
                continue;
            }
            else
            {
                for (int j = i + 1; j < 5; j++)
                {
                    if (buildHeight[i] < buildHeight[j])
                    {

                        break;
                    }
                    if (j == 4)
                    {
                        sunLighteast[a] = buildHeight[i];
                        
                        a++;
                    }
                }
            }
        }
        sunLighteast[a] = buildHeight[4];
        cout<<"Building height that will get sunlight are:"<<endl;
        for (int i = 0; i < a + 1; i++)
        {
            cout << sunLighteast[i] << endl;
        }
    }
    else if (direction == "west")
    {
        for (int i = 1; i < 5; i++)
        {
            if (buildHeight[i] < buildHeight[i - 1])
            {
                continue;
            }
            else
            {

                for (int j = i - 1; j >= 0; j--)
                {
                    if (buildHeight[i] < buildHeight[j])
                    {
                        break;
                    }
                    if (j == 0)
                    {
                        sunLighteast[a] = buildHeight[i];
                        
                        a++;
                    }
                }
            }
        }
        sunLighteast[a] = buildHeight[0];
        cout<<"Building height that will get sunlight are:"<<endl;
        for (int i = 0; i < a + 1; i++)
        {
            cout << sunLighteast[i] << endl;
        }
    }
}