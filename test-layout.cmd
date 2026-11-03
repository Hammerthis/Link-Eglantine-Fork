@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
"C:\Program Files\LLVM\bin\clang-cl.exe" /nologo /std:c++20 /EHsc work/starfox/test_image_layout.cpp /Fework/starfox/test_image_layout.exe /Fowork/starfox/test_image_layout.obj
if errorlevel 1 exit /b 1
work\starfox\test_image_layout.exe
