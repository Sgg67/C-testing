# C Math Library — Unit Testing with GTest & GitHub Actions

![C](https://img.shields.io/badge/language-C-blue.svg)
![GTest](https://img.shields.io/badge/testing-GoogleTest-green.svg)
![GitHub Actions](https://img.shields.io/badge/CI-GitHub%20Actions-orange.svg)

A C math library with unit tests written using **Google Test (GTest)**, automated with a **GitHub Actions** CI pipeline that builds and runs tests on every push.

---

## 📁 Project Structure

```
C-testing/
├── .github/
│   └── workflows/
│       └── gtest.yml       # GitHub Actions CI pipeline
├── src/
│   ├── mymath.h            # Function declarations
│   └── mymath.c            # Math function implementations
├── test/
│   └── test_math.cpp       # GTest unit tests
├── CMakeLists.txt          # CMake build configuration
└── .gitignore
```

---

## ⚙️ Math Functions

The library implements the following math functions in C:

| Function | Description | Example |
|----------|-------------|---------|
| `add(a, b)` | Adds two integers | `add(2, 3)` → `5` |
| `subtract(a, b)` | Subtracts b from a | `subtract(3, 2)` → `1` |
| `multiply(a, b)` | Multiplies two integers | `multiply(3, 3)` → `9` |
| `divide(a, b)` | Divides a by b, returns `-1` if b is 0 | `divide(6, 3)` → `2` |
| `sqrd(a)` | Returns square root of a | `sqrd(25)` → `5.0` |
| `power(base, exp)` | Raises base to the power of exp | `power(5.0, 2.0)` → `25.0` |

---

## 🧪 Unit Tests

Tests are written using **Google Test (GTest)** and cover normal cases as well as edge cases like divide by zero and zero exponent.

```cpp
TEST(MathTest, Add)            { EXPECT_EQ(add(2, 3), 5); }
TEST(MathTest, Subtract)       { EXPECT_EQ(subtract(3, 2), 1); }
TEST(MathTest, Divide)         { EXPECT_EQ(divide(6, 3), 2); }
TEST(MathTest, Multiply)       { EXPECT_EQ(multiply(3, 3), 9); }
TEST(MathTest, Divide_By_Zero) { EXPECT_EQ(divide(3, 0), -1); }
TEST(MathTest, Sqrt)           { EXPECT_EQ(sqrd(25), 5.0); }
TEST(MathTest, Pow)            { EXPECT_EQ(power(5.0, 2.0), 25.0); }
TEST(MathTest, ZeroPow)        { EXPECT_EQ(power(5.0, 0), 1.0); }
```

---

## 🚀 Running Tests Locally (WSL / Linux)

### 1. Install Dependencies
```bash
sudo apt update
sudo apt install libgtest-dev cmake build-essential -y
```

### 2. Build GTest
```bash
cd /usr/src/gtest
sudo cmake .
sudo make
sudo cp lib/*.a /usr/lib
```

### 3. Build and Run Tests
```bash
mkdir -p build
cd build
cmake ..
make
./test_runner
```

### Expected Output
```
[==========] Running 8 tests from 1 test suite.
[----------] 8 tests from MathTest
[ RUN      ] MathTest.Add
[       OK ] MathTest.Add (0 ms)
[ RUN      ] MathTest.Subtract
[       OK ] MathTest.Subtract (0 ms)
[ RUN      ] MathTest.Divide
[       OK ] MathTest.Divide (0 ms)
[ RUN      ] MathTest.Multiply
[       OK ] MathTest.Multiply (0 ms)
[ RUN      ] MathTest.Divide_By_Zero
[       OK ] MathTest.Divide_By_Zero (0 ms)
[ RUN      ] MathTest.Sqrt
[       OK ] MathTest.Sqrt (0 ms)
[ RUN      ] MathTest.Pow
[       OK ] MathTest.Pow (0 ms)
[ RUN      ] MathTest.ZeroPow
[       OK ] MathTest.ZeroPow (0 ms)
[  PASSED  ] 8 tests.
```

---

## 🔄 CI/CD

This project uses **GitHub Actions** to automatically build and run all tests on every push to `main` and on every pull request. Results are visible under the **Actions** tab in the repository.

---

## 🛠️ Built With

- **C** — Core math library
- **C++ / Google Test** — Unit testing framework
- **CMake** — Build system
- **GitHub Actions** — CI/CD automation
- **WSL (Windows Subsystem for Linux)** — Development environment
