# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba Generador Onda Cuadrada.cydsn\prueba Generador Onda Cuadrada.cyprj
# Date: Sun, 20 Dec 2020 14:41:11 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 49 97} [list [get_pins {ClockBlock/udb_div_0}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba Generador Onda Cuadrada.cydsn\TopDesign\TopDesign.cysch
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\Pruebas electroestimulador\prueba Generador Onda Cuadrada.cydsn\prueba Generador Onda Cuadrada.cyprj
# Date: Sun, 20 Dec 2020 14:41:04 GMT