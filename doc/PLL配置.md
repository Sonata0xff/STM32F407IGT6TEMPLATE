1.USB/OTG/FS频率 <= 48Mhz
2. 2<=PLLQ<=15
3.PLL输出 <= 168Mhz
4. PLLP = 2 / 4 / 6 / 8
5. 192Mhz<=VCO输出<=432Mhz
6. 192<=PLLN<=432
7. 1Mhz<=VCO输入<=2Mhz
8. 2<=PLLM<=63

公式：
USB OTG FS 时钟频率 = VCO 输出频率 / PLLQ
PLL 输出时钟频率 = VCO 输出频率 / PLLP
VCO 输出频率 = VCO 输入频率 × PLLN
VCO 输入频率 = PLL 输入时钟频率 / PLLM
PLL 输入时钟频率=8Mhz

VCO 输入频率 = 2Mhz
PLL 输出时钟频率=168Mhz
USB/OTG/FS频率=48Mhz
VCO 输出频率=336Mhz
的配置：
PLLM=4
PLLLN=168
PLLP=2
PLLQ=7
PLLSource=HSE
