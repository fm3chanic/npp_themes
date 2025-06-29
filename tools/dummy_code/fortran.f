! comment
! 2nd comment

PROGRAM BasicFortranSyntax
  IMPLICIT NONE

  INTEGER :: int_a, int_b, int_sum, int_product
  REAL :: real_x, real_y, real_quotient
  DOUBLE PRECISION :: dp_val
  CHARACTER(LEN=20) :: message
  LOGICAL :: is_true

  REAL, PARAMETER :: PI = 3.14159265

  int_a = 10
  int_b = 5
  real_x = 25.0
  real_y = 4.0
  dp_val = 1.234567890123456D0
  message = "Hello, Fortran!"
  is_true = .TRUE.

  int_sum = int_a + int_b
  int_product = int_a * int_b 
  real_quotient = real_x / real_y

  WRITE(*,*) "--- Arithmetic Operations ---"
  WRITE(*,*) "Sum of int_a and int_b:", int_sum
  WRITE(*,*) "Product of int_a and int_b:", int_product
  WRITE(*,*) "Quotient of real_x and real_y:", real_quotient
  WRITE(*,*)

  WRITE(*,*) "--- Conditional Statement ---"
  IF (int_a > int_b) THEN
    WRITE(*,*) "int_a is greater than int_b."
  ELSE IF (int_a < int_b) THEN
    WRITE(*,*) "int_a is less than int_b."
  ELSE
    WRITE(*,*) "int_a is equal to int_b."
  END IF
  WRITE(*,*)

  WRITE(*,*) "--- DO Loop (1 to 3) ---"
  INTEGER :: i
  DO i = 1, 3
    WRITE(*,*) "Loop iteration:", i
  END DO
  WRITE(*,*)

  WRITE(*,*) "--- DO WHILE Loop (Counting down) ---"
  INTEGER :: countdown_val
  countdown_val = 3
  DO WHILE (countdown_val > 0)
    WRITE(*,*) "Countdown:", countdown_val
    countdown_val = countdown_val - 1
  END DO
  WRITE(*,*)

  INTEGER, DIMENSION(5) :: my_array

  REAL, DIMENSION(2,3) :: my_matrix

  my_array = (/10, 20, 30, 40, 50/)

  INTEGER :: row, col
  DO row = 1, 2
    DO col = 1, 3
      my_matrix(row, col) = REAL(row * 10 + col)
    END DO
  END DO

  WRITE(*,*) "--- Array Examples ---"
  WRITE(*,*) "my_array elements:"
  WRITE(*,*) my_array
  WRITE(*,*) "my_matrix elements:"
  DO row = 1, 2
    WRITE(*,*) (my_matrix(row, j), j = 1, 3)
  END DO
  WRITE(*,*)

  WRITE(*,*) "--- Subroutine Call ---"
  CALL GreetUser(message)
  WRITE(*,*)

  WRITE(*,*) "--- Function Call ---"
  INTEGER :: factorial_result
  factorial_result = CalculateFactorial(int_b) ! int_b is 5
  WRITE(*,*) "Factorial of", int_b, "is:", factorial_result
  WRITE(*,*)

  WRITE(*,*) "--- Miscellaneous ---"
  WRITE(*,*) "Value of PI:", PI
  WRITE(*,*) "Double precision value:", dp_val
  WRITE(*,*) "Is it true?", is_true
  WRITE(*,*) "Message:", message

END PROGRAM BasicFortranSyntax

SUBROUTINE GreetUser(input_message)
  IMPLICIT NONE
  CHARACTER(LEN=*), INTENT(IN) :: input_message

  WRITE(*,*) "Greetings from the subroutine! Your message is:", input_message
END SUBROUTINE GreetUser

FUNCTION CalculateFactorial(n) RESULT(res)
  IMPLICIT NONE
  INTEGER, INTENT(IN) :: n
  INTEGER :: res, k

  IF (n < 0) THEN
    res = 0
  ELSE IF (n == 0) THEN
    res = 1
  ELSE
    res = 1
    DO k = 1, n
      res = res * k
    END DO
  END IF
END FUNCTION CalculateFactorial