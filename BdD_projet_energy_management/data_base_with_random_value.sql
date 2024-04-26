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
(3, 3, 3, '192.168.1.30', '00:1B:44:11:3A:B9', TRUE, TRUE);

-- Inserting data into Mesures
INSERT INTO Mesures (id, puissance, module_id, tension, intensite, date_mesure) VALUES 
(1, 10.5, 1, 220, 0.5, '2024-04-18 10:00:00'),
(2, 5.2, 2, 220, 0.3, '2024-04-18 10:05:00'),
(3, 7.8, 3, 220, 0.4, '2024-04-18 10:10:00');

-- Inserting data into Logs
INSERT INTO Logs (id, secteur_id, module_id, machine_id, mesure_id, type_erreur, date) VALUES 
(1, 1, 1, 1, 1, 'Error Type 1', '2024-04-18 10:15:00'),
(2, 2, 2, 2, 2, 'Error Type 2', '2024-04-18 10:20:00'),
(3, 3, 3, 3, 3, 'Error Type 3', '2024-04-18 10:25:00');
