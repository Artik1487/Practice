int main() {
    double A, B, C;
    cout << "Введите коэффициенты 1-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type1 eq1;
    cout << "Введите коэффициенты 2-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type2 eq2(B);
    cout << "Введите коэффициенты 3-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type3 eq3(C);
    cout << "Введите коэффициенты 4-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type4 eq4(A, C);
    cout << "Введите коэффициенты 5-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type5 eq5(B, C);
    cout << "Введите коэффициенты 6-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type6 eq6(A, B, C);
    cout << "Введите коэффициенты 7-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type7 eq7(B);
    cout << "Введите коэффициенты 8-го уравнения A, B и C через пробел: " <<
         endl;
    cin >> A >> B >> C;
    type8 eq8(A, B);
    eq1.show();
    eq1.Get_answer();
    eq2.show();
    eq2.Get_answer();
    eq3.show();
    eq3.Get_answer();
    eq4.show();
    eq4.Get_answer();
    eq4.Get_answer_podbor();
    eq5.show();
    eq5.Get_answer();
    eq5.Get_answer_podbor();
    eq6.show();
    eq6.Get_answer();
    eq6.Get_answer_podbor();
    eq7.show();
    eq7.Get_answer();
    eq8.show();
    eq8.Get_answer();
    eq8.Get_answer_podbor();
    return 0;
}