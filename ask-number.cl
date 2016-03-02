(defun ask-number()
    (format t "please enter a number.   ")
    (let ((val (read)))
        (if (numberp val)
            val
            (ask-number))))
(ask-number)
