#include <iostream>
#include <cassert>
#include <stdexcept>
#include <cmath>
import math;

void test_basic_operations() {
    std::cout << "🧪 测试基础运算...\n";
    
    assert(math::add(2, 3) == 5);
    assert(math::subtract(10, 4) == 6);
    assert(math::multiply(3, 7) == 21);
    assert(std::abs(math::divide(15.0, 3.0) - 5.0) < 1e-9);
    
    std::cout << "✅ 基础运算测试通过\n";
}

void test_advanced_operations() {
    std::cout << "🧪 测试高级运算...\n";
    
    assert(std::abs(math::power(2.0, 3) - 8.0) < 1e-9);
    assert(std::abs(math::power(5.0, 0) - 1.0) < 1e-9);
    assert(std::abs(math::power(2.0, -2) - 0.25) < 1e-9);
    
    assert(std::abs(math::square_root(16.0) - 4.0) < 1e-9);
    assert(std::abs(math::square_root(9.0) - 3.0) < 1e-9);
    
    std::cout << "✅ 高级运算测试通过\n";
}

void test_geometry() {
    std::cout << "🧪 测试几何计算...\n";
    
    // 测试圆面积计算
    double area = math::circle_area(1.0);
    assert(std::abs(area - math::pi) < 1e-9);
    
    // 测试圆周长计算
    double circumference = math::circle_circumference(1.0);
    assert(std::abs(circumference - 2 * math::pi) < 1e-9);
    
    // 测试矩形面积
    assert(std::abs(math::rectangle_area(3.0, 4.0) - 12.0) < 1e-9);
    
    std::cout << "✅ 几何计算测试通过\n";
}

void test_error_handling() {
    std::cout << "🧪 测试错误处理...\n";
    
    // 测试除零错误
    try {
        math::divide(1.0, 0.0);
        assert(false); // 不应该到达这里
    } catch (const std::invalid_argument&) {
        // 预期的异常
    }
    
    // 测试负数开方错误
    try {
        math::square_root(-1.0);
        assert(false); // 不应该到达这里
    } catch (const std::invalid_argument&) {
        // 预期的异常
    }
    
    // 测试负半径错误
    try {
        math::circle_area(-1.0);
        assert(false); // 不应该到达这里
    } catch (const std::invalid_argument&) {
        // 预期的异常
    }
    
    std::cout << "✅ 错误处理测试通过\n";
}

int main() {
    std::cout << "=== C++20 模块测试程序 ===\n\n";
    
    try {
        test_basic_operations();
        test_advanced_operations();
        test_geometry();
        test_error_handling();
        
        std::cout << "\n🎉 所有测试通过！模块功能正常！\n";
        
    } catch (const std::exception& e) {
        std::cout << "❌ 测试失败: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
}