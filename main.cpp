#include <iostream>

int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};
    std::cout << "var1 : " << var1 << std::endl;
    std::cout << "var2 : " << var2 << std::endl;
    std::cout << "var3 : " << var3 << std::endl;
    std::cout << "var4 : " << var4 << std::endl;
    std::cout << "var5 : " << var5 << std::endl;
    std::cout << "**************" << std::endl;
    std::cout << std::endl;
    // into modifier suffixes
    auto var6{123u};  // unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    std::cout << "var6 : " << var6 << std::endl;
    std::cout << "var7 : " << var7 << std::endl;
    std::cout << "var8 : " << var8 << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
    
    return 0;
}