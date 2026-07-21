#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
	_isSigned = other._isSigned;
    return (*this);
}

Form::~Form()
{
}

const std::string &Form::getFormName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_isSigned);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    out << f.getFormName() << ", signed: " << f.getIsSigned()
        << ", grade to sign: " << f.getGradeToSign()
        << ", grade to execute: " << f.getGradeToExecute();
    return (out);
}