@echo off

set BUILD_FOLDER=out_make
set PRO_FOLDER=..\..
set PRO_NAME=cvsandbox.pro

if "%1"=="clean" (
    echo "Cleaning cvsandbox.exe build ..."
    
    rd /S /Q %BUILD_FOLDER%
    
) else (

    if "%QT_MSVC_BIN%"=="" (
        echo "Cannot build cvsandbox.exe because Qt's MSVC binary folder is not set (QT_MSVC_BIN)."
        goto EOF
    )

    mkdir %BUILD_FOLDER%
    cd %BUILD_FOLDER%
        
    %QT_MSVC_BIN%\qmake.exe ..\%PRO_FOLDER%\%PRO_NAME%
    
    if "%1"=="debug" (
        nmake -f Makefile.Debug
    ) else (
        nmake -f Makefile.Release
    )
    
    cd ..
)

:EOF
