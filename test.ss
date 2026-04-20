
test:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__@Base>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	ret

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 72 2f 00 00    	push   0x2f72(%rip)        # 3f98 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 74 2f 00 00    	jmp    *0x2f74(%rip)        # 3fa0 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)
    1030:	f3 0f 1e fa          	endbr64
    1034:	68 00 00 00 00       	push   $0x0
    1039:	e9 e2 ff ff ff       	jmp    1020 <_init+0x20>
    103e:	66 90                	xchg   %ax,%ax
    1040:	f3 0f 1e fa          	endbr64
    1044:	68 01 00 00 00       	push   $0x1
    1049:	e9 d2 ff ff ff       	jmp    1020 <_init+0x20>
    104e:	66 90                	xchg   %ax,%ax
    1050:	f3 0f 1e fa          	endbr64
    1054:	68 02 00 00 00       	push   $0x2
    1059:	e9 c2 ff ff ff       	jmp    1020 <_init+0x20>
    105e:	66 90                	xchg   %ax,%ax
    1060:	f3 0f 1e fa          	endbr64
    1064:	68 03 00 00 00       	push   $0x3
    1069:	e9 b2 ff ff ff       	jmp    1020 <_init+0x20>
    106e:	66 90                	xchg   %ax,%ax
    1070:	f3 0f 1e fa          	endbr64
    1074:	68 04 00 00 00       	push   $0x4
    1079:	e9 a2 ff ff ff       	jmp    1020 <_init+0x20>
    107e:	66 90                	xchg   %ax,%ax
    1080:	f3 0f 1e fa          	endbr64
    1084:	68 05 00 00 00       	push   $0x5
    1089:	e9 92 ff ff ff       	jmp    1020 <_init+0x20>
    108e:	66 90                	xchg   %ax,%ax

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090:	f3 0f 1e fa          	endbr64
    1094:	ff 25 5e 2f 00 00    	jmp    *0x2f5e(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    109a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

00000000000010a0 <free@plt>:
    10a0:	f3 0f 1e fa          	endbr64
    10a4:	ff 25 fe 2e 00 00    	jmp    *0x2efe(%rip)        # 3fa8 <free@GLIBC_2.2.5>
    10aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010b0 <__stack_chk_fail@plt>:
    10b0:	f3 0f 1e fa          	endbr64
    10b4:	ff 25 f6 2e 00 00    	jmp    *0x2ef6(%rip)        # 3fb0 <__stack_chk_fail@GLIBC_2.4>
    10ba:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010c0 <memset@plt>:
    10c0:	f3 0f 1e fa          	endbr64
    10c4:	ff 25 ee 2e 00 00    	jmp    *0x2eee(%rip)        # 3fb8 <memset@GLIBC_2.2.5>
    10ca:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010d0 <malloc@plt>:
    10d0:	f3 0f 1e fa          	endbr64
    10d4:	ff 25 e6 2e 00 00    	jmp    *0x2ee6(%rip)        # 3fc0 <malloc@GLIBC_2.2.5>
    10da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010e0 <realloc@plt>:
    10e0:	f3 0f 1e fa          	endbr64
    10e4:	ff 25 de 2e 00 00    	jmp    *0x2ede(%rip)        # 3fc8 <realloc@GLIBC_2.2.5>
    10ea:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010f0 <__printf_chk@plt>:
    10f0:	f3 0f 1e fa          	endbr64
    10f4:	ff 25 d6 2e 00 00    	jmp    *0x2ed6(%rip)        # 3fd0 <__printf_chk@GLIBC_2.3.4>
    10fa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001100 <main>:
    1100:	f3 0f 1e fa          	endbr64
    1104:	41 56                	push   %r14
    1106:	41 55                	push   %r13
    1108:	41 54                	push   %r12
    110a:	55                   	push   %rbp
    110b:	53                   	push   %rbx
    110c:	48 83 ec 40          	sub    $0x40,%rsp
    1110:	48 8d 6c 24 08       	lea    0x8(%rsp),%rbp
    1115:	4c 8d 44 24 20       	lea    0x20(%rsp),%r8
    111a:	48 89 e7             	mov    %rsp,%rdi
    111d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1124:	00 00 
    1126:	48 89 44 24 38       	mov    %rax,0x38(%rsp)
    112b:	31 c0                	xor    %eax,%eax
    112d:	48 8d 4c 24 18       	lea    0x18(%rsp),%rcx
    1132:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
    1137:	48 89 ee             	mov    %rbp,%rsi
    113a:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
    1141:	00 
    1142:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
    1149:	00 00 
    114b:	48 c7 44 24 18 00 00 	movq   $0x0,0x18(%rsp)
    1152:	00 00 
    1154:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
    115b:	00 00 
    115d:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
    1164:	00 00 
    1166:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
    116d:	00 00 
    116f:	48 c7 44 24 10 08 00 	movq   $0x8,0x10(%rsp)
    1176:	00 00 
    1178:	e8 43 02 00 00       	call   13c0 <push__temp494v>
    117d:	85 c0                	test   %eax,%eax
    117f:	0f 85 1b 01 00 00    	jne    12a0 <main+0x1a0>
    1185:	48 8b 44 24 20       	mov    0x20(%rsp),%rax
    118a:	48 85 c0             	test   %rax,%rax
    118d:	0f 84 0d 01 00 00    	je     12a0 <main+0x1a0>
    1193:	4c 8d 44 24 28       	lea    0x28(%rsp),%r8
    1198:	48 8d 4c 24 18       	lea    0x18(%rsp),%rcx
    119d:	48 89 ee             	mov    %rbp,%rsi
    11a0:	48 89 e7             	mov    %rsp,%rdi
    11a3:	49 be 9a 99 99 99 99 	movabs $0x3fb999999999999a,%r14
    11aa:	99 b9 3f 
    11ad:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
    11b2:	4c 89 30             	mov    %r14,(%rax)
    11b5:	e8 06 02 00 00       	call   13c0 <push__temp494v>
    11ba:	85 c0                	test   %eax,%eax
    11bc:	0f 85 de 00 00 00    	jne    12a0 <main+0x1a0>
    11c2:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    11c7:	48 85 c0             	test   %rax,%rax
    11ca:	0f 84 d0 00 00 00    	je     12a0 <main+0x1a0>
    11d0:	4c 89 30             	mov    %r14,(%rax)
    11d3:	4c 8d 44 24 30       	lea    0x30(%rsp),%r8
    11d8:	48 8d 4c 24 18       	lea    0x18(%rsp),%rcx
    11dd:	48 89 ee             	mov    %rbp,%rsi
    11e0:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
    11e5:	48 89 e7             	mov    %rsp,%rdi
    11e8:	e8 d3 01 00 00       	call   13c0 <push__temp494v>
    11ed:	85 c0                	test   %eax,%eax
    11ef:	0f 85 ab 00 00 00    	jne    12a0 <main+0x1a0>
    11f5:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    11fa:	48 85 c0             	test   %rax,%rax
    11fd:	0f 84 9d 00 00 00    	je     12a0 <main+0x1a0>
    1203:	4c 89 30             	mov    %r14,(%rax)
    1206:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    120b:	31 c0                	xor    %eax,%eax
    120d:	48 8d 0d f0 0d 00 00 	lea    0xdf0(%rip),%rcx        # 2004 <_IO_stdin_used+0x4>
    1214:	48 8d 35 fb 0d 00 00 	lea    0xdfb(%rip),%rsi        # 2016 <_IO_stdin_used+0x16>
    121b:	bf 02 00 00 00       	mov    $0x2,%edi
    1220:	48 89 da             	mov    %rbx,%rdx
    1223:	e8 c8 fe ff ff       	call   10f0 <__printf_chk@plt>
    1228:	48 83 7c 24 18 01    	cmpq   $0x1,0x18(%rsp)
    122e:	76 70                	jbe    12a0 <main+0x1a0>
    1230:	48 83 fb 01          	cmp    $0x1,%rbx
    1234:	76 6a                	jbe    12a0 <main+0x1a0>
    1236:	48 8b 04 24          	mov    (%rsp),%rax
    123a:	48 89 c3             	mov    %rax,%rbx
    123d:	48 03 5c 24 10       	add    0x10(%rsp),%rbx
    1242:	74 5c                	je     12a0 <main+0x1a0>
    1244:	48 b9 9a 99 99 99 99 	movabs $0x3fc999999999999a,%rcx
    124b:	99 c9 3f 
    124e:	48 89 0b             	mov    %rcx,(%rbx)
    1251:	48 85 c0             	test   %rax,%rax
    1254:	74 4a                	je     12a0 <main+0x1a0>
    1256:	f2 0f 10 00          	movsd  (%rax),%xmm0
    125a:	bf 02 00 00 00       	mov    $0x2,%edi
    125f:	b8 01 00 00 00       	mov    $0x1,%eax
    1264:	48 8d 15 a9 0d 00 00 	lea    0xda9(%rip),%rdx        # 2014 <_IO_stdin_used+0x14>
    126b:	48 8d 35 ab 0d 00 00 	lea    0xdab(%rip),%rsi        # 201d <_IO_stdin_used+0x1d>
    1272:	e8 79 fe ff ff       	call   10f0 <__printf_chk@plt>
    1277:	f2 0f 10 03          	movsd  (%rbx),%xmm0
    127b:	bf 02 00 00 00       	mov    $0x2,%edi
    1280:	48 8d 15 8d 0d 00 00 	lea    0xd8d(%rip),%rdx        # 2014 <_IO_stdin_used+0x14>
    1287:	48 8d 35 8f 0d 00 00 	lea    0xd8f(%rip),%rsi        # 201d <_IO_stdin_used+0x1d>
    128e:	b8 01 00 00 00       	mov    $0x1,%eax
    1293:	e8 58 fe ff ff       	call   10f0 <__printf_chk@plt>
    1298:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    129f:	00 
    12a0:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    12a5:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    12ac:	00 00 
    12ae:	75 0f                	jne    12bf <main+0x1bf>
    12b0:	48 83 c4 40          	add    $0x40,%rsp
    12b4:	31 c0                	xor    %eax,%eax
    12b6:	5b                   	pop    %rbx
    12b7:	5d                   	pop    %rbp
    12b8:	41 5c                	pop    %r12
    12ba:	41 5d                	pop    %r13
    12bc:	41 5e                	pop    %r14
    12be:	c3                   	ret
    12bf:	e8 ec fd ff ff       	call   10b0 <__stack_chk_fail@plt>
    12c4:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    12cb:	00 00 00 
    12ce:	66 90                	xchg   %ax,%ax

00000000000012d0 <_start>:
    12d0:	f3 0f 1e fa          	endbr64
    12d4:	31 ed                	xor    %ebp,%ebp
    12d6:	49 89 d1             	mov    %rdx,%r9
    12d9:	5e                   	pop    %rsi
    12da:	48 89 e2             	mov    %rsp,%rdx
    12dd:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    12e1:	50                   	push   %rax
    12e2:	54                   	push   %rsp
    12e3:	45 31 c0             	xor    %r8d,%r8d
    12e6:	31 c9                	xor    %ecx,%ecx
    12e8:	48 8d 3d 11 fe ff ff 	lea    -0x1ef(%rip),%rdi        # 1100 <main>
    12ef:	ff 15 e3 2c 00 00    	call   *0x2ce3(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    12f5:	f4                   	hlt
    12f6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    12fd:	00 00 00 

0000000000001300 <deregister_tm_clones>:
    1300:	48 8d 3d 09 2d 00 00 	lea    0x2d09(%rip),%rdi        # 4010 <__TMC_END__>
    1307:	48 8d 05 02 2d 00 00 	lea    0x2d02(%rip),%rax        # 4010 <__TMC_END__>
    130e:	48 39 f8             	cmp    %rdi,%rax
    1311:	74 15                	je     1328 <deregister_tm_clones+0x28>
    1313:	48 8b 05 c6 2c 00 00 	mov    0x2cc6(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    131a:	48 85 c0             	test   %rax,%rax
    131d:	74 09                	je     1328 <deregister_tm_clones+0x28>
    131f:	ff e0                	jmp    *%rax
    1321:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1328:	c3                   	ret
    1329:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001330 <register_tm_clones>:
    1330:	48 8d 3d d9 2c 00 00 	lea    0x2cd9(%rip),%rdi        # 4010 <__TMC_END__>
    1337:	48 8d 35 d2 2c 00 00 	lea    0x2cd2(%rip),%rsi        # 4010 <__TMC_END__>
    133e:	48 29 fe             	sub    %rdi,%rsi
    1341:	48 89 f0             	mov    %rsi,%rax
    1344:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1348:	48 c1 f8 03          	sar    $0x3,%rax
    134c:	48 01 c6             	add    %rax,%rsi
    134f:	48 d1 fe             	sar    $1,%rsi
    1352:	74 14                	je     1368 <register_tm_clones+0x38>
    1354:	48 8b 05 95 2c 00 00 	mov    0x2c95(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    135b:	48 85 c0             	test   %rax,%rax
    135e:	74 08                	je     1368 <register_tm_clones+0x38>
    1360:	ff e0                	jmp    *%rax
    1362:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1368:	c3                   	ret
    1369:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001370 <__do_global_dtors_aux>:
    1370:	f3 0f 1e fa          	endbr64
    1374:	80 3d 95 2c 00 00 00 	cmpb   $0x0,0x2c95(%rip)        # 4010 <__TMC_END__>
    137b:	75 2b                	jne    13a8 <__do_global_dtors_aux+0x38>
    137d:	55                   	push   %rbp
    137e:	48 83 3d 72 2c 00 00 	cmpq   $0x0,0x2c72(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1385:	00 
    1386:	48 89 e5             	mov    %rsp,%rbp
    1389:	74 0c                	je     1397 <__do_global_dtors_aux+0x27>
    138b:	48 8b 3d 76 2c 00 00 	mov    0x2c76(%rip),%rdi        # 4008 <__dso_handle>
    1392:	e8 f9 fc ff ff       	call   1090 <__cxa_finalize@plt>
    1397:	e8 64 ff ff ff       	call   1300 <deregister_tm_clones>
    139c:	c6 05 6d 2c 00 00 01 	movb   $0x1,0x2c6d(%rip)        # 4010 <__TMC_END__>
    13a3:	5d                   	pop    %rbp
    13a4:	c3                   	ret
    13a5:	0f 1f 00             	nopl   (%rax)
    13a8:	c3                   	ret
    13a9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000013b0 <frame_dummy>:
    13b0:	f3 0f 1e fa          	endbr64
    13b4:	e9 77 ff ff ff       	jmp    1330 <register_tm_clones>
    13b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000013c0 <push__temp494v>:
    13c0:	f3 0f 1e fa          	endbr64
    13c4:	41 57                	push   %r15
    13c6:	41 56                	push   %r14
    13c8:	41 55                	push   %r13
    13ca:	49 89 fd             	mov    %rdi,%r13
    13cd:	41 54                	push   %r12
    13cf:	49 89 f4             	mov    %rsi,%r12
    13d2:	55                   	push   %rbp
    13d3:	48 89 d5             	mov    %rdx,%rbp
    13d6:	53                   	push   %rbx
    13d7:	48 89 cb             	mov    %rcx,%rbx
    13da:	48 83 ec 38          	sub    $0x38,%rsp
    13de:	48 8b 09             	mov    (%rcx),%rcx
    13e1:	4c 8b 1e             	mov    (%rsi),%r11
    13e4:	4c 8b 0f             	mov    (%rdi),%r9
    13e7:	4c 8b 12             	mov    (%rdx),%r10
    13ea:	4c 8d 71 01          	lea    0x1(%rcx),%r14
    13ee:	4c 39 d9             	cmp    %r11,%rcx
    13f1:	73 2d                	jae    1420 <push__temp494v+0x60>
    13f3:	4d 89 4d 00          	mov    %r9,0x0(%r13)
    13f7:	31 c0                	xor    %eax,%eax
    13f9:	4d 89 1c 24          	mov    %r11,(%r12)
    13fd:	4c 89 55 00          	mov    %r10,0x0(%rbp)
    1401:	4c 0f af d1          	imul   %rcx,%r10
    1405:	4c 89 33             	mov    %r14,(%rbx)
    1408:	4d 01 d1             	add    %r10,%r9
    140b:	4d 89 08             	mov    %r9,(%r8)
    140e:	48 83 c4 38          	add    $0x38,%rsp
    1412:	5b                   	pop    %rbx
    1413:	5d                   	pop    %rbp
    1414:	41 5c                	pop    %r12
    1416:	41 5d                	pop    %r13
    1418:	41 5e                	pop    %r14
    141a:	41 5f                	pop    %r15
    141c:	c3                   	ret
    141d:	0f 1f 00             	nopl   (%rax)
    1420:	48 89 c8             	mov    %rcx,%rax
    1423:	48 d1 e8             	shr    $1,%rax
    1426:	4c 01 f0             	add    %r14,%rax
    1429:	49 89 c7             	mov    %rax,%r15
    142c:	49 39 c3             	cmp    %rax,%r11
    142f:	74 0a                	je     143b <push__temp494v+0x7b>
    1431:	48 85 c0             	test   %rax,%rax
    1434:	75 12                	jne    1448 <push__temp494v+0x88>
    1436:	4d 85 db             	test   %r11,%r11
    1439:	75 6d                	jne    14a8 <push__temp494v+0xe8>
    143b:	b8 08 00 00 00       	mov    $0x8,%eax
    1440:	eb cc                	jmp    140e <push__temp494v+0x4e>
    1442:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1448:	48 89 c2             	mov    %rax,%rdx
    144b:	49 0f af d2          	imul   %r10,%rdx
    144f:	4d 85 db             	test   %r11,%r11
    1452:	75 6c                	jne    14c0 <push__temp494v+0x100>
    1454:	48 89 d7             	mov    %rdx,%rdi
    1457:	4c 89 44 24 20       	mov    %r8,0x20(%rsp)
    145c:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
    1461:	4c 89 54 24 10       	mov    %r10,0x10(%rsp)
    1466:	e8 65 fc ff ff       	call   10d0 <malloc@plt>
    146b:	48 85 c0             	test   %rax,%rax
    146e:	0f 84 07 01 00 00    	je     157b <push__temp494v+0x1bb>
    1474:	48 89 c7             	mov    %rax,%rdi
    1477:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    147c:	e8 1f fc ff ff       	call   10a0 <free@plt>
    1481:	4c 8b 4c 24 08       	mov    0x8(%rsp),%r9
    1486:	4c 8b 54 24 10       	mov    0x10(%rsp),%r10
    148b:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
    1490:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
    1495:	4c 39 f9             	cmp    %r15,%rcx
    1498:	73 a1                	jae    143b <push__temp494v+0x7b>
    149a:	4d 89 fb             	mov    %r15,%r11
    149d:	e9 51 ff ff ff       	jmp    13f3 <push__temp494v+0x33>
    14a2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    14a8:	4d 85 c9             	test   %r9,%r9
    14ab:	74 8e                	je     143b <push__temp494v+0x7b>
    14ad:	4c 89 cf             	mov    %r9,%rdi
    14b0:	e8 eb fb ff ff       	call   10a0 <free@plt>
    14b5:	eb 84                	jmp    143b <push__temp494v+0x7b>
    14b7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    14be:	00 00 
    14c0:	4c 89 44 24 28       	mov    %r8,0x28(%rsp)
    14c5:	48 89 4c 24 20       	mov    %rcx,0x20(%rsp)
    14ca:	4c 89 54 24 18       	mov    %r10,0x18(%rsp)
    14cf:	4c 89 5c 24 10       	mov    %r11,0x10(%rsp)
    14d4:	4d 85 c9             	test   %r9,%r9
    14d7:	74 77                	je     1550 <push__temp494v+0x190>
    14d9:	48 89 d6             	mov    %rdx,%rsi
    14dc:	4c 89 cf             	mov    %r9,%rdi
    14df:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    14e4:	e8 f7 fb ff ff       	call   10e0 <realloc@plt>
    14e9:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    14ee:	4c 8b 5c 24 10       	mov    0x10(%rsp),%r11
    14f3:	4c 8b 54 24 18       	mov    0x18(%rsp),%r10
    14f8:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    14fd:	49 89 c1             	mov    %rax,%r9
    1500:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    1505:	4d 85 c9             	test   %r9,%r9
    1508:	74 7b                	je     1585 <push__temp494v+0x1c5>
    150a:	4d 0f af da          	imul   %r10,%r11
    150e:	49 39 d3             	cmp    %rdx,%r11
    1511:	73 82                	jae    1495 <push__temp494v+0xd5>
    1513:	4b 8d 3c 19          	lea    (%r9,%r11,1),%rdi
    1517:	4c 29 da             	sub    %r11,%rdx
    151a:	31 f6                	xor    %esi,%esi
    151c:	4c 89 44 24 20       	mov    %r8,0x20(%rsp)
    1521:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
    1526:	4c 89 54 24 10       	mov    %r10,0x10(%rsp)
    152b:	4c 89 4c 24 08       	mov    %r9,0x8(%rsp)
    1530:	e8 8b fb ff ff       	call   10c0 <memset@plt>
    1535:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
    153a:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
    153f:	4c 8b 54 24 10       	mov    0x10(%rsp),%r10
    1544:	4c 8b 4c 24 08       	mov    0x8(%rsp),%r9
    1549:	e9 47 ff ff ff       	jmp    1495 <push__temp494v+0xd5>
    154e:	66 90                	xchg   %ax,%ax
    1550:	48 89 d7             	mov    %rdx,%rdi
    1553:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    1558:	e8 73 fb ff ff       	call   10d0 <malloc@plt>
    155d:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    1562:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    1567:	4c 8b 54 24 18       	mov    0x18(%rsp),%r10
    156c:	4c 8b 5c 24 10       	mov    0x10(%rsp),%r11
    1571:	49 89 c1             	mov    %rax,%r9
    1574:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    1579:	eb 8a                	jmp    1505 <push__temp494v+0x145>
    157b:	b8 05 00 00 00       	mov    $0x5,%eax
    1580:	e9 89 fe ff ff       	jmp    140e <push__temp494v+0x4e>
    1585:	b8 06 00 00 00       	mov    $0x6,%eax
    158a:	e9 7f fe ff ff       	jmp    140e <push__temp494v+0x4e>

Disassembly of section .fini:

0000000000001590 <_fini>:
    1590:	f3 0f 1e fa          	endbr64
    1594:	48 83 ec 08          	sub    $0x8,%rsp
    1598:	48 83 c4 08          	add    $0x8,%rsp
    159c:	c3                   	ret
