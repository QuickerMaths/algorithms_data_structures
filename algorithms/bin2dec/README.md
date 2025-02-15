# Binary to Decimal Converter (bin2dec)

## Overview

This project implements a **binary to decimal conversion algorithm** using the **Positional Notation Method**.

## How It Works

The algorithm converts a binary number to decimal by processing each bit based on its position.

### Conversion Process:
1. **Start from the rightmost bit** (Least Significant Bit, LSB).
2. Multiply the bit value by **2 raised to the power of its position**.
3. Continue processing each bit from right to left until reaching the **Most Significant Bit (MSB)**.
4. **Sum all computed values** to get the decimal representation.

## Block diagram

![bin2dec algorithm block diagram](../../images/bin2dec.png)
