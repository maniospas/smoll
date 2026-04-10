
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
    1020:	ff 35 92 2f 00 00    	push   0x2f92(%rip)        # 3fb8 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 94 2f 00 00    	jmp    *0x2f94(%rip)        # 3fc0 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)
    1030:	f3 0f 1e fa          	endbr64
    1034:	68 00 00 00 00       	push   $0x0
    1039:	e9 e2 ff ff ff       	jmp    1020 <_init+0x20>
    103e:	66 90                	xchg   %ax,%ax
    1040:	f3 0f 1e fa          	endbr64
    1044:	68 01 00 00 00       	push   $0x1
    1049:	e9 d2 ff ff ff       	jmp    1020 <_init+0x20>
    104e:	66 90                	xchg   %ax,%ax

Disassembly of section .plt.got:

0000000000001050 <__cxa_finalize@plt>:
    1050:	f3 0f 1e fa          	endbr64
    1054:	ff 25 9e 2f 00 00    	jmp    *0x2f9e(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    105a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000001060 <__stack_chk_fail@plt>:
    1060:	f3 0f 1e fa          	endbr64
    1064:	ff 25 5e 2f 00 00    	jmp    *0x2f5e(%rip)        # 3fc8 <__stack_chk_fail@GLIBC_2.4>
    106a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000001070 <__printf_chk@plt>:
    1070:	f3 0f 1e fa          	endbr64
    1074:	ff 25 56 2f 00 00    	jmp    *0x2f56(%rip)        # 3fd0 <__printf_chk@GLIBC_2.3.4>
    107a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001080 <main>:
    1080:	f3 0f 1e fa          	endbr64
    1084:	55                   	push   %rbp
    1085:	53                   	push   %rbx
    1086:	48 83 ec 28          	sub    $0x28,%rsp
    108a:	64 48 8b 3c 25 28 00 	mov    %fs:0x28,%rdi
    1091:	00 00 
    1093:	48 89 7c 24 18       	mov    %rdi,0x18(%rsp)
    1098:	48 8d 7c 24 08       	lea    0x8(%rsp),%rdi
    109d:	48 8d 6c 24 10       	lea    0x10(%rsp),%rbp
    10a2:	e8 e9 02 00 00       	call   1390 <fib__temp721v.constprop.1.isra.0>
    10a7:	48 89 ee             	mov    %rbp,%rsi
    10aa:	bf 1d 00 00 00       	mov    $0x1d,%edi
    10af:	e8 4c 01 00 00       	call   1200 <fib__temp721v>
    10b4:	48 89 ef             	mov    %rbp,%rdi
    10b7:	48 8b 5c 24 08       	mov    0x8(%rsp),%rbx
    10bc:	48 03 5c 24 10       	add    0x10(%rsp),%rbx
    10c1:	e8 ca 02 00 00       	call   1390 <fib__temp721v.constprop.1.isra.0>
    10c6:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
    10cb:	31 c0                	xor    %eax,%eax
    10cd:	48 8d 0d 30 0f 00 00 	lea    0xf30(%rip),%rcx        # 2004 <_IO_stdin_used+0x4>
    10d4:	48 8d 35 2b 0f 00 00 	lea    0xf2b(%rip),%rsi        # 2006 <_IO_stdin_used+0x6>
    10db:	bf 02 00 00 00       	mov    $0x2,%edi
    10e0:	48 01 da             	add    %rbx,%rdx
    10e3:	e8 88 ff ff ff       	call   1070 <__printf_chk@plt>
    10e8:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    10ed:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    10f4:	00 00 
    10f6:	75 09                	jne    1101 <main+0x81>
    10f8:	48 83 c4 28          	add    $0x28,%rsp
    10fc:	31 c0                	xor    %eax,%eax
    10fe:	5b                   	pop    %rbx
    10ff:	5d                   	pop    %rbp
    1100:	c3                   	ret
    1101:	e8 5a ff ff ff       	call   1060 <__stack_chk_fail@plt>
    1106:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    110d:	00 00 00 

0000000000001110 <_start>:
    1110:	f3 0f 1e fa          	endbr64
    1114:	31 ed                	xor    %ebp,%ebp
    1116:	49 89 d1             	mov    %rdx,%r9
    1119:	5e                   	pop    %rsi
    111a:	48 89 e2             	mov    %rsp,%rdx
    111d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1121:	50                   	push   %rax
    1122:	54                   	push   %rsp
    1123:	45 31 c0             	xor    %r8d,%r8d
    1126:	31 c9                	xor    %ecx,%ecx
    1128:	48 8d 3d 51 ff ff ff 	lea    -0xaf(%rip),%rdi        # 1080 <main>
    112f:	ff 15 a3 2e 00 00    	call   *0x2ea3(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    1135:	f4                   	hlt
    1136:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    113d:	00 00 00 

0000000000001140 <deregister_tm_clones>:
    1140:	48 8d 3d c9 2e 00 00 	lea    0x2ec9(%rip),%rdi        # 4010 <__TMC_END__>
    1147:	48 8d 05 c2 2e 00 00 	lea    0x2ec2(%rip),%rax        # 4010 <__TMC_END__>
    114e:	48 39 f8             	cmp    %rdi,%rax
    1151:	74 15                	je     1168 <deregister_tm_clones+0x28>
    1153:	48 8b 05 86 2e 00 00 	mov    0x2e86(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    115a:	48 85 c0             	test   %rax,%rax
    115d:	74 09                	je     1168 <deregister_tm_clones+0x28>
    115f:	ff e0                	jmp    *%rax
    1161:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1168:	c3                   	ret
    1169:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001170 <register_tm_clones>:
    1170:	48 8d 3d 99 2e 00 00 	lea    0x2e99(%rip),%rdi        # 4010 <__TMC_END__>
    1177:	48 8d 35 92 2e 00 00 	lea    0x2e92(%rip),%rsi        # 4010 <__TMC_END__>
    117e:	48 29 fe             	sub    %rdi,%rsi
    1181:	48 89 f0             	mov    %rsi,%rax
    1184:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1188:	48 c1 f8 03          	sar    $0x3,%rax
    118c:	48 01 c6             	add    %rax,%rsi
    118f:	48 d1 fe             	sar    $1,%rsi
    1192:	74 14                	je     11a8 <register_tm_clones+0x38>
    1194:	48 8b 05 55 2e 00 00 	mov    0x2e55(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    119b:	48 85 c0             	test   %rax,%rax
    119e:	74 08                	je     11a8 <register_tm_clones+0x38>
    11a0:	ff e0                	jmp    *%rax
    11a2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    11a8:	c3                   	ret
    11a9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011b0 <__do_global_dtors_aux>:
    11b0:	f3 0f 1e fa          	endbr64
    11b4:	80 3d 55 2e 00 00 00 	cmpb   $0x0,0x2e55(%rip)        # 4010 <__TMC_END__>
    11bb:	75 2b                	jne    11e8 <__do_global_dtors_aux+0x38>
    11bd:	55                   	push   %rbp
    11be:	48 83 3d 32 2e 00 00 	cmpq   $0x0,0x2e32(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    11c5:	00 
    11c6:	48 89 e5             	mov    %rsp,%rbp
    11c9:	74 0c                	je     11d7 <__do_global_dtors_aux+0x27>
    11cb:	48 8b 3d 36 2e 00 00 	mov    0x2e36(%rip),%rdi        # 4008 <__dso_handle>
    11d2:	e8 79 fe ff ff       	call   1050 <__cxa_finalize@plt>
    11d7:	e8 64 ff ff ff       	call   1140 <deregister_tm_clones>
    11dc:	c6 05 2d 2e 00 00 01 	movb   $0x1,0x2e2d(%rip)        # 4010 <__TMC_END__>
    11e3:	5d                   	pop    %rbp
    11e4:	c3                   	ret
    11e5:	0f 1f 00             	nopl   (%rax)
    11e8:	c3                   	ret
    11e9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011f0 <frame_dummy>:
    11f0:	f3 0f 1e fa          	endbr64
    11f4:	e9 77 ff ff ff       	jmp    1170 <register_tm_clones>
    11f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001200 <fib__temp721v>:
    1200:	f3 0f 1e fa          	endbr64
    1204:	41 57                	push   %r15
    1206:	ba 01 00 00 00       	mov    $0x1,%edx
    120b:	41 56                	push   %r14
    120d:	55                   	push   %rbp
    120e:	53                   	push   %rbx
    120f:	48 83 ec 48          	sub    $0x48,%rsp
    1213:	64 48 8b 0c 25 28 00 	mov    %fs:0x28,%rcx
    121a:	00 00 
    121c:	48 89 4c 24 38       	mov    %rcx,0x38(%rsp)
    1221:	48 89 f1             	mov    %rsi,%rcx
    1224:	48 83 ff 01          	cmp    $0x1,%rdi
    1228:	77 26                	ja     1250 <fib__temp721v+0x50>
    122a:	48 89 11             	mov    %rdx,(%rcx)
    122d:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    1232:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    1239:	00 00 
    123b:	0f 85 39 01 00 00    	jne    137a <fib__temp721v+0x17a>
    1241:	48 83 c4 48          	add    $0x48,%rsp
    1245:	31 c0                	xor    %eax,%eax
    1247:	5b                   	pop    %rbx
    1248:	5d                   	pop    %rbp
    1249:	41 5e                	pop    %r14
    124b:	41 5f                	pop    %r15
    124d:	c3                   	ret
    124e:	66 90                	xchg   %ax,%ax
    1250:	48 89 fa             	mov    %rdi,%rdx
    1253:	48 83 ff 02          	cmp    $0x2,%rdi
    1257:	74 d1                	je     122a <fib__temp721v+0x2a>
    1259:	48 83 ff 03          	cmp    $0x3,%rdi
    125d:	74 cb                	je     122a <fib__temp721v+0x2a>
    125f:	4c 8d 4f fd          	lea    -0x3(%rdi),%r9
    1263:	48 89 3c 24          	mov    %rdi,(%rsp)
    1267:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    126c:	4c 89 cf             	mov    %r9,%rdi
    126f:	48 89 4c 24 18       	mov    %rcx,0x18(%rsp)
    1274:	4c 89 4c 24 10       	mov    %r9,0x10(%rsp)
    1279:	e8 82 ff ff ff       	call   1200 <fib__temp721v>
    127e:	48 8b 14 24          	mov    (%rsp),%rdx
    1282:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
    1287:	4c 8d 42 fc          	lea    -0x4(%rdx),%r8
    128b:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    1290:	4c 89 c7             	mov    %r8,%rdi
    1293:	4c 89 04 24          	mov    %r8,(%rsp)
    1297:	e8 64 ff ff ff       	call   1200 <fib__temp721v>
    129c:	4c 8b 4c 24 10       	mov    0x10(%rsp),%r9
    12a1:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    12a6:	48 03 44 24 30       	add    0x30(%rsp),%rax
    12ab:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
    12b0:	49 83 f9 01          	cmp    $0x1,%r9
    12b4:	49 89 c7             	mov    %rax,%r15
    12b7:	0f 84 c2 00 00 00    	je     137f <fib__temp721v+0x17f>
    12bd:	48 8b 3c 24          	mov    (%rsp),%rdi
    12c1:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    12c6:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    12cb:	e8 30 ff ff ff       	call   1200 <fib__temp721v>
    12d0:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    12d5:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
    12da:	48 8d 6a fb          	lea    -0x5(%rdx),%rbp
    12de:	48 89 ef             	mov    %rbp,%rdi
    12e1:	e8 1a ff ff ff       	call   1200 <fib__temp721v>
    12e6:	48 8b 3c 24          	mov    (%rsp),%rdi
    12ea:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    12ef:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    12f4:	48 03 44 24 30       	add    0x30(%rsp),%rax
    12f9:	49 01 c7             	add    %rax,%r15
    12fc:	e8 ff fe ff ff       	call   1200 <fib__temp721v>
    1301:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
    1306:	48 89 ef             	mov    %rbp,%rdi
    1309:	e8 f2 fe ff ff       	call   1200 <fib__temp721v>
    130e:	4c 8b 04 24          	mov    (%rsp),%r8
    1312:	4c 8b 4c 24 28       	mov    0x28(%rsp),%r9
    1317:	4c 03 4c 24 30       	add    0x30(%rsp),%r9
    131c:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    1321:	49 83 f8 01          	cmp    $0x1,%r8
    1325:	48 8b 4c 24 10       	mov    0x10(%rsp),%rcx
    132a:	74 41                	je     136d <fib__temp721v+0x16d>
    132c:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    1331:	48 89 ef             	mov    %rbp,%rdi
    1334:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    1339:	4c 89 0c 24          	mov    %r9,(%rsp)
    133d:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    1342:	e8 b9 fe ff ff       	call   1200 <fib__temp721v>
    1347:	48 8b 54 24 08       	mov    0x8(%rsp),%rdx
    134c:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
    1351:	48 8d 7a fa          	lea    -0x6(%rdx),%rdi
    1355:	e8 a6 fe ff ff       	call   1200 <fib__temp721v>
    135a:	48 8b 4c 24 10       	mov    0x10(%rsp),%rcx
    135f:	4c 8b 0c 24          	mov    (%rsp),%r9
    1363:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    1368:	4c 03 44 24 30       	add    0x30(%rsp),%r8
    136d:	4b 8d 04 07          	lea    (%r15,%r8,1),%rax
    1371:	4a 8d 14 08          	lea    (%rax,%r9,1),%rdx
    1375:	e9 b0 fe ff ff       	jmp    122a <fib__temp721v+0x2a>
    137a:	e8 e1 fc ff ff       	call   1060 <__stack_chk_fail@plt>
    137f:	4c 8d 78 01          	lea    0x1(%rax),%r15
    1383:	41 b8 01 00 00 00    	mov    $0x1,%r8d
    1389:	eb e2                	jmp    136d <fib__temp721v+0x16d>
    138b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001390 <fib__temp721v.constprop.1.isra.0>:
    1390:	41 57                	push   %r15
    1392:	41 56                	push   %r14
    1394:	41 55                	push   %r13
    1396:	41 54                	push   %r12
    1398:	55                   	push   %rbp
    1399:	53                   	push   %rbx
    139a:	48 83 ec 48          	sub    $0x48,%rsp
    139e:	48 89 7c 24 18       	mov    %rdi,0x18(%rsp)
    13a3:	48 8d 6c 24 30       	lea    0x30(%rsp),%rbp
    13a8:	bf 1b 00 00 00       	mov    $0x1b,%edi
    13ad:	64 48 8b 34 25 28 00 	mov    %fs:0x28,%rsi
    13b4:	00 00 
    13b6:	48 89 74 24 38       	mov    %rsi,0x38(%rsp)
    13bb:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    13c0:	e8 3b fe ff ff       	call   1200 <fib__temp721v>
    13c5:	48 89 ee             	mov    %rbp,%rsi
    13c8:	bf 1a 00 00 00       	mov    $0x1a,%edi
    13cd:	e8 2e fe ff ff       	call   1200 <fib__temp721v>
    13d2:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    13d7:	bf 1a 00 00 00       	mov    $0x1a,%edi
    13dc:	48 8b 5c 24 30       	mov    0x30(%rsp),%rbx
    13e1:	4c 8b 7c 24 28       	mov    0x28(%rsp),%r15
    13e6:	e8 15 fe ff ff       	call   1200 <fib__temp721v>
    13eb:	48 89 ee             	mov    %rbp,%rsi
    13ee:	bf 19 00 00 00       	mov    $0x19,%edi
    13f3:	e8 08 fe ff ff       	call   1200 <fib__temp721v>
    13f8:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    13fd:	bf 1a 00 00 00       	mov    $0x1a,%edi
    1402:	4c 8b 74 24 30       	mov    0x30(%rsp),%r14
    1407:	4c 8b 6c 24 28       	mov    0x28(%rsp),%r13
    140c:	e8 ef fd ff ff       	call   1200 <fib__temp721v>
    1411:	48 89 ee             	mov    %rbp,%rsi
    1414:	bf 19 00 00 00       	mov    $0x19,%edi
    1419:	e8 e2 fd ff ff       	call   1200 <fib__temp721v>
    141e:	48 8b 4c 24 28       	mov    0x28(%rsp),%rcx
    1423:	48 8b 44 24 30       	mov    0x30(%rsp),%rax
    1428:	48 8d 74 24 28       	lea    0x28(%rsp),%rsi
    142d:	bf 19 00 00 00       	mov    $0x19,%edi
    1432:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    1437:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    143c:	e8 bf fd ff ff       	call   1200 <fib__temp721v>
    1441:	48 89 ee             	mov    %rbp,%rsi
    1444:	bf 18 00 00 00       	mov    $0x18,%edi
    1449:	e8 b2 fd ff ff       	call   1200 <fib__temp721v>
    144e:	4a 8d 04 3b          	lea    (%rbx,%r15,1),%rax
    1452:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    1457:	4c 01 f0             	add    %r14,%rax
    145a:	4c 01 e8             	add    %r13,%rax
    145d:	48 03 44 24 08       	add    0x8(%rsp),%rax
    1462:	48 03 44 24 10       	add    0x10(%rsp),%rax
    1467:	48 03 44 24 30       	add    0x30(%rsp),%rax
    146c:	48 03 44 24 28       	add    0x28(%rsp),%rax
    1471:	48 89 02             	mov    %rax,(%rdx)
    1474:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    1479:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    1480:	00 00 
    1482:	75 0f                	jne    1493 <fib__temp721v.constprop.1.isra.0+0x103>
    1484:	48 83 c4 48          	add    $0x48,%rsp
    1488:	5b                   	pop    %rbx
    1489:	5d                   	pop    %rbp
    148a:	41 5c                	pop    %r12
    148c:	41 5d                	pop    %r13
    148e:	41 5e                	pop    %r14
    1490:	41 5f                	pop    %r15
    1492:	c3                   	ret
    1493:	e8 c8 fb ff ff       	call   1060 <__stack_chk_fail@plt>

Disassembly of section .fini:

0000000000001498 <_fini>:
    1498:	f3 0f 1e fa          	endbr64
    149c:	48 83 ec 08          	sub    $0x8,%rsp
    14a0:	48 83 c4 08          	add    $0x8,%rsp
    14a4:	c3                   	ret
