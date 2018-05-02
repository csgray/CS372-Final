# Design Patterns
A selection of design patterns that were covered in CS 372: Software Construction.

### Useful Sources
[Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns)

[Source Making - Design Patterns](https://sourcemaking.com/design_patterns)

## Adapter
**Intent:** Change the interface of one class into the interface that clients expect to use.

**Problem:** A valuable module's interface is incompatible with the existing system.

**Applicability:** Use when it is possible to convert the client's outputs to the module's inputs through a wrapper.

**Structure:** Client's call the methods on the wrapper class which then calls the original module.

**Consequences:** It is possible to retrofit old or external modules to work with existing systems.

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
**Intent:** Create a tree of composite and component objects with a uniform interface.

**Problem:** There is a hierarchy of different objects where managing each object differently would be burdensome.

**Applicability:** Use when container objects may contain other containers.

**Structure:** Composite objects contain components (child objects) which could be other composite objects with their own children.

**Consequences:** Each object in the hierarchy has a uniform interface, but some functions are pushed to the abstract class when they normally would not be.

## Decorator
**Intent:** Add optional features to an object at run-time.

**Problem:** Need to add functionality to an object without using inheritence.

**Applicability:** Use when additional functionality can be achieved without modifying the interface.

**Structure:** An optional wrapper class with a common supertype adds features to the original object.

**Consequences:** Core functionality and additional features coexist without a new subclass, but you cannot access the original object directly.

## Facade
**Intent:** Create a new interface for a complex system that is easier or simpler to use.

**Problem:** Users only need access to part of a complicated interface.

**Applicability:** Use when clients only need access to part of a system or when the system is otherwise too unwieldy to use.

**Structure:** A wrapper class defines the interface between the client and the system.

**Consequences:** A complicated system becomes easier to use, but power users may be locked out of advanced features.

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
**Intent:** Create one object to stand in for a different one before clients.

**Problem:** An object is too resource-intensive to have constantly available, but other objects do need access to it.

**Applicability:**
1. An object is too expensive.
2. An object is too distant.
3. An object is too sensitive.
4. Access prompts additional actions.

**Structure:** A new interface to the proxy which passes requests to the real object when necessary.

**Consequences:** Clients think they are interact with the real object even when it is not present.

## State
**Intent:** Allow an object to alter its behavior, seemingly becoming a different class, when its internal state changes.

**Problem:** An object needs to behave differently at runtime or as a result of numerous flow of control statements based on the state of the application.

**Applicability:** Use when an object's behavior changes depending on its state.

**Structure:** Clients interfaces with a "context" class which interfaces with a "state" class from which the different states and their behaviors are derived.

**Consequences:** The different, state-dependent behaviors of an object are presented to clients through a single interface.

## Template Method
**Intent:** Reuse an algorithm even when the particulars of some steps change.

**Problem:** Two or more objects are similar but do not share an interface.

**Applicability:** Use when an object or process can be broken down into a series of discrete steps and only a few of the steps change between instances.

**Structure:** The common steps (methods) of the algorithm are implemented in an abstract base class and the subclasses implement the customizable steps.

**Consequences:** Significant sections of code are reused with the base class calling the subclasses.

## Visitor
**Intent:** Add temporary or unrelated functionality to multiple nodes without modifying those nodes.

**Problem:** There is a mixture of different objects that need the same operation performed on them, but it would be too costly to add that functionality to each type of object.

**Applicability:** Use when there is a mixture of different lightweight objects.

**Structure:** Create an abstract visitor class then implement different operations as unique derived classes that know how to handle different element objects. Add a single function to each element object type to accept visitors.

**Consequences:** Adding new operations is as easy as adding a new visitor subclass, but adding new element objects becomes increasingly complex.
