#include <iostream>
#include "arbreavl.h"

void test0(){
    std::cerr << "test0():" ;
    {
        ArbreAVL<int> a1;
        a1.inserer(2);
    }
    std::cerr << "OK" << std::endl;
}

bool test1(){
    std::cerr << "test1():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(5);
        a2.inserer(7);
        ok = a1==a2;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;
}

bool test2(){
    std::cerr << "test2():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2(a1);
        ok = a1==a2;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;
}

bool test3(){
    std::cerr << "test3():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(2);
        a2.inserer(4);
        ok = !(a1==a2);
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;
}

bool test4(){
    std::cerr << "test4():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(2);
        a2.inserer(4);
        a2=a1;
        ok = a1==a2;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;
}

bool test5(){
    std::cerr << "test4():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(7);
        a2.inserer(5);
        ok = a1==a2;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;    
}

bool test6(){
    std::cerr << "test6():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(7);
        a2.inserer(5);
        a2.inserer(7);
        ok = a1==a2;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;    
}

bool test7(){
    std::cerr << "test7():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(7);
        a2.inserer(5);
        a2.inserer(9);
        ok = !(a1==a2);
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;    
}

bool test10(){
    std::cerr << "test10():" ;
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(1);
        a1.inserer(3);
        ArbreAVL<int> a2;
        a2.inserer(4);
        a2.inserer(6);
        a2.inserer(8);

        ArbreAVL<int> a3;
        a3 = unionn<int>(a1, a2);

        ArbreAVL<int> a4;
        a4.inserer(1);
        a4.inserer(3);
        a4.inserer(4);
        a4.inserer(6);
        a4.inserer(8);
        ok = a3==a4;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;    
}

bool test11(){
    std::cerr << "test11():";
    bool ok;
    {
        ArbreAVL<int> a1;
        a1.inserer(1);
        a1.inserer(3);
        a1.inserer(5);
        a1.inserer(7);
        ArbreAVL<int> a2;
        a2.inserer(0);
        a2.inserer(1);
        a2.inserer(2);
        a2.inserer(3);
        a2.inserer(4);

        ArbreAVL<int> a3;
        a3 = inter(a1, a2);

        ArbreAVL<int> a4;
        a4.inserer(1);
        a4.inserer(3);
        ok = a3==a4;
    }
    std::cerr << (ok ? "OK" : "Échec!") << std::endl;
    return ok;    
}

int main(){
    test0();
    int nb_types_erreur=0;
    if(!test1()) nb_types_erreur++;
    if(!test2()) nb_types_erreur++;
    if(!test3()) nb_types_erreur++;
    if(!test4()) nb_types_erreur++;
    if(!test5()) nb_types_erreur++;
    if(!test6()) nb_types_erreur++;
    if(!test7()) nb_types_erreur++;
    if(!test10()) nb_types_erreur++;
    if(!test11()) nb_types_erreur++;
    
    return nb_types_erreur;
}





