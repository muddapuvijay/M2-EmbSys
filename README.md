# M2-EmbSys
A Hotseat is one can adjust their required temperature to the seat to get comfort from the environment temperatures.
# Embedded_C_Activities_255949
Embedded C activities in StepIn Program

| Build                                                                                                                                                                                                    | Cppcheck                                                                                                                                                                                                         | Codacy                                                                                                                                                                                                                                                                                                 |
|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [![Compile-Linux](https://github.com/255949/Embedded_C_Activities_255949/actions/workflows/Actions.yml/badge.svg)](https://github.com/255949/Embedded_C_Activities_255949/actions/workflows/Actions.yml) | [![Compile-Linux](https://github.com/255949/Embedded_C_Activities_255949/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/255949/Embedded_C_Activities_255949/actions/workflows/CodeQuality.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/a55d05c3f9f242c4ba3098af9c7281f3)](https://www.codacy.com/gh/255949/Embedded_C_Activities_255949/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=255949/Embedded_C_Activities_255949&amp;utm_campaign=Badge_Grade) |

## Output

### Requirements not met

| None of the switches ON               | Only Heating Switch ON                  | Only Person present on seat              |
|---------------------------------------|-----------------------------------------|------------------------------------------|
| <img src="/simulation/no_switch.PNG"> | <img src="simulation/one_switch_1.PNG"> | <img src="/simulation/one_switch_2.PNG"> |

### Both Switches ON

| Duty Cycle | Output                              | Serial Monitor                        |
|------------|-------------------------------------|---------------------------------------|
| 20%        | <img src="/simulation/20_duty.PNG"> | <img src="/simulation/Serial_20.PNG"> |
| 40%        | <img src="/simulation/40_duty.PNG"> | <img src="/simulation/Serial_40.PNG"> |
| 70%        | <img src="/simulation/70_duty.PNG"> | <img src="/simulation/Serial_70.PNG"> |
| 95%        | <img src="/simulation/90_duty.PNG"> | <img src="/simulation/Serial_90.PNG"> |
