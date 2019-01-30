
IF "x%1" == "x" (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen
  %GENS% %CD%\out\rom.bin
) ELSE IF "%1" == "test" (
  %GENS% %CD%\out\rom.bin
) ELSE IF "%1" == "debug" (
  %GDK_WIN%\bin\make -f %GDK_WIN\makefile.gen cleandebug
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen debug
) ELSE (
  %GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen %1
) 
