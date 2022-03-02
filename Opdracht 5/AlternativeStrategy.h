#include "Strategy.h"

class AlternativeStrategy : public Strategy {
    public:
        AlternativeStrategy() {};
        ~AlternativeStrategy() {};

        void future(std::vector<std::vector<int>> &matrix) override;
};