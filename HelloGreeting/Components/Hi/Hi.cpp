// ======================================================================
// \title  Hi.cpp
// \author space
// \brief  cpp file for Hi component implementation class
// ======================================================================

#include "HelloGreeting/Components/Hi/Hi.hpp"

namespace HelloGreeting {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

Hi ::Hi(const char* const compName) : HiComponentBase(compName) {}

Hi ::~Hi() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void Hi ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HelloGreeting
