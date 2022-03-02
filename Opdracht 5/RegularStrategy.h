#include "Strategy.h"

class RegularStrategy : public Strategy {
    public:
        RegularStrategy();
        ~RegularStrategy();

        void future(std::vector<std::vector<int>> &matrix) override;
};