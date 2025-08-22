add_rules("mode.debug", "mode.release")

-- 设置C++20标准
set_languages("c++20")

-- 数学模块目标
target("math_module")
    set_kind("moduleonly")
    add_files("modules/math.cppm")

-- 主程序目标
target("main")
    set_kind("binary")
    add_files("main.cpp")
    add_deps("math_module")

-- 测试程序目标
target("test")
    set_kind("binary")
    add_files("tests/test.cpp")
    add_deps("math_module")

