cmake_minimum_required(VERSION 3.28)
project(Prac_4 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Prac_4
        Aggregate.h
        Barn.h
        Class.h
        Truck.h
        ConcreteFarm.h
        CropField.h
        CropState.h
        DeliveryTruck.h
        DrySoil.h
        Farm.h
        Farmer.h
        FarmUnit.h
        FertilizerTruck.h
        FloodedSoil.h
        FruitfulSoil.h
        FullyGrown.h
        Growing.h
        Iterator.h
        LogBook.h
        Main.h
        Memory.h
        MoistSoil.h
        Seedling.h
        SoilState.h
        State.h)
