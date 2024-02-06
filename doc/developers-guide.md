# Developer's Manual for NumbView Fusion   360 Add-On

This manual provides conventions, best practices, and guidelines for contributing to the NumbView Fusion   360 add-on project. It helps developers understand the expectations and maintain a consistent coding style throughout the project.

## Table of Contents
- [Code Style](#code-style)
- [Naming Conventions](#naming-conventions)
- [Commenting](#commenting)
- [Error Handling](#error-handling)
- [Unit Testing](#unit-testing)
- [Performance Considerations](#performance-considerations)
- [Contribution Workflow](#contribution-workflow)
- [Test Case Writing](#test-case-writing)
- [Communication and Collaboration](#communication-and-collaboration)
- [Continuous Integration and Delivery](#continuous-integration-and-delivery)
- [Additional Resources](#additional-resources)

## Code Style
- Follow the C++ Core Guidelines for consistent and high-quality C++ code.
- Use a consistent indentation style (e.g., four spaces or a tab) throughout the codebase.
- Use braces `{}` for all control structures, including single-line statements, for clarity and consistency.

## Naming Conventions
- Use descriptive variable and function names that indicate their purpose.
- Use camelCase for variables and functions (e.g., `myVariable`, `calculateTotal()`).
- Use PascalCase for class names (e.g., `MyClass`).

## Commenting
- Use comments to explain complex or non-obvious sections of code.
- Keep comments concise and relevant to the code they annotate.
- Update comments if the code changes to maintain accuracy.

## Error Handling
- Implement a formal exception handling mechanism to manage unexpected events.
- Use try-catch blocks and provide recovery mechanisms for software or network latency issues.

## Unit Testing
- Write unit tests to verify the functionality of the code.
- Follow the Arrange-Act-Assert (AAA) pattern for structuring tests.
- Ensure that each piece of functionality has corresponding unit tests.

## Performance Considerations
- Optimize code by implementing efficient algorithms.
- Carefully manage resources to prevent memory leaks and excessive resource usage.

## Contribution Workflow
- Clone the repository and create a new branch for your feature or bugfix.
- Commit changes frequently with clear and descriptive commit messages.
- Before submitting a pull request, ensure that all tests pass and the code conforms to the project's coding standards.
- Submit a pull request with a detailed description of the changes made.

## Test Case Writing
- Break down each test case into a series of concise steps.
- Base each test with expectations that can result in a measurable outcome.
- Customize and execute test cases in an environment different from the one used for development.

## Communication and Collaboration
- Regular communication between developers and QA engineers is essential for a comprehensive understanding of the ongoing tasks.
- Diminish risks and vulnerabilities and enhance the ultimate outcomes by fostering collective involvement in testing endeavors.

## Continuous Integration and Delivery
- Integrate continuous integration (CI) and continuous delivery (CD) strategies to ensure code is tested and delivered regularly.
- Automate the build and test process to catch issues early and maintain a stable codebase.

## Additional Resources
- [Fusion   360 API Documentation](https://help.autodesk.com/cloudhelp/ENU/Fusion-360/files/GUID-7D6A3F37-4F0B-49B6-8BBE-6160869E860F.htm)
- [C++ Documentation](https://en.cppreference.com/w/)
- [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- [Refactoring Guru](https://refactoring.guru/design-patterns)

By following these guidelines, contributors can ensure that their code aligns with the project's standards and that the codebase remains consistent and maintainable. This manual is a living document and should be updated as the project evolves and new practices emerge.
