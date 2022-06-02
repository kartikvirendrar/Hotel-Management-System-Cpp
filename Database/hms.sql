-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 02, 2022 at 05:40 AM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 8.1.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `hms`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `name` varchar(100) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`name`, `username`, `password`) VALUES
('Kartik Rajput', 'kartikvirendrar', 'kartik123');

-- --------------------------------------------------------

--
-- Table structure for table `hotelowner`
--

CREATE TABLE `hotelowner` (
  `hotelId` int(100) NOT NULL,
  `hotelUsername` varchar(100) NOT NULL,
  `hotelName` varchar(100) NOT NULL,
  `hotelCity` varchar(100) NOT NULL,
  `hotelPincode` varchar(7) NOT NULL,
  `hotelPhone` varchar(11) NOT NULL,
  `hotelPassword` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `hotelowner`
--

INSERT INTO `hotelowner` (`hotelId`, `hotelUsername`, `hotelName`, `hotelCity`, `hotelPincode`, `hotelPhone`, `hotelPassword`) VALUES
(1, 'hotel1', 'Hotel_Name 1', 'jalgaon', '425001', '7727998598', 'hotel1pass'),
(4, 'hotel2', 'Hotel Name 2', 'jalgaon', '425001', '772799859', 'hotel2');

-- --------------------------------------------------------

--
-- Table structure for table `rbill`
--

CREATE TABLE `rbill` (
  `billId` int(100) NOT NULL,
  `hotelId` int(100) NOT NULL,
  `noItems` int(100) NOT NULL,
  `totPrice` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `rbill`
--

INSERT INTO `rbill` (`billId`, `hotelId`, `noItems`, `totPrice`) VALUES
(1, 4, 10, 743),
(2, 4, 6, 412);

-- --------------------------------------------------------

--
-- Table structure for table `reserveroom`
--

CREATE TABLE `reserveroom` (
  `bookingId` int(100) NOT NULL,
  `roomId` int(100) NOT NULL,
  `hotelId` int(100) NOT NULL,
  `userId` int(100) NOT NULL,
  `fromDate` date NOT NULL,
  `toDate` date NOT NULL,
  `rent` int(100) NOT NULL,
  `bookingDate` timestamp NOT NULL DEFAULT current_timestamp(),
  `payment` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `reserveroom`
--

INSERT INTO `reserveroom` (`bookingId`, `roomId`, `hotelId`, `userId`, `fromDate`, `toDate`, `rent`, `bookingDate`, `payment`) VALUES
(19, 1, 4, 0, '2022-05-25', '2022-05-26', 800, '2022-05-25 14:09:47', '0'),
(21, 2, 4, 0, '2022-05-27', '2022-05-27', 1500, '2022-05-25 14:10:06', '0'),
(22, 2, 4, 3, '2022-05-31', '2022-05-31', 1500, '2022-05-31 02:19:31', 'Cash'),
(23, 2, 4, 3, '2022-06-01', '2022-06-01', 1500, '2022-05-31 02:21:14', 'Cash'),
(25, 1, 4, 0, '2022-06-01', '2022-06-01', 800, '2022-05-31 12:48:14', '0'),
(28, 3, 4, 3, '2022-06-01', '2022-06-01', 1700, '2022-05-31 13:06:22', 'UPI:1043678'),
(29, 1, 4, 0, '2022-06-09', '2022-06-10', 800, '2022-06-01 08:17:57', '0'),
(30, 1, 4, 1, '2022-06-03', '2022-06-04', 800, '2022-06-01 08:20:22', 'Cash');

-- --------------------------------------------------------

--
-- Table structure for table `restaurant`
--

CREATE TABLE `restaurant` (
  `itemId` int(100) NOT NULL,
  `hotelId` int(100) NOT NULL,
  `itemName` varchar(200) NOT NULL,
  `itemPrice` int(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `restaurant`
--

INSERT INTO `restaurant` (`itemId`, `hotelId`, `itemName`, `itemPrice`) VALUES
(2, 4, 'Rice', 90),
(3, 4, 'Soup', 130),
(4, 4, 'Chappati', 11),
(5, 1, 'Rice', 10),
(6, 4, 'Potato', 80);

-- --------------------------------------------------------

--
-- Table structure for table `roomdetails`
--

CREATE TABLE `roomdetails` (
  `roomId` int(100) NOT NULL,
  `roomNo` int(100) NOT NULL,
  `roomType` varchar(100) NOT NULL,
  `acornonac` varchar(100) NOT NULL,
  `roomRent` int(100) NOT NULL,
  `hotelId` int(100) NOT NULL,
  `occupiedDates` longtext CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `roomdetails`
--

INSERT INTO `roomdetails` (`roomId`, `roomNo`, `roomType`, `acornonac`, `roomRent`, `hotelId`, `occupiedDates`) VALUES
(1, 4101, 'Single', 'AC', 800, 4, '25-05-2022 00:00:00+26-05-2022 00:00:00+01-06-2022 00:00:00+canceled+09-06-2022 00:00:00+10-06-2022 00:00:00+03-06-2022 00:00:00+04-06-2022 00:00:00'),
(2, 4102, 'Double', 'NONAC', 1500, 4, 'canceled+27-05-2022 00:00:00+31-05-2022 00:00:00+01-06-2022 00:00:00'),
(3, 4103, 'Double', 'NONAC', 1700, 4, '[]'),
(4, 4104, 'Single', 'NONAC', 900, 4, '[]'),
(5, 4105, 'Single', 'NONAC', 1005, 4, '[]'),
(7, 1101, 'Single', 'NONAC', 750, 1, '[]');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `userId` int(100) NOT NULL,
  `username` varchar(100) NOT NULL,
  `fullName` varchar(100) NOT NULL,
  `emailId` varchar(100) NOT NULL,
  `phone` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`userId`, `username`, `fullName`, `emailId`, `phone`, `password`) VALUES
(1, 'user1', 'Kartik V Rajput', 'kartikrajput357@gmail.com', '7727998598', 'user1'),
(3, 'user3', 'Kartik Rajput', 'kartik@rajput.com', '7727998598', 'user3');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD UNIQUE KEY `username` (`username`);

--
-- Indexes for table `hotelowner`
--
ALTER TABLE `hotelowner`
  ADD PRIMARY KEY (`hotelId`),
  ADD UNIQUE KEY `hotelUsername` (`hotelUsername`);

--
-- Indexes for table `rbill`
--
ALTER TABLE `rbill`
  ADD PRIMARY KEY (`billId`);

--
-- Indexes for table `reserveroom`
--
ALTER TABLE `reserveroom`
  ADD PRIMARY KEY (`bookingId`);

--
-- Indexes for table `restaurant`
--
ALTER TABLE `restaurant`
  ADD PRIMARY KEY (`itemId`);

--
-- Indexes for table `roomdetails`
--
ALTER TABLE `roomdetails`
  ADD PRIMARY KEY (`roomId`),
  ADD UNIQUE KEY `roomNo` (`roomNo`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`userId`),
  ADD UNIQUE KEY `username` (`username`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `hotelowner`
--
ALTER TABLE `hotelowner`
  MODIFY `hotelId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `rbill`
--
ALTER TABLE `rbill`
  MODIFY `billId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `reserveroom`
--
ALTER TABLE `reserveroom`
  MODIFY `bookingId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=31;

--
-- AUTO_INCREMENT for table `restaurant`
--
ALTER TABLE `restaurant`
  MODIFY `itemId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `roomdetails`
--
ALTER TABLE `roomdetails`
  MODIFY `roomId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `userId` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
