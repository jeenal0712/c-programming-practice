# 🎓 Student Management System

A console-based **Student Management System** built using the **C programming language**.

This project allows users to manage student records using structures, functions, file handling, searching, and sorting.

## ✨ Features

- ➕ Add student records
- 📋 Display all student records
- 🔍 Search for a student by roll number
- ✏️ Update student details
- 🗑️ Delete student records
- 🔃 Sort students by:
  - Roll Number
  - Name
  - Marks
- ⬆️ Sort in ascending or descending order
- 💾 Store records using binary file handling

## 🛠️ Concepts Used

- Structures
- Functions
- File Handling
- Binary Files
- `fread()` and `fwrite()`
- Searching
- Sorting
- Menu-driven programming

## 📂 Project Structure

```text

Student-Management-System/
│
├── student_management.c
└── README.md
└── students.dat   ← generated automatically (not uploaded)

```

## ▶️ How to Run

### 1. Compile the Program

```bash
gcc Student_Management.c -o Student_Management
```

### 2. Run the Program

#### Windows

```bash

Student_Management.exe

```

#### Linux / macOS

```bash

./Student_Management

```

## 💾 Data Storage

Student records are stored in a binary file using file handling functions such as `fread()` and `fwrite()`.

The binary file (`students.dat`) is generated automatically when the program runs and is not included in the repository.

## 🧠 What I Learned

- Working with structures
- Using binary file handling
- Implementing CRUD operations
- Searching and sorting records
- Building a menu-driven C program

---

⭐ A C programming project created as part of my learning journey.

## 👨‍💻 Author

**Jeenal**

This project was created as part of my journey to learn and practice C programming.
