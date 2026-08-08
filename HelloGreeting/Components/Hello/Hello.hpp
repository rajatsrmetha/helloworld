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

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace HelloGreeting

#endif
