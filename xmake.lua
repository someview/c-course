-- xmake.lua

add_rules("mode.release", "mode.debug")
set_languages("c++20")

-- 在这里添加配置，禁用模块扫描
set_config("scan_module_deps", false)

target("mod")
    set_kind("static")
    add_files("modules/math.cppm", {public = true})

target("cpp_with_moduledeps")
    set_kind("binary")
    add_deps("mod")
    add_files("main.cpp")