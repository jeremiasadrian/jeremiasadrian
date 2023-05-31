# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\WorkspaceMIB2\Generador de Pulsos.cydsn\Generador de Pulsos.cyprj
# Date: Sun, 27 Dec 2020 08:48:02 GMT
#set_units -time ns
create_clock -name {ADC_intClock(FFB)} -period 1000 -waveform {0 500} [list [get_pins {ClockBlock/ff_div_7}]]
create_clock -name {Clock_1(FFB)} -period 2229.1666666666665 -waveform {0 1114.58333333333} [list [get_pins {ClockBlock/ff_div_8}] [get_pins {ClockBlock/ff_div_9}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {ADC_intClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 49 97} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 107 215} -nominal_period 2229.1666666666665 [list]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\WorkspaceMIB2\Generador de Pulsos.cydsn\TopDesign\TopDesign.cysch
# Project: D:\ESCRITORIO\Tesis MIB\Proyecto de Tesis\electroestimulador\PSoC\electroestimulador\WorkspaceMIB2\Generador de Pulsos.cydsn\Generador de Pulsos.cyprj
# Date: Sun, 27 Dec 2020 08:47:58 GMT