	.file	"rsa.c"
	.option nopic
	.attribute arch, "rv32i2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.globl	p
	.section	.srodata,"a"
	.align	2
	.type	p, @object
	.size	p, 4
p:
	.word	7919
	.globl	q
	.align	2
	.type	q, @object
	.size	q, 4
q:
	.word	1009
	.globl	__modsi3
	.text
	.align	2
	.globl	gcd
	.type	gcd, @function
gcd:
	addi	sp,sp,-48
	sw	ra,44(sp)
	sw	s0,40(sp)
	addi	s0,sp,48
	sw	a0,-36(s0)
	sw	a1,-40(s0)
	lw	a4,-36(s0)
	lw	a5,-40(s0)
	ble	a5,a4,.L2
	mv	a5,a4
.L2:
	sw	a5,-20(s0)
	j	.L3
.L6:
	lw	a5,-36(s0)
	lw	a1,-20(s0)
	mv	a0,a5
	call	__modsi3
	mv	a5,a0
	bne	a5,zero,.L4
	lw	a5,-40(s0)
	lw	a1,-20(s0)
	mv	a0,a5
	call	__modsi3
	mv	a5,a0
	beq	a5,zero,.L8
.L4:
	lw	a5,-20(s0)
	addi	a5,a5,-1
	sw	a5,-20(s0)
.L3:
	lw	a5,-20(s0)
	bgt	a5,zero,.L6
	j	.L5
.L8:
	nop
.L5:
	lw	a5,-20(s0)
	mv	a0,a5
	lw	ra,44(sp)
	lw	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	gcd, .-gcd
	.globl	__muldi3
	.globl	__moddi3
	.align	2
	.globl	power_mod
	.type	power_mod, @function
power_mod:
	addi	sp,sp,-96
	sw	ra,92(sp)
	sw	s0,88(sp)
	sw	s2,84(sp)
	sw	s3,80(sp)
	sw	s4,76(sp)
	sw	s5,72(sp)
	sw	s6,68(sp)
	sw	s7,64(sp)
	sw	s8,60(sp)
	sw	s9,56(sp)
	sw	s10,52(sp)
	sw	s11,48(sp)
	addi	s0,sp,96
	sw	a0,-68(s0)
	sw	a1,-72(s0)
	sw	a2,-76(s0)
	li	a5,1
	sw	a5,-52(s0)
	lw	a5,-68(s0)
	lw	a1,-76(s0)
	mv	a0,a5
	call	__modsi3
	mv	a5,a0
	sw	a5,-68(s0)
	j	.L10
.L12:
	lw	a5,-72(s0)
	andi	a5,a5,1
	beq	a5,zero,.L11
	lw	a5,-52(s0)
	mv	s2,a5
	srai	a5,a5,31
	mv	s3,a5
	lw	a5,-68(s0)
	mv	s4,a5
	srai	a5,a5,31
	mv	s5,a5
	mv	a2,s4
	mv	a3,s5
	mv	a0,s2
	mv	a1,s3
	call	__muldi3
	mv	a4,a0
	mv	a5,a1
	mv	a0,a4
	mv	a1,a5
	lw	a5,-76(s0)
	mv	s6,a5
	srai	a5,a5,31
	mv	s7,a5
	mv	a2,s6
	mv	a3,s7
	call	__moddi3
	mv	a4,a0
	mv	a5,a1
	sw	a4,-52(s0)
.L11:
	lw	a5,-68(s0)
	mv	s8,a5
	srai	a5,a5,31
	mv	s9,a5
	lw	a5,-68(s0)
	mv	s10,a5
	srai	a5,a5,31
	mv	s11,a5
	mv	a2,s10
	mv	a3,s11
	mv	a0,s8
	mv	a1,s9
	call	__muldi3
	mv	a4,a0
	mv	a5,a1
	mv	a0,a4
	mv	a1,a5
	lw	a5,-76(s0)
	sw	a5,-88(s0)
	srai	a5,a5,31
	sw	a5,-84(s0)
	lw	a2,-88(s0)
	lw	a3,-84(s0)
	call	__moddi3
	mv	a4,a0
	mv	a5,a1
	sw	a4,-68(s0)
	lw	a5,-72(s0)
	srli	a4,a5,31
	add	a5,a4,a5
	srai	a5,a5,1
	sw	a5,-72(s0)
.L10:
	lw	a5,-72(s0)
	bgt	a5,zero,.L12
	lw	a5,-52(s0)
	mv	a0,a5
	lw	ra,92(sp)
	lw	s0,88(sp)
	lw	s2,84(sp)
	lw	s3,80(sp)
	lw	s4,76(sp)
	lw	s5,72(sp)
	lw	s6,68(sp)
	lw	s7,64(sp)
	lw	s8,60(sp)
	lw	s9,56(sp)
	lw	s10,52(sp)
	lw	s11,48(sp)
	addi	sp,sp,96
	jr	ra
	.size	power_mod, .-power_mod
	.globl	__mulsi3
	.align	2
	.globl	mod_inverse
	.type	mod_inverse, @function
mod_inverse:
	addi	sp,sp,-48
	sw	ra,44(sp)
	sw	s0,40(sp)
	addi	s0,sp,48
	sw	a0,-36(s0)
	sw	a1,-40(s0)
	li	a5,2
	sw	a5,-20(s0)
	j	.L15
