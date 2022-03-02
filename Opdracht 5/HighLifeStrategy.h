#include "Strategy.h"

class HighLifeStrategy : public Strategy {
    public:
        HighLifeStrategy() {};
        ~HighLifeStrategy() {};

        void future(std::vector<std::vector<int>> &matrix) override;
};