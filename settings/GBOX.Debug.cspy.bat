@REM This batch file has been generated by the IAR Embedded Workbench
@REM C-SPY Debugger, as an aid to preparing a command line for running
@REM the cspybat command line utility using the appropriate settings.
@REM
@REM Note that this file is generated every time a new debug session
@REM is initialized, so you may want to move or rename the file before
@REM making changes.
@REM
@REM You can launch cspybat by typing the name of this batch file followed
@REM by the name of the debug file (usually an ELF/DWARF or UBROF file).
@REM
@REM Read about available command line parameters in the C-SPY Debugging
@REM Guide. Hints about additional command line parameters that may be
@REM useful in specific cases:
@REM   --download_only   Downloads a code image without starting a debug
@REM                     session afterwards.
@REM   --silent          Omits the sign-on message.
@REM   --timeout         Limits the maximum allowed execution time.
@REM 


"D:\common\bin\cspybat" "D:\430\bin\430proc.dll" "D:\430\bin\430fet.dll"  %1 --plugin "D:\430\bin\430bat.dll" --backend -B "--hardware_multiplier" "32" "--hwmult_type" "8" "-p" "D:\430\config\debugger\MSP430F5438A.ddf" "--core=430Xv2" "--data_model=small" "--iv_base" "0xFF80" "--cpu_bug_30" "-d" "fet" "--erase_main" "--derivative" "MSP430F5438A" "--protocol" "spy-bi-wire-jtag" "--eem" "EMEX_LARGE_5XX" "--port" "Automatic" "--connection" "ti_usb" "--settlingtime=0" "--msp430_dll" "msp430.dll" "--vccDefault" "3.3" "--jtag_speed" "fast" "--memtype" "F" 


