# SAME54_GCC

A GNU GCC Toolchain project template for Microchip ATSAME54 series MCU.

### Project Architecture
```
SAME54_GCC
|    Makefile
|    README.md
|    LICENSE
|    .gitignore
|
|────Core
|    |    main.c
|
|────Device_Startup
|    |    same54p20a.ld
|    |    startup_same54p20a.c
|
|────Drivers
|    |────CMSIS
|    |────HAL
|    |────SAME54_BSP
|    └────SAME54_DFP
|
|────UnitTest
|         test.c
```

- `/Core`
    - `main.c`
    - User can add `user.c/user.h` in this folder.
- `/Device_Startup`
    - `same54p20a.ld` linker script. (provide by Microchip)
    - `startup_same54p20a.c` startup file. (provide by Microchip)
- `/Drivers`
    - CMSIS (Common Microcontroller Software Interface Standard) , including ARM core related files. (provide by ARM)
    - HAL, Hardware Abstract Layer. (user can add customer code here)
    - SAME54_BSP, Board Support Package. (provide by Microchip)
    - SAME54_DFP, Device Family Packs. (provide by Microchip)
- `/UnitTest`
    - User can add test.c here. Every test.c will build separately (Every test.c should include its own main() function).

### How to use?
The following command can be used.

- `make`
    This command will build the sources file in `/Core`, `/Device_Startup`, `/Drivers`. The exact files can be set in Makefile variables `C_INCLUDES` and `C_INCLUDES`.
    - create `\build` folder, and the following output files will be put here.
    - compile the sources file separately.
    - link the depedency object files.
    - use the `arm-none-eabi-objcopy` to translate the ELF file to `.hex` or `.bin`.
- `make test`
    This command will build the sources file in `/UnitTest`, `/Device_Startup`, `/Drivers`. The exact files can be set in Makefile variables `C_INCLUDES` and `C_INCLUDES`.
- `make macro`
    This command will preprocess source files in `/Core`, `/UnitTest`, `/Device_Startup`, `/Drivers`, for debugging.
- `make size`
    This command will use the `arm-none-eabi-nm` tool to analyze the ELF file.
- `make clean`
    This command will clean all of the build files. (The `/build` folder)
