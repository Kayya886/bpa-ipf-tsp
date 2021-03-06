
        integer PF_MAXBUS, PF_MAXCBS, PF_MAXTBX, PF_MAXGEN, 
     &          PF_MAXXDT, PF_MAXPVC, PF_MAXREI
        parameter ( PF_MAXBUS  = 13000)           ! number of study busses
        parameter ( PF_MAXCBS  = PF_MAXBUS*2/3 )  ! continuation buses
        parameter ( PF_MAXTBX  = PF_MAXBUS/5 )    ! spec types (V,Q,G,O,X,F)
        parameter ( PF_MAXGEN  = PF_MAXBUS/10 )   ! type bg and bx buses
        parameter ( PF_MAXXDT  = PF_MAXBUS/16 )   ! type bx buses
        parameter ( PF_MAXPVC  = PF_MAXBUS/50 )   ! %-var controlled gens.
        parameter ( PF_MAXREI  = 300 )         ! max number of REI buses

        integer PF_MAXBRN, PF_MAXBRN2, PF_MAXLTC, PF_MAXPHS, PF_MAXYE  
        parameter ( PF_MAXBRN  = PF_MAXBUS*5/2 )   ! branches w/transposes
        parameter ( PF_MAXBRN2 = PF_MAXBRN*2 )    ! branches w/double entry
        parameter ( PF_MAXLTC  = PF_MAXBRN/10 )   ! ltc transformers
        parameter ( PF_MAXPHS  = PF_MAXBRN/100 )  ! phase shifters
        parameter ( PF_MAXYE   = PF_MAXBRN*5/2 )  ! off-diagonal elements

        integer PF_MAXCAR, PF_MAXCAZ, PF_MAXCAZR, PF_MAXCZN, 
     &          PF_MAXZON, PF_MAXTIE
        parameter ( PF_MAXCAR  =  100 )        ! interchange control areas
        parameter ( PF_MAXCAZ  =  100 )        ! zones per control areas
        parameter ( PF_MAXCAZR =   10 )        ! zones per area record
        parameter ( PF_MAXCZN  = 1200 )        ! zones in all control areas
        parameter ( PF_MAXZON  = PF_MAXCZN )   ! number of zones
        parameter ( PF_MAXTIE  = PF_MAXBRN/10 )   ! controlled area-i ties

        integer PF_MAX2DC, PF_MAXMDC, PF_MAXDCL
        parameter ( PF_MAX2DC  = 15 )          ! two-terminal dc buses
        parameter ( PF_MAXMDC  = 50 )          ! multi-terminal dc buses
        parameter ( PF_MAXDCL  = PF_MAX2DC+PF_MAXMDC ) ! dc lines (2t + mt)

        integer PF_MAXM, PF_MAXOLT
        parameter ( PF_MAXM    = 250 )         ! LP arrays in aref.cmn
C                                              ! & smallp
        parameter ( PF_MAXOLT  = 1000 )        !   overloaded transformers

C!!!    parameters    end

