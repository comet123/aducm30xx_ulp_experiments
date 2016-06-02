
#define PWMEN_BIT	    0
#define HMODE_EN_BIT        1
#define HMODE_DIR_BIT       2
#define PWM_LCOMP_BIT       3
#define HMODE_HOFF_BIT      4
#define HMODE_POINV_BIT     5  
#define HMODE_ENA_BIT       9  
#define PWMIEN_BIT          10  
#define PWM1INV_BIT         11  
#define PWM3INV_BIT         12  
#define PWM5INV_BIT         13  
#define PWM7INV_BIT         14  
#define PWM_SYNC_BIT        15  

#define PWMEN	        (1 << PWMEN_BIT)
#define HMODE_EN        (1 << HMODE_EN_BIT)
#define HMODE_DIR       (1 << HMODE_DIR_BIT)
#define PWM_LCOMP       (1 << PWM_LCOMP_BIT)
#define HMODE_HOFF      (1 << HMODE_HOFF_BIT)
#define HMODE_POINV     (1 << HMODE_POINV_BIT)  
#define HMODE_ENA       (1 << HMODE_ENA_BIT)  
#define PWMIEN          (1 << PWMIEN_BIT)  
#define PWM1INV         (1 << PWM1INV_BIT)  
#define PWM3INV         (1 << PWM3INV_BIT)  
#define PWM5INV         (1 << PWM5INV_BIT)
#define PWM7INV         (1 << PWM7INV_BIT)  
#define PWM_SYNC        (1 << PWM_SYNC_BIT)  

#define PWMCP_U_BY_2    (0 << 6)  
#define PWMCP_U_BY_4    (1 << 6)  
#define PWMCP_U_BY_8    (2 << 6)  
#define PWMCP_U_BY_16   (3 << 6)  
#define PWMCP_U_BY_32   (4 << 6)  
#define PWMCP_U_BY_64   (5 << 6)  
#define PWMCP_U_BY_128  (6 << 6)  
#define PWMCP_U_BY_256  (7 << 6)  

#define IRQPWM0CLR      1
#define IRQPWM1CLR      (1 << 1)
#define IRQPWM2CLR      (1 << 2)
#define IRQPWM3CLR      (1 << 3)


#define  write_pwm_cfg(pwm_num,COMP0,COMP1,COMP2,LEN)   write(PWM ## pwm_num ## COM0_A,COMP0) ; \
                                                        write(PWM ## pwm_num ## COM1_A,COMP1) ; \
                                                        write(PWM ## pwm_num ## COM2_A,COMP2) ; \
                                                        write(PWM ## pwm_num ## LEN_A,LEN)  

