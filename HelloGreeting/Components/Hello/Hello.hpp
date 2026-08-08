// ======================================================================
// \title  Hello.hpp
// \author space
// \brief  hpp file for Hello component implementation class
// ======================================================================

#ifndef HelloGreeting_Hello_HPP
#define HelloGreeting_Hello_HPP

#include "HelloGreeting/Components/Hello/HelloComponentAc.hpp"

namespace HelloGreeting {

class Hello final : public HelloComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct Hello object
    Hello(const char* const compName  //!< The component name
    );

    //! Destroy Hello object
    ~Hello();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------
    U32 m_HiCount = 0;
    
    //! Handler implementation for command SAY_HI
    //!
    //! Command to issue greeting with maximum length of 20 characters
    void SAY_HI_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                           U32 cmdSeq,           //!< The command sequence number
                           const Fw::CmdStringArg& greeting) override;
};

}  // namespace HelloGreeting

#endif
