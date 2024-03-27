#include "CalculateCgpa.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

double CgpaCalculator(double marks[], int number)
{
    double grade[number];

    double cgpa = 0;
    double sum = 0;

    for (int i = 0; i < number; i++)
    {
        grade[i] = (marks[i] / 10);
    }

    for (int i = 0; i < number; i++)
    {
        sum += grade[i];
    }

    cgpa = sum / number;

    return cgpa;
}

int InitialiseCgpaCalculator()
{
    int number = 5;
    double marks[] = {90, 80, 70, 80, 90};

    double cgpa = CgpaCalculator(marks, number);

    cout << "CGPA = ";
    printf("%.1f\n", cgpa);
    cout << "CGPA Percentage = ";
    printf("%.2f%%\n", cgpa * 9.5);

    return 0;
}
