#pragma once

#include <valarray>


class CPositionUpdater
{
public:
    CPositionUpdater(int rows, int cols);

    void differentiate(const std::valarray<double>& current_array,
                       std::valarray<double>& results_array) const;

private:
    const int m_rows;
    const int m_cols;
};