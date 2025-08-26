#include <iostream>
#include <stdexcept>
#include <iomanip>
import math;

int main() {
    std::cout << "=== C++20 模块示例程序 ===\n\n";
    
    try {
        // 测试基础数学运算
        std::cout << "📊 基础数学运算：\n";
        std::cout << "10 + 5 = " << math::add(10, 5) << "\n";
        std::cout << "10 - 5 = " << math::subtract(10, 5) << "\n";
        std::cout << "10 * 5 = " << math::multiply(10, 5) << "\n";
        std::cout << "10.0 / 3.0 = " << std::fixed << std::setprecision(3) << math::divide(10.0, 3.0) << "\n";
        
        std::cout << "\n🔢 高级数学运算：\n";
        std::cout << "2^8 = " << math::power(2.0, 8) << "\n";
        std::cout << "√16 = " << math::square_root(16.0) << "\n";
        std::cout << "π = " << std::setprecision(6) << math::pi << "\n";
        std::cout << "e = " << math::e << "\n";
        
        std::cout << "\n📐 几何计算：\n";
        double radius = 5.0;
        std::cout << "半径为" << radius << "的圆：\n";
        std::cout << "  面积 = " << std::setprecision(2) << math::circle_area(radius) << "\n";
        std::cout << "  周长 = " << math::circle_circumference(radius) << "\n";
        
        double width = 4.0, height = 6.0;
        std::cout << "长" << width << "宽" << height << "的矩形面积 = " << math::rectangle_area(width, height) << "\n";
        
    } catch (const std::exception& e) {
        std::cout << "❌ 错误: " << e.what() << "\n";
        return 1;
    }
    
    std::cout << "\n✅ 程序执行完成！\n";
    return 0;
}