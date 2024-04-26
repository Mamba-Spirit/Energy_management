-- Secteurs table
CREATE TABLE Secteurs (
    id INT PRIMARY KEY,
    nom_secteur VARCHAR(255),
    etat_secteur BOOLEAN,
    etat_secteur_demande BOOLEAN
);

-- Modules table
CREATE TABLE Modules (
    id INT PRIMARY KEY,
    nom_module VARCHAR(255),
    secteur_id INT,
    etat_module BOOLEAN,
    etat_module_demande BOOLEAN,
    FOREIGN KEY (secteur_id) REFERENCES Secteurs(id)
);

-- Machines table
CREATE TABLE Machines (
    id INT PRIMARY KEY,
    secteur_id INT,
    module_id INT,
    pc_ip VARCHAR(255),
    pc_mac VARCHAR(255),
    etat_pc BOOLEAN,
    etat_pc_demande BOOLEAN,
    FOREIGN KEY (secteur_id) REFERENCES Secteurs(id),
    FOREIGN KEY (module_id) REFERENCES Modules(id)
);

-- Mesures table
CREATE TABLE Mesures (
    id INT PRIMARY KEY,
    puissance FLOAT,
    module_id INT,
    tension FLOAT,
    intensite FLOAT,
    date_mesure TIMESTAMP,
    FOREIGN KEY (module_id) REFERENCES Modules(id)
);

-- Logs table
CREATE TABLE Logs (
    id INT PRIMARY KEY,
    secteur_id INT,
    module_id INT,
    machine_id INT,
    mesure_id INT,
    type_erreur VARCHAR(255),
    date TIMESTAMP,
    FOREIGN KEY (secteur_id) REFERENCES Secteurs(id),
    FOREIGN KEY (module_id) REFERENCES Modules(id),
    FOREIGN KEY (machine_id) REFERENCES Machines(id),
    FOREIGN KEY (mesure_id) REFERENCES Mesures(id)
);


--*****************************************Insertion de données randoms *********************************************

-- Inserting data into Secteurs
INSERT INTO Secteurs (id, nom_secteur, etat_secteur, etat_secteur_demande) VALUES 
(1, 'Secteur A', TRUE, FALSE),
(2, 'Secteur B', FALSE, TRUE),
(3, 'Secteur C', TRUE, TRUE),
(4, 'Secteur D', TRUE, FALSE);
-- Inserting data into Modules
INSERT INTO Modules (id, nom_module, secteur_id, etat_module, etat_module_demande) VALUES 
(1, 'Module SA001', 1, FALSE, FALSE),
(2, 'Module SB001', 2, TRUE, FALSE),
(3, 'Module SC001', 3, TRUE, TRUE),
(4, 'Module SD001', 4, FALSE, FALSE),
(5, 'Module SA002', 1, TRUE, FALSE),
(6, 'Module SB002', 2, TRUE, TRUE),
(7, 'Module SC002', 3, TRUE, FALSE),
(8, 'Module SD002', 4, TRUE, TRUE);

-- Inserting data into Machines
INSERT INTO Machines (id, secteur_id, module_id, pc_ip, pc_mac, etat_pc, etat_pc_demande) VALUES 
(1, 1, 1, '192.168.1.10', '00:1B:44:11:3A:B7', TRUE, FALSE),
(2, 2, 2, '192.168.1.20', '00:1B:44:11:3A:B8', FALSE, TRUE),
(3, 3, 3, '192.168.1.30', '00:1B:44:11:3A:B9', TRUE, TRUE),
(4, 1, 1, '192.168.1.40', '00:1B:44:11:3A:C0', TRUE, FALSE),
(5, 1, 1, '192.168.1.50', '00:1B:44:11:3A:C1', TRUE, TRUE),
(6, 2, 2, '192.168.1.60', '00:1B:44:11:3A:C2', FALSE, TRUE),
(7, 2, 2, '192.168.1.70', '00:1B:44:11:3A:C3', TRUE, FALSE),
(8, 3, 3, '192.168.1.80', '00:1B:44:11:3A:C4', FALSE, TRUE),
(9, 3, 3, '192.168.1.90', '00:1B:44:11:3A:C5', TRUE, FALSE),
(10, 1, 4, '192.168.2.10', '00:1B:44:11:3A:D0', FALSE, FALSE),
(11, 4, 4, '192.168.2.20', '00:1B:44:11:3A:D1', TRUE, FALSE),
(12, 4, 4, '192.168.2.30', '00:1B:44:11:3A:D2', TRUE, TRUE),
(13, 4, 4, '192.168.2.40', '00:1B:44:11:3A:D3', FALSE, TRUE),
(14, 4, 4, '192.168.2.50', '00:1B:44:11:3A:D4', TRUE, FALSE),
(15, 1, 5, '192.168.2.60', '00:1B:44:11:3A:D5', TRUE, TRUE),
(16, 1, 5, '192.168.2.70', '00:1B:44:11:3A:D6', FALSE, TRUE),
(17, 2, 6, '192.168.2.80', '00:1B:44:11:3A:D7', TRUE, FALSE),
(18, 2, 6, '192.168.2.90', '00:1B:44:11:3A:D8', FALSE, TRUE),
(19, 3, 7, '192.168.3.10', '00:1B:44:11:3A:E0', TRUE, FALSE),
(20, 3, 7, '192.168.3.20', '00:1B:44:11:3A:E1', FALSE, TRUE),
(21, 4, 8, '192.168.3.30', '00:1B:44:11:3A:E2', TRUE, FALSE),
(22, 4, 8, '192.168.3.40', '00:1B:44:11:3A:E3', FALSE, TRUE),
(23, 4, 8, '192.168.3.50', '00:1B:44:11:3A:E4', TRUE, TRUE),
(24, 4, 8, '192.168.3.60', '00:1B:44:11:3A:E5', TRUE, FALSE),
(25, 4, 8, '192.168.3.70', '00:1B:44:11:3A:E6', FALSE, TRUE);

