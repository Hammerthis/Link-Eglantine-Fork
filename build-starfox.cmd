@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
set "PATH=C:\Program Files\LLVM\bin;C:\Program Files\Git\usr\bin;C:\VulkanSDK\1.4.357.0\Bin;%PATH%"
"C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" --build work/selevet-build --target yuzu --parallel 8
