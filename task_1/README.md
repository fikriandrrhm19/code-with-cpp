# Task #1 Object-Oriented Programming

## Deskripsi

In this task, I will share the implementation of a program in C++ using two programming paradigms: **Imperative Programming** and **Object-Oriented Programming (OOP)**.

Below are the details of the completed task:

<p align="center"> 
<img src="https://github.com/user-attachments/assets/f42c989b-e520-43d8-8ed1-2e7331909718" alt="Task Detail">
</p>

## Folder Structure
```
..
 ├── imperative/  # Implementation using the Imperative Programming paradigm  
 │   ├── calculator_imperative.cpp
 │   ├── counter_imperative.cpp
 │   ├── point_imperative.cpp
 │   ├── rectangle_imperative.cpp
 │   ├── student_imperative.cpp
 ├── oop/  # Implementation using the OOP paradigm  
 │   ├── calculator_oop.cpp
 │   ├── counter_oop.cpp
 │   ├── point_oop.cpp
 │   ├── rectangle_oop.cpp
 │   ├── student_oop.cpp
 ├── README.md  # Documentation and task report  
```
## How to Run the Program

Each program can be compiled using `g++`. For example, to run the imperative version:

```
g++ imperative/calculator_imperative.cpp -o calculator_imperative && ./calculator_imperative
```
Or for the OOP version:

```
g++ oop/calculator_oop.cpp -o calculator_oop && ./calculator_oop
```

Make sure a C++ compiler is installed, such as `g++` on **Linux/macOS** or **[MinGW]([https://www.mingw-w64.org/])** on Windows.

## Implementation Explanation
Below is a brief explanation of each script created:

### 1. Simple Calculator (`calculator_imperative.cpp` & `calculator_oop.cpp`)

This program performs basic arithmetic operations based on user input.

- Imperative: The program directly reads the input numbers and operator, then calculates the result sequentially.
- OOP: Uses a `Calculator`class with methods for performing arithmetic operations.

When executed, both versions produce the following output:

```
Masukkan angka pertama		: 21
Masukkan operator (+, -, /, *)	: *
Masukkan angka kedua		: 100
Hasil				: 2100
```
### 2. Student Information Storage (`student_imperative.cpp` & `student_oop.cpp`)

This program stores student information such as name, student ID (NIM), and grade.

- Imperative: Uses simple variables to store data and prints them directly.
- OOP: Uses a `Student` class with attributes **name**, **nim**, **grade**, and a `displayInfo()` method to display student information.

When executed, both versions produce the following output:

```
Masukkan Nama Mahasiswa : Fikri Andra Irham
Masukkan NIM Mahasiswa  : 24120410003
Masukkan Nilai Mahasiswa (A/B/C/D/E) : A

Informasi Mahasiswa :
Nama  : Fikri Andra Irham
NIM   : 24120410003
Nilai : A
```

### 3. Calculating the Area of a Rectangle (`rectangle_imperative.cpp` & `rectangle_oop.cpp`)

This program calculates the area of a rectangle based on user-input length and width.

- Imperative: Uses simple variables and direct calculations.
- OOP: Uses a `Rectangle` class with attributes **length** and **width**, and a `calculateArea()` method to compute the area.

When executed, both versions produce the following output:

```
Masukkan panjang persegi panjang : 19
Masukkan lebar persegi panjang   : 5.5
Luas persegi panjang : 104.5
```

### 4. Counter Implementation (`counter_imperative.cpp` & `counter_oop.cpp`)

This program creates a counter that increments each time the user chooses to continue.

- Imperative: Uses a `count` variable to store the value and increments it directly.
- OOP: Uses a `Counter` class with `increment()` and `getCount()` methods.

When executed, both versions produce the following output:

```
Nilai saat ini		: 1
Tambahkan lagi? (y/n)	: y
Nilai saat ini		: 2
Tambahkan lagi? (y/n)	: y
Nilai saat ini		: 3
Tambahkan lagi? (y/n)	: y
Nilai saat ini		: 4
Tambahkan lagi? (y/n)	: y
Nilai saat ini		: 5
Tambahkan lagi? (y/n)	: y
Nilai saat ini		: 6
Tambahkan lagi? (y/n)	: n
Nilai akhir counter	: 6
```

### 5. Calculating the Distance of a Point from the Origin in 2D (`point_imperative.cpp` & `point_oop.cpp`)

This program calculates the distance of a point `(x, y)` from the origin `(0, 0)`, using the Euclidean distance formula:

$$
\text{distance} = \sqrt{x^2 + y^2}
$$

- Imperative: The program reads `x` and `y` inputs and then calculates the distance using the formula above.
- OOP: Uses a `Point` class with a `distanceFromOrigin()` method to compute the distance.

When executed, both versions produce the following output:

```
Masukkan koordinat x	: 5
Masukkan koordinat y	: 2
Koordinat titik		: (5, 2)
Jarak dari titik asal	: 5.38516
```