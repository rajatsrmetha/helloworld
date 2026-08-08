module HelloGreeting {
    @ This is Hello Component
    active component Hello {

        @ Command to issue greeting with maximum length of 20 characters
        async command SAY_HI(
            greeting: string size 50 
        )

        @ Greeting event with maximum greeting length of 20 characters
        event SayHiEvent(
            greeting: string size 50 
        ) \
        severity activity high \
        format "Commanded as : {}"

        @ A count of the number of greetings issued
        telemetry HiCount: U32

        ###############################################################################
        # Standard AC Ports: Required for Channels, Events, Commands, and Parameters  #
        ###############################################################################
        @ Port for requesting the current time
        time get port timeCaller

        @ Enables command handling
        import Fw.Command

        @ Enables event handling
        import Fw.Event

        @ Enables telemetry channels handling
        import Fw.Channel

        @ Port to return the value of a parameter
        param get port prmGetOut

        @Port to set the value of a parameter
        param set port prmSetOut

    }
}