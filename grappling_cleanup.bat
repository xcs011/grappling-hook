cd C:\Windows\System32
rmdir /s grappling-hook
taskkill /IM cmd.exe
(goto) 2>nul & del "%~f0"