#ifndef ERRORS_H
#define ERRORS_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Errors.h"
#include "globalvals.h"
#include "table.h"
#include "util.h"

/* Represents an error with an associated error ID and error message */
typedef struct Error {
    int error_id;     /* Unique identifier for the error */
    char *error_msg;  /* Error message associated with the error */
} Error;

/* Represents error codes for various types of errors */
typedef enum ERROR_CODES {
    /* The following errors are macro related or general */
    ERROR_CODE_0 = 0,
    ERROR_CODE_1,
    ERROR_CODE_2,
    ERROR_CODE_3,
    ERROR_CODE_4,
    ERROR_CODE_5,
    ERROR_CODE_6,
    ERROR_CODE_7,
    ERROR_CODE_8,
    ERROR_CODE_9,
    ERROR_CODE_10,
    ERROR_CODE_11,
    ERROR_CODE_12,
    ERROR_CODE_13,
    ERROR_CODE_14,
    ERROR_CODE_15,
    ERROR_CODE_16,
    ERROR_CODE_17,
    /* Enumeration skip for future macro related errors */

    /* The following errors are related to reading command assembly lines */
    ERROR_CODE_29 = 29,
    ERROR_CODE_30,
    ERROR_CODE_31,
    ERROR_CODE_32,
    ERROR_CODE_33,
    ERROR_CODE_34,
    ERROR_CODE_35,
    ERROR_CODE_36,
    ERROR_CODE_37,
    ERROR_CODE_38,
    ERROR_CODE_39,
    ERROR_CODE_40,
    ERROR_CODE_41,
    ERROR_CODE_42,
    ERROR_CODE_43,
    ERROR_CODE_44,
    ERROR_CODE_45,
    ERROR_CODE_46,
    ERROR_CODE_47,
    ERROR_CODE_48,
    ERROR_CODE_49,
    /* Enumeration skip for future command reading related errors */

    /* The following errors are related to reading instruction .data or .string lines related errors */
    ERROR_CODE_50 = 50,
    ERROR_CODE_51,
    ERROR_CODE_52,
    ERROR_CODE_53,
    ERROR_CODE_54,
    ERROR_CODE_55,
    ERROR_CODE_56,
    ERROR_CODE_57,
    ERROR_CODE_58,
    ERROR_CODE_59
} ERROR_CODES;

/**
 * @brief Prints an external error message.
 *
 * This function prints to stdout an error that is related to an error in the source file
 * with error number and the error location in the source file
 * @param error_code error number
 * @param file a pointer to a struct which contains the source file name and line information
 */
void print_external_error(int error_code, location file);

/**
 * @brief Prints an internal error message.
 *
 * This function prints to stdout an error that is a result of an internal process and NOT an error in the source file
 * @param error_code error number
 */
void print_internal_error(int error_code);

#endif