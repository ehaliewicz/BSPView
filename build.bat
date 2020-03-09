
IF "x%1" == "x" (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen
  %GENS% %CD%\out\rom.bin
) ELSE IF "%1" == "test" (
  %GENS% %CD%\out\rom.bin
) ELSE IF "%1" == "debug" (
  %GDK_WIN%\bin\make -f %GDK_WIN\makefile.gen cleandebug
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen debug
) ELSE IF "%1" == "rebuild_sgdk" (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makelib.gen cleanrelease
  %GDK_WIN%\bin\make -f %GDK_WIN%\makelib.gen cleandebug
  %GDK_WIN%\bin\make -f %GDK_WIN%\makelib.gen release
) ELSE IF "%1" == "clean_sgdk" (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makelib.gen cleanrelease
  %GDK_WIN%\bin\make -f %GDK_WIN%\makelib.gen cleandebug
) ELSE (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen %1
) 
