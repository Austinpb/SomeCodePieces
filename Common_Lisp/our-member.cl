(defun our-member (obj lst)
    (if (null lst)
        nil
        (if(eql (car lst) obj)
            lst
            (our-member obj(cdr lst)))))
(format t "test.~%~A" (our-member 'b '(a b c)) )
