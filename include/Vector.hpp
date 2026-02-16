// Author: Apostolos Chalis 2026 <cs05414@uowm.gr> 
#include <vector>

class Vector {
private:
    std::vector<double> components; 

public:
    explicit Vector(std::vector<double> comps) : components(std::move(comps)) {}

    static void print_version();
    static Vector from_points(const std::vector<double>& A, const std::vector<double>& B);

    double get(size_t index) const;
    size_t dim() const { return components.size(); }
};
