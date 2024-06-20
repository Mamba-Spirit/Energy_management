# Energy_management
This repository concerns the solution to energy wastage in a computer park.

# General Description
This project aims to control and optimize the electrical consumption of a computer park. The initiative seeks to reduce energy expenses by efficiently managing the usage of computers and monitors, which are often left on or in standby mode. The proposed system will allow centralized control of energy consumption, scheduling automatic shutdown and startup times, and measuring consumption in real-time and historically.

# Key Features
* Centralized Energy Control: Manage the power consumption from a single point.
* Sector Activation/Deactivation: Ability to turn on or off specific sections of the park.
* Automatic Scheduling: Schedule automatic shutdown and startup times for each sector.
* Consumption Measurement: Monitor real-time consumption and view historical data through graphs.
* User Interface: A single application for PC and tablet to display and control measurements.

# Supervision Application :

**1. View Current Measurements**
  * Objective: Display recent data ergonomically on a map of the premises.
  * Success Criteria: Current data displayed and updated, ergonomic data display, inclusion of all modules.
    
**2. View Historical Measurements**
  * Objective: Display historical data as graphs.
  * Success Criteria: Graphs of the last 24 hours displayed, ergonomic graph display per module.
    
**3. Control Energy**
  * Objective: Activate or deactivate a sector via an interface.
  * Success Criteria: Activation/deactivation possible, options to turn on computers and monitors available.

**4. Store System Data**
  * Objective: Install a database (DB) and make it accessible via the network.
  * Success Criteria: DB available, automatic creation script and data filling set exist.

# Technologies and Tools Used 
* **Operating System**: Debian Linux on Raspberry Pi
* **Programming Languages**: C++ (CodeLite IDE)
* **Database**: PostgreSQL, hosted on Raspberry Pi
* **Frameworks and Libraries**: Graphical libraries for event-driven programming and OS abstraction

