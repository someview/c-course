export module math;

#include <stdexcept>
#include <cmath>

export namespace math {
    // 数学常量
    constexpr double pi = 3.14159265358979323846;
    constexpr double e = 2.71828182845904523536;
    
    // 基础算术运算
    export int add(int a, int b) {
        return a + b;
    }
    
    export int subtract(int a, int b) {
        return a - b;
    }
    
    export int multiply(int a, int b) {
        return a * b;
    }
    
    export double divide(double a, double b) {
        if (b == 0.0) {
            throw std::invalid_argument("Division by zero");
        }
        return a / b;
    }
    
    // 高级数学函数
    export double power(double base, int exponent) {
        if (exponent == 0) return 1.0;
        if (exponent < 0) {
            return 1.0 / power(base, -exponent);
        }
        
        double result = 1.0;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
    
    export double square_root(double x) {
        if (x < 0) {
            throw std::invalid_argument("Cannot calculate square root of negative number");
        }
        return std::sqrt(x);
    }
    
    // 几何函数
    export double circle_area(double radius) {
        if (radius < 0) {
            throw std::invalid_argument("Radius cannot be negative");
        }
        return pi * radius * radius;
    }
    
    export double circle_circumference(double radius) {
        if (radius < 0) {
            throw std::invalid_argument("Radius cannot be negative");
        }
        return 2 * pi * radius;
    }
    
    export double rectangle_area(double width, double height) {
        if (width < 0 || height < 0) {
            throw std::invalid_argument("Width and height cannot be negative");
        }
        return width * height;
    }
}