# Design Patterns
A selection of design patterns that were covered in CS 372: Software Construction.

### Useful Sources
[Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns)

[Source Making - Design Patterns](https://sourcemaking.com/design_patterns)

## Chain of Responsibility
**Intent:** Create a chain of receivers then pass requests along the chain until an object handles it.

**Problem:** There are multiple receivers and a stream of requests that need to be handled efficiently without coupling requests to particular receivers.

**Applicability:** Use when receivers are interchangeable and clients can safely leave their requests at the start of the chain.

**Structure:** Derived classes know how to process requests while the base class is responsible for passing requests down the chain.

**Consequences:** Senders are receivers are decoupled allowing requests to be handled by the first available resource.

## Command
**Intent:** Turn requests into full-blown objects through encapsulation so that they can be better managed.

**Problem:** Need to issue requests to an object without knowing the details.

**Applicability:** Use when it is necessary to decouple the objects that make requests from the objects that perform requests.

**Structure:** Clients issuing commands create the command through an interface then send it to a separate receiver class that calls the contents of the command.

**Consequences:** Requests may be passed between clients and receivers independent of interface and time.

## Composite
**Intent:**

**Problem:** 

**Applicability:**

**Structure:**

**Consequences:**

## Decorator
**Intent:**

**Problem:** 

**Applicability:**

**Structure:**

**Consequences:**

## Interpreter
**Intent:** Implement a language's grammar as an Abstract Syntax Tree.

**Problem:** A class of problem is repeated often enough that it is useful to represent it using a domain language with a grammar and ASTs.

**Applicability:** Use when the language to interpret is simple and efficiency is not important.

**Structure**: Make one base case for the root of the hierarchy and a derived class for every production in the grammar.

**Consequences**: Changing, extending, and implementing the grammar is easy - unless it is a complex grammar. Adding new ways to interpret expressions is also easy.

## Observer
**Intent:** Update multiple dependent objects when another object changes state.

**Problem:** There is insufficient visibility into a large or complicated design.

**Applicability:** Use when the number of "view" objects is large or dynamic so that they need to be decoupled from what they are observing.

**Structure:** The subject is the core abstraction while observers are derived from a separate, variable abstraction.

**Consequences:** Views into the state of the subject can be created, updated, and deleted as necessary.

## Proxy
**Intent:**

**Problem:** 

**Applicability:**

**Structure:**

**Consequences:**

## State
**Intent:** Allow an object to alter its behavior, seemingly becoming a different class, when its internal state changes.

**Problem:** An object needs to behave differently at runtime or as a result of numerous flow of control statements based on the state of the application.

**Applicability:** Use when an object's behavior changes depending on its state.

**Structure:** Clients interfaces with a "context" class which interfaces with a "state" class from which the different states and their behaviors are derived.

**Consequences:** The different, state-dependent behaviors of an object are presented to clients through a single interface.

## Visitor
**Intent:** Add temporary or unrelated functionality to multiple nodes without modifying those nodes.

**Problem:** There is a mixture of different objects that need the same operation performed on them, but it would be too costly to add that functionality to each type of object.

**Applicability:** Use when there is a mixture of different lightweight objects.

**Structure:** Create an abstract visitor class then implement different operations as unique derived classes that know how to handle different element objects. Add a single function to each element object type to accept visitors.

**Consequences:** Adding new operations is as easy as adding a new visitor subclass, but adding new element objects becomes increasingly complex.