-- Inserting data into Mesures
INSERT INTO Mesures (id, puissance, module_id, tension, intensite, date_mesure) VALUES 
(1, 10.5, 1, 220, 0.5, '2024-04-18 10:00:00'),
(2, 5.2, 2, 220, 0.3, '2024-04-18 10:05:00'),
(3, 7.8, 3, 220, 0.4, '2024-04-18 10:10:00'),
(4, 6.7, 4, 220, 0.5, '2024-04-18 10:15:00'),
(5, 8.5, 5, 220, 0.6, '2024-04-18 10:20:00'),
(6, 9.1, 6, 220, 0.7, '2024-04-18 10:25:00'),
(7, 5.5, 7, 220, 0.4, '2024-04-18 10:30:00'),
(8, 7.2, 8, 220, 0.5, '2024-04-18 10:35:00'),
-- Additional measures for each module from here
(9, 8.3, 1, 220, 0.6, '2024-04-18 10:40:00'),
(10, 6.5, 2, 220, 0.5, '2024-04-18 10:45:00'),
(11, 7.4, 3, 220, 0.4, '2024-04-18 10:50:00'),
(12, 8.6, 4, 220, 0.6, '2024-04-18 10:55:00'),
(13, 5.3, 5, 220, 0.3, '2024-04-18 11:00:00'),
(14, 7.1, 6, 220, 0.5, '2024-04-18 11:05:00'),
(15, 8.4, 7, 220, 0.4, '2024-04-18 11:10:00'),
(16, 6.9, 8, 220, 0.5, '2024-04-18 11:15:00'),
(17, 5.7, 1, 220, 0.3, '2024-04-18 11:20:00'),
(18, 8.8, 2, 220, 0.7, '2024-04-18 11:25:00'),
(19, 5.9, 3, 220, 0.4, '2024-04-18 11:30:00'),
(20, 7.6, 4, 220, 0.6, '2024-04-18 11:35:00'),
(21, 6.0, 5, 220, 0.5, '2024-04-18 11:40:00'),
(22, 7.9, 6, 220, 0.4, '2024-04-18 11:45:00'),
(23, 8.2, 7, 220, 0.6, '2024-04-18 11:50:00'),
(24, 6.3, 8, 220, 0.5, '2024-04-18 11:55:00'),
(25, 9.0, 1, 220, 0.7, '2024-04-18 12:00:00'),
(26, 5.8, 2, 220, 0.3, '2024-04-18 12:05:00'),
(27, 7.5, 3, 220, 0.5, '2024-04-18 12:10:00'),
(28, 8.7, 4, 220, 0.6, '2024-04-18 12:15:00'),
(29, 5.4, 5, 220, 0.3, '2024-04-18 12:20:00'),
(30, 7.0, 6, 220, 0.4, '2024-04-18 12:25:00'),
(31, 8.5, 7, 220, 0.6, '2024-04-18 12:30:00'),
(32, 6.8, 8, 220, 0.5, '2024-04-18 12:35:00');


-- Inserting data into Logs
INSERT INTO Logs (id, secteur_id, module_id, machine_id, mesure_id, type_erreur, date) VALUES 
(1, 1, 1, 1, 1, 'Error Type 1', '2024-04-18 10:15:00'),
(2, 2, 2, 2, 2, 'Error Type 2', '2024-04-18 10:20:00'),
(3, 3, 3, 3, 3, 'Error Type 3', '2024-04-18 10:25:00');
