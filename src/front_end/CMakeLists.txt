#Project infomations
cmake_minimum_required(VERSION 3.21)
project(tbox)

message ("Build Type: ${CMAKE_BUILD_TYPE}")

set(CMAKE_CXX_STANDARD 17)
message ("C++ Standard: ${CMAKE_CXX_STANDARD}")

set(LLVM_LINK_COMPONENTS Demangle
Support
TableGen
Core
FuzzMutate
FileCheck
InterfaceStub
IRReader
CodeGen
SelectionDAG
AsmPrinter
MIRParser
GlobalISel
BinaryFormat
BitReader
BitWriter
BitstreamReader
DWARFLinker
Extensions
FrontendOpenACC
FrontendOpenMP
TransformUtils
Instrumentation
AggressiveInstCombine
InstCombine
ScalarOpts
ipo
Vectorize
HelloNew
ObjCARCOpts
Coroutines
CFGuard
Linker
Analysis
LTO
MC
MCParser
MCDisassembler
MCA
Object
ObjectYAML
Option
Remarks
DebugInfoDWARF
DebugInfoGSYM
DebugInfoMSF
DebugInfoCodeView
DebugInfoPDB
Symbolize
ExecutionEngine
Interpreter
JITLink
MCJIT
OrcJIT
OrcShared
OrcTargetProcess
RuntimeDyld
Target
AsmParser
LineEditor
ProfileData
Coverage
Passes
TextAPI
DlltoolDriver
LibDriver
XRay
WindowsManifest
LTO
Remarks
native
)

#Find LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")

#Find sources
aux_source_directory(./src SRC_LIST)
message ("Sources: ${SRC_LIST}")

#Config Compiler
if (MSVC_VERSION)
    message ("Compiler: msvc")
    set(COMPILER_NAME "msvc")
endif()

#Set Includes Directories
message ("Include directories: ${PROJECT_SOURCE_DIR}/libs/Include/antlr ${LLVM_INCLUDE_DIR}")
include_directories(
    ${PROJECT_SOURCE_DIR}/libs/Include/antlr
    ${LLVM_INCLUDE_DIR}
)

#Set Libraries Directories
message ("Libraries directories: ${PROJECT_SOURCE_DIR}/libs/Lib/antlr/${COMPILER_NAME}/release/")
link_directories(
    ${PROJECT_SOURCE_DIR}/libs/Lib/antlr/msvc/release/
)

#Set Output
add_executable(tbox ${SRC_LIST})
message ("Output: tbox")

llvm_map_components_to_libnames(llvm_libs ${LLVM_LINK_COMPONENTS})
add_definitions(${LLVM_DEFINITIONS})
# add_definitions(-D__DEBUG__)
message ("Defininitions:${LLVM_DEFINITIONS}")

#Config llvm
message ("Libraries: antlr4-runtime ${llvm_libs} LLVM-C")

#Link
target_link_libraries(tbox antlr4-runtime ${llvm_libs} LLVM-C)