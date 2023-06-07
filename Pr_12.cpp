//4-й тип:
void Get_answer_podbor() {
    if ((((-1) * C) / A) < 0) {
        cout << "Корней методом подбора нет" << endl;
    } else {
        double min = abs(0 - A * (-20) * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - A * (i) * (i) - C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
}
//5-й тип:
void Get_answer_podbor() {
    double min = abs(0 - B * (-20) - C);
    double x = -20;
    for (double i = -20; i < 20.01; i = i + 0.01) {
        double temp = abs(0 - B * (i) - C);
        if (temp < min) {
            min = temp;
            x = i;
        }
    }
    cout << "Приближенно, один из корней уравнения: " << x << endl;
}
//6-й тип:
void Get_answer_podbor() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "Уравнение не имеет действительных корней" << endl;
    } else {
        double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - A * (i) * (i) - B * i - C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
}
//8-й тип:
void Get_answer_podbor() {
    double min = abs(0 - A * (-20) * (-20) - B * (-20));
    double x = -20;
    for (double i = -20; i < 20.01; i = i + 0.01) {
        if (i != 0) {
            double temp = abs(0 - A * i * i - B * (i));
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
    }
    cout << "Приближенно, один из корней уравнения: " << x << endl;
}