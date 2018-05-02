# SOLID
A mnemonic acronym for good Object Oriented design.

## SRP: The Single Responsibility Principle
**"Each class is accountable to only one person."**

Different parts of a business have different needs based on their different roles, so why should their code be treated the same? Code should be written so that changes requested by one person/organization do not impact the code that answers to a different person/organization. As functions only do one thing, classes only answer to one person.

## OCP: The Open/Closed Principle
**"Use derived classes to add features instead of modifying source code."**

Modifying source code requires modifying all of its client code which introduces complexity and errors. Instead of doing that, extend an abstract base class with concrete derived classes. The source code is thus "open for extension but closed for modification."

## LSP: The Liskov Substitution Principle
**"A subtype should be able to do the job of the supertype."**

Supertypes and their subtypes should be interchangeable without changing the correctness of the program. That means that subtypes cannot modify the supertype's contract: Preconditions, postconditions, and invariants are the same. 

## ISP: The Interface Segregation Principle
**"Different interfaces for different jobs."**

Making a client aware of methods that it does not use introduces unnecessary coupling which complicates later changes. Each client should have its own separate interface so that it is only concerned with changes to code that it actually uses.

## DIP: The Dependency Inversion Principle
**"Introduce abstract interfaces to reduce coupling between high and low-level modules."**

Traditional software design has high-level modules build on a foundation of low-level modules. This introduces tight coupling and reduces the reusability of code. Putting an abstract interface between different layers reduces coupling and makes it easier to change or reuse code.