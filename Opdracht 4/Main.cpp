#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <numeric>

int main() { 
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na

        std::vector<std::string> a1;
        std::vector<std::string> a2;

        std::for_each(colours.begin(), colours.end(), [&a1, &a2](std::string color) {
            color < "purple" ? a1.push_back(color) : a2.push_back(color) ;
        });

        for (std::string s : a1)
            std::cout << s << std::endl;

        std::cout << "a1 ^   a2 v" << std::endl;

        for (std::string s : a2)
            std::cout << s << std::endl;

        std::cout << "----------------------------------" << std::endl;
    }
    
    
    {
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 2) alle elementen UPPERCASE te maken.

        std::for_each(colours.begin(), colours.end(), [](std::string &color) {
            std::transform(color.begin(), color.end(), color.begin(), ::toupper);
            std::cout << color << std::endl;
        });

        std::cout << "----------------------------------" << std::endl;
    }


    {
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 3) alle dubbele te verwijderen

        std::sort(colours.begin(), colours.end());

        colours.erase(std::unique(colours.begin(), colours.end()), colours.end());

        std::for_each(colours.begin(), colours.end(), [](std::string s) {
            std::cout << s << std::endl;
        });

        std::cout << "----------------------------------" << std::endl;
    }

    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 1) alle negatieve elementen te verwijderen

        std::sort(numbers.begin(), numbers.end());
        
        numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());

        std::for_each(numbers.begin(), numbers.end(), [](double d) {
            std::cout << d << std::endl;
        });

        std::cout << "----------------------------------" << std::endl;
    }


    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 2) voor alle elementen te bepalen of ze even of oneven zijn

        std::for_each(numbers.begin(), numbers.end(), [](double d) {
            std::string result = ((int)d % 2 == 0 ? " is even." : " is odd.");
            std::cout << d << result << std::endl;
        });

        std::cout << "----------------------------------" << std::endl;
    }


    {
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 3) de som, het gemiddelde, en het product van alle getallen te berekenen

        auto sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        auto product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<double>());

        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Average: " << (sum / numbers.size()) << std::endl;
        std::cout << "Product: " << product << std::endl;

        std::cout << "----------------------------------" << std::endl;
    }

    return 0;
}