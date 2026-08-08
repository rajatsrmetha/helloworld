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

void Hi ::INTRODUCE_ME_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
  
    this->log_ACTIVITY_HI_IntroEvent();
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HelloGreeting
