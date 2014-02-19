/*
 * =====================================================================================
 *
 *       Filename:  Polynomial.h
 *
 *    Description:  多项式（polynomial）类接口
 *
 *        Version:  1.0
 *        Created:  2014年02月17日 11时35分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <list>

class Polynomial
{
	public:
		struct Term 
		{
			friend std::ostream& operator<<(std::ostream&, const Term&);
			Term (double = 0.0, unsigned = 0);
			bool operator==(const Term&) const;
			bool operator<(const Term&) const;
			double _coef;
			unsigned _exp;
		};
		friend std::ostream& operator<<(std::ostream&, const Polynomial&);
		friend Polynomial operator*(const double, const Polynomial&);
		friend Polynomial operator+(const Polynomial&, const Polynomial&);
		Polynomial(double = 0, unsigned = 0);
		bool operator==(const Polynomial&) const;
		double operator()(double) const;
		long degree() const;
		unsigned terms() const;
		static const Polynomial ZERO;
	protected:
		std::list<Term> _terms;
		long _degree;
		void reduce();
		typedef std::list<Term> TermList;
		typedef std::list<Term>::iterator It;
		typedef std::list<Term>::const_iterator CIt;
};

#endif 		// POLYNOMIAL_H
