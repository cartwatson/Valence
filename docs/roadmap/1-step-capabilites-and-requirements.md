# Capabilities and Requirements

## Hardware Capabilities

### Xilinx Basys 3

General Info:
- communication
  - USB-UART seems to be most common
  - 12 bit VGA
  - USB-JTAG port for programming and communication
  - USB-HID
- power
  - USB
  - 4.5V-5.5V DC at 1A (5W of power)
  - 3.3V logic
- [info from digilent](https://digilent.com/shop/basys-3-artix-7-fpga-trainer-board-recommended-for-introductory-users/?utm_source=google&utm_medium=cpc&utm_campaign=19550988445&utm_content=148947439830&utm_term=basys%203&gad=1&gclid=Cj0KCQjwy4KqBhD0ARIsAEbCt6jkbBmaPg97EQLsb_snpAS6pg6JiOUwzPw0Eku39t07QZFZ2ke5MNIaAju3EALw_wcB)
- [manual](https://digilent.com/reference/programmable-logic/basys-3/reference-manual)

Pros: 
- ease of use
- lots of documentation
- should have enough computing power for image processing

Cons:
- may be too focused at introductory FPGA use
- may not be suited for deployment
- expensive for what it is
- may be hard to find good visual sensors for

### RasPi 2

General Info:
- 1.8v and 3.3v logic
  - anything above 3.3v can fry the board
- 

Pros:
- available
- cheap
- lots of support
- should support most communication protocals
- lots of GPIO

Cons:
- likely not powerful enough 
- relatively power hungry

## Software Requirements

### Features

#### Functional Requirements

- imaging sensors
  - track vehicles in fov
  - track personal in fov

#### Non-Functional Requirements

see [metrics](/docs/roadmap/1-step-metrics.md)

### Interactions within Systems

- all integrations of sensors and boards need to remain hardware agnostic
  - done throught the implementation of interfaces
