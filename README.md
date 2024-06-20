# Energy_management
This repository concerns the solution to energy wastage in a computer park.

## General Description
This project aims to control and optimize the electrical consumption of a computer park. The initiative seeks to reduce energy expenses by efficiently managing the usage of computers and monitors, which are often left on or in standby mode. The proposed system will allow centralized control of energy consumption, scheduling automatic shutdown and startup times, and measuring consumption in real-time and historically.

## Key Features
* Centralized Energy Control: Manage the power consumption from a single point.
* Sector Activation/Deactivation: Ability to turn on or off specific sections of the park.
* Automatic Scheduling: Schedule automatic shutdown and startup times for each sector.
* Consumption Measurement: Monitor real-time consumption and view historical data through graphs.
* User Interface: A single application for PC and tablet to display and control measurements.

## Supervision Application :

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

## Technologies and Tools Used 
* **Operating System**: Debian Linux on Raspberry Pi
* **Programming Languages**: C++ (CodeLite IDE)
* **Database**: PostgreSQL, hosted on Raspberry Pi
* **Frameworks and Libraries**: Graphical libraries for event-driven programming and OS abstraction

## Database Configuration

**1.Database Creation Script**:

* Run the data_base_creation_script_on_raspberry.sh script to create the database and necessary tables:
 `./data_base_creation_script_on_raspberry.sh`
* This script will drop the existing database, create a new one, and initialize tables with random values.

**2.Initial Data SQL File**:

The data_base_with_random_value.sql file contains SQL instructions to insert random data into the database.


## Usage
* The application allows visualization of current energy measurements on a map of the premises.
* You can view historical measurements as graphs for each module.
* The interface also enables activation or deactivation of specific sectors of the computer park.

# Documentation :

## File Overview

**1.Database Scripts**

* data_base_creation_script_on_raspberry.sh: Shell script to create the PostgreSQL database on a Raspberry Pi.
* data_base_with_random_value.sql: SQL script to populate the database with initial random values.

**2.Source Code Files**

* `MESURE.h` and `MESURE.cpp`: Define and implement measurement functionalities.
* `MACHINE.h` and `MACHINE.cpp`: Define and implement machine control functionalities.
* `DATA_BASE.h` and `DATA_BASE.cpp`: Database interaction functionalities.
* `Thread_plot.h` and `Thread_plot.cpp`: Plotting functionalities for visualizing data.
* `Thread_monitor.h` and `Thread_monitor.cpp`: Monitor functionalities for real-time data tracking.
* `Thread_get_data.h` and `Thread_get_data.cpp`: Data acquisition functionalities.
* `Thread_action.h` and `Thread_action.cpp`: Define and implement actions like activation/deactivation.
* `MyApp.h` and `MyApp.cpp`: Main application logic.
* `FramePrincipal.h` and FramePrincipal.fbp: Main frame and UI design files.
* `EvtFramePrincipal.h` and `EvtFramePrincipal.cpp`: Event handling for the main frame.
* `CustomEvents.h` and `CustomEvents.cpp`: Define custom events used in the application.

**3.Supporting Files**
carte.jpg: Image of the premises map for visual representation in the application.


