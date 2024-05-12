#include <stdio.h>

#define MEMORY_SIZE 15

// Define the registers
int R1, R2, R3, PC;

// Define the memory
int memory[MEMORY_SIZE];

// Function to print the memory, registers, and PC
void printState() {
    printf("Memory:\n");
    for (int i = 0; i < MEMORY_SIZE; i++) {
        printf("%02d: %d\n", i, memory[i]);
    }
    printf("Registers:\n");
    printf("R1: %d\n", R1);
    printf("R2: %d\n", R2);
    printf("R3: %d\n", R3);
    printf("PC: %d\n", PC);
    printf("*************************\n");
}

// Function to execute the ADD instruction
void addInstruction(int address) {
    R1 = memory[address];
    R2 = memory[address + 1];
    R3 = R1 + R2;
    PC += 3;
}

// Function to execute the SUB instruction
void subInstruction(int address) {
    R1 = memory[address];
    R2 = memory[address + 1];
    R3 = R1 - R2;
    PC += 3;
}

// Function to execute the CMP instruction
void cmpInstruction(int address) {
    R1 = memory[address];
    R2 = memory[address + 1];
    if (R1 >= R2) {
        R3 = 1;
    } else {
        R3 = 0;
    }
    PC += 3;
}

// Function to execute the IMP instruction
void impInstruction(int address) {
    int memoryAddress = memory[address];
    switch (memoryAddress) {
        case 0:
            printf("IMP: %d\n", R1);
            break;
        case 3:
            printf("IMP: %d\n", PC);
            break;
        default:
            printf("IMP: %d\n", memory[memoryAddress]);
            break;
    }
    PC += 2;
}

// Function to execute the JMP instruction
void jmpInstruction(int address) {
    PC = memory[address];
}

// Function to execute the STO instruction
void stoInstruction(int address) {
    int memoryAddress = memory[address];
    memory[memoryAddress] = R3;
    PC += 2;
}

int main() {
    // Initialize the registers and PC
    R1 = 0;
    R2 = 0;
    R3 = 0;
    PC = 4;

    // Load the program into memory
    // TODO: Add your program instructions here

    // Execute the program
    while (1) {
        // Fetch the instruction from memory
        int instruction = memory[PC];

        // Decode and execute the instruction
        switch (instruction) {
            case 0:
                // END instruction
                printState();
                return 0;
            case 1:
                // ADD instruction
                addInstruction(PC + 1);
                break;
            case 2:
                // SUB instruction
                subInstruction(PC + 1);
                break;
            case 3:
                // CMP instruction
                cmpInstruction(PC + 1);
                break;
            case 4:
                // IMP instruction
                impInstruction(PC + 1);
                break;
            case 5:
                // JMP instruction
                jmpInstruction(PC + 1);
                break;
            case 6:
                // STO instruction
                stoInstruction(PC + 1);
                break;
            default:
                printf("Invalid instruction\n");
                return 1;
        }

        // Print the state after each instruction
        printState();
    }

    return 0;
}