.L18:
	lw	a1,-20(s0)
	lw	a0,-36(s0)
	call	__mulsi3
	mv	a5,a0
	lw	a1,-40(s0)
	mv	a0,a5
	call	__modsi3
	mv	a5,a0
	mv	a4,a5
	li	a5,1
	bne	a4,a5,.L16
	lw	a5,-20(s0)
	j	.L17
.L16:
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L15:
	lw	a4,-20(s0)
	lw	a5,-40(s0)
	blt	a4,a5,.L18
	li	a5,-1
.L17:
	mv	a0,a5
	lw	ra,44(sp)
	lw	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	mod_inverse, .-mod_inverse
	.align	2
	.globl	generate_keys
	.type	generate_keys, @function
generate_keys:
	addi	sp,sp,-48
	sw	ra,44(sp)
	sw	s0,40(sp)
	addi	s0,sp,48
	sw	a0,-36(s0)
	sw	a1,-40(s0)
	sw	a2,-44(s0)
	li	a5,8192
	addi	a5,a5,-273
	li	a4,1009
	mv	a1,a4
	mv	a0,a5
	call	__mulsi3
	mv	a5,a0
	mv	a4,a5
	lw	a5,-44(s0)
	sw	a4,0(a5)
	li	a5,8192
	addi	a5,a5,-273
	addi	a4,a5,-1
	li	a5,1009
	addi	a5,a5,-1
	mv	a1,a5
	mv	a0,a4
	call	__mulsi3
	mv	a5,a0
	sw	a5,-24(s0)
	li	a5,2
	sw	a5,-20(s0)
	li	a5,2
	sw	a5,-20(s0)
	j	.L20
.L23:
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	call	gcd
	mv	a4,a0
	li	a5,1
	beq	a4,a5,.L25
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L20:
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	blt	a4,a5,.L23
	j	.L22
.L25:
	nop
.L22:
	lw	a5,-36(s0)
	lw	a4,-20(s0)
	sw	a4,0(a5)
	lw	a5,-36(s0)
	lw	a5,0(a5)
	lw	a1,-24(s0)
	mv	a0,a5
	call	mod_inverse
	mv	a4,a0
	lw	a5,-40(s0)
	sw	a4,0(a5)
	li	a5,0
	mv	a0,a5
	lw	ra,44(sp)
	lw	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	generate_keys, .-generate_keys
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-1872
	sw	ra,1868(sp)
	sw	s0,1864(sp)
	addi	s0,sp,1872
	li	t1,-8192
	add	sp,sp,t1
	li	a5,-8192
	addi	a4,s0,-16
	add	a5,a4,a5
	sw	a0,-1844(a5)
	li	a5,-8192
	addi	a4,s0,-16
	add	a5,a4,a5
	sw	a1,-1848(a5)
	li	a5,-8192
	addi	a4,s0,-16
	add	a5,a4,a5
	sw	zero,-1828(a5)
	addi	a4,a5,-1824
	li	a5,8192
	addi	a5,a5,1804
	mv	a2,a5
	li	a1,0
	mv	a0,a4
	call	memset
	sw	zero,-20(s0)
	j	.L27
.L28:
	lw	a5,-20(s0)
	andi	a4,a5,0xff
	li	a5,-8192
	addi	a3,s0,-16
	add	a3,a3,a5
	lw	a5,-20(s0)
	add	a5,a3,a5
	sb	a4,-1828(a5)
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L27:
	lw	a4,-20(s0)
	li	a5,8192
	addi	a5,a5,1807
	ble	a4,a5,.L28
	sw	zero,-24(s0)
	j	.L29
.L30:
	li	a5,-8192
	addi	a4,s0,-16
	add	a4,a4,a5
	lw	a5,-24(s0)
	add	a5,a4,a5
	lbu	a5,-1828(a5)
	sw	a5,-28(s0)
	li	a5,-8192
	addi	a5,a5,-1840
	addi	a4,s0,-16
	add	a3,a4,a5
	li	a5,-8192
	addi	a5,a5,-1836
	addi	a4,s0,-16
	add	a4,a4,a5
	li	a5,-8192
	addi	a5,a5,-1832
	addi	a2,s0,-16
	add	a5,a2,a5
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	generate_keys
	li	a5,-8192
	addi	a4,s0,-16
	add	a5,a4,a5
	lw	a4,-1832(a5)
	li	a5,-8192
	addi	a3,s0,-16
	add	a5,a3,a5
	lw	a5,-1840(a5)
	mv	a2,a5
	mv	a1,a4
	lw	a0,-28(s0)
	call	power_mod
	sw	a0,-32(s0)
	li	a5,-8192
	addi	a4,s0,-16
	add	a5,a4,a5
	lw	a4,-1836(a5)
	li	a5,-8192
	addi	a3,s0,-16
	add	a5,a3,a5
	lw	a5,-1840(a5)
	mv	a2,a5
	mv	a1,a4
	lw	a0,-32(s0)
	call	power_mod
	mv	a5,a0
	sb	a5,-33(s0)
	lw	a5,-24(s0)
	addi	a5,a5,1
	sw	a5,-24(s0)
.L29:
	lw	a4,-24(s0)
	li	a5,8192
	addi	a5,a5,1807
	ble	a4,a5,.L30
	li	a5,0
	mv	a0,a5
	li	t1,8192
	add	sp,sp,t1
	lw	ra,1868(sp)
	lw	s0,1864(sp)
	addi	sp,sp,1872
	jr	ra
	.size	main, .-main
	.ident	"GCC: () 10.2.0"
