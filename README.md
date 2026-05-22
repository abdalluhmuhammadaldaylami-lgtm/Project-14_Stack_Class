# 📦 Project 14 — Stack Class (OOP)

## 📌 Overview

This project demonstrates how to build a **Stack Data Structure** using **Object-Oriented Programming principles** in C++.

Instead of building the Stack from scratch, we leveraged **Inheritance and Reusability** by extending our previously implemented `clsMyQueue` class.

The result?  
A fully functional Stack implemented in seconds — with minimal additional code.

---

## 🎯 Core Idea

The Stack class inherits from the Queue class:

Stack → Queue → Linked List


This layered design creates a powerful and reusable architecture — like LEGO blocks.

---

## 🧠 OOP Concepts Applied

🔹 Inheritance  
🔹 Method Overriding  
🔹 Code Reusability  
🔹 Abstraction  
🔹 Layered Architecture Design  

---

## ⚡ Smart Implementation

The only behavioral difference between Queue and Stack is:

- Queue → Insert at **Back**
- Stack → Insert at **Front**

So instead of rewriting everything, we:

✔ Inherited all Queue functionality  
✔ Overrode only the `Push()` method  
✔ Added `Top()` and `Bottom()` wrappers  

That’s it.

Three methods.  
Full Stack implementation.

---

## 🧩 Stack Methods

```cpp
void Push(T Item);
T Top();
T Bottom();
```

All other functionality is inherited directly from clsMyQueue.

---

## 🚀 Features Demonstrated in main()

✔ Push elements
✔ Pop
✔ Reverse
✔ UpdateItem
✔ InsertAfter
✔ InsertAtFront
✔ InsertAtBack
✔ GetItem
✔ Clear
✔ Size
✔ Print

---

## 🔥 Why This Project Matters

This project is not about writing many lines of code.

It’s about:

- Thinking before coding

- Designing before implementing

- Using OOP principles to multiply productivity

This is how some developers finish tasks in 1–2 hours,
while others struggle for a week.

Understanding architecture > memorizing syntax.

---

## 🛠 Technologies Used

- C++

- Templates

- OOP

- Linked List

- Queue

- Stack

---

## 🌐 Platform

Programming Advices
https://programmingadvices.com

---

## 🗺 Learning Roadmap

Data Structures & Algorithms Roadmap
Object-Oriented Programming Mastery
Advanced Problem-Solving Techniques

---

## 👨‍🏫 Instructor

- Dr. Mohammed Abu-Hadhoud
- Programming Advices

---

## 💡 Key Takeaway

When you understand how to connect components together,
you don’t just write code…

You are a developer.

And that’s the difference between:

A coder
and
A developer.
