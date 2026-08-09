// ======================================================================
// \title  Hi.hpp
// \author space
// \brief  hpp file for Hi component implementation class
// ======================================================================

#ifndef HelloGreeting_Hi_HPP
#define HelloGreeting_Hi_HPP

#include "HelloGreeting/Components/Hi/HiComponentAc.hpp"

namespace HelloGreeting {

class Hi final : public HiComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct Hi object
    Hi(const char* const compName  //!< The component name
    );

    //! Destroy Hi object
    ~Hi();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command INTRODUCE_ME
    //!
    //! Command that emits an introduction event
    void INTRODUCE_ME_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                                 U32 cmdSeq            //!< The command sequence number
                                 ) override;
};

}  // namespace HelloGreeting

#endif
