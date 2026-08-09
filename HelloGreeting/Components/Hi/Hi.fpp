module HelloGreeting {
    @ Component for F Prime FSW framework.
    active component Hi {

        @ Command that emits an introduction event
        async command INTRODUCE_ME()

        @ Introduction event
        event IntroEvent(
        ) \
        severity activity high \
        format "Nice to Meet you"

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