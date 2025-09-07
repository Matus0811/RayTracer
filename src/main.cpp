#include <iostream>

int main() {
    //Image
    int image_height {256};
    int image_width {256};
    
    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";
    

    for (int i{0}; i < image_height; i++)
    {
        for (int j{0}; j < image_width; j++)
        {
            auto g = static_cast<double>(i) / (image_height - 1);
            auto r = static_cast<double>(j) / (image_width - 1);
            auto b = 0.0;

            int ig = static_cast<int>(255.999 * g);
            int ir = static_cast<int>(255.999 * r);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << std::endl;
        }
    }
    return 0;
}
