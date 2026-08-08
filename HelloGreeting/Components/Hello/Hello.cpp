// ======================================================================
// \title  Hello.cpp
// \author space
// \brief  cpp file for Hello component implementation class
// ======================================================================

#include "HelloGreeting/Components/Hello/Hello.hpp"

namespace HelloGreeting {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

Hello ::Hello(const char* const compName) : HelloComponentBase(compName) {}

Hello ::~Hello() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void Hello ::SAY_HI_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, const Fw::CmdStringArg& greeting) {

    Fw::LogStringArg eventGreeting(greeting.toChar());
    this->log_ACTIVITY_HI_SayHiEvent(eventGreeting);

    this->tlmWrite_HiCount(++this->m_HiCount);
    
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HelloGreeting
