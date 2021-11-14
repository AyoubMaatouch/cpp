#include <iostream>

class Karen {
        private:
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );

        public:
            void (Karen::*ptr[4]) (void);
            void complain( std::string level );
};