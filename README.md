# NumbView
Fusion  360 add-on that enables switching views using the numpad. NumbView is a custom add-in for Autodesk Fusion  360 that allows users to switch views using the numpad keys. This add-in enhances navigation and streamlines workflows by providing quick and easy access to different views within the software.

---

## Introduction

NumbView is designed to enhance your experience in Fusion  360 by allowing you to quickly switch between different views using the numpad keys. This add-on simplifies navigation and makes it easier to work with various perspectives within your sketches and models.

## Development Path for NumbView

This guide will assist you in creating the NumbView add-on for Fusion  360. We'll walk you through setting up your development environment, understanding the Fusion  360 API, and integrating the functionality to switch views via numpad input.

## Prerequisites

- Basic knowledge of C++ programming language.
- Access to the Fusion  360 software.

## Step  1: Understand the Fusion  360 API

Before diving into development, familiarize yourself with the Fusion  360 API documentation. This will give you insights into how to interact with Fusion  360 programmatically and how to manipulate the view gizmo programmatically.

## Step  2: Create a Manifest File for Fusion  360 Add-On

Every Fusion  360 add-on requires a manifest file with metadata about the add-on. This includes the add-on's name, description, version, and the main executable file.

## Step  3: Develop the Add-In Code

Write the add-in code using C++. Your code will need to:

- Intercept numpad key presses.
- Translate the numpad input into commands to switch views in Fusion  360.
- Handle exceptions and edge cases to ensure smooth operation.

## Step  4: Test Your Add-In

Test the add-in thoroughly to ensure it functions as expected. Check that the view switches correctly when numpad keys are pressed and that there are no conflicts with other shortcuts or operations within Fusion  360.

## Step  5: Package Your Add-In

Package the add-in according to Fusion  360's packaging guidelines. This includes compiling the C++ code into a DLL, adding the manifest file, and organizing the files into the correct directory structure.

## Step  6: Distribute Your Add-In

Decide how you want to distribute your add-in. If you choose to publish it on the Autodesk App Store, follow Autodesk's submission guidelines. Alternatively, you can distribute it manually or through other channels to reach your intended audience.

## Support and Community

Join the Fusion  360 developer community for support, collaboration, and to share your experiences with NumbView. Share your feedback and contribute to the improvement of the add-on.

## License and Copyright

NumbView is licensed under the MIT License. See the `LICENSE` file for more details. All rights reserved.

## Contact Information

For any inquiries or support related to NumbView, please reach out to the project maintainers at the provided contact information.

