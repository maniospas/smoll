
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
    1020:	ff 35 7a 2f 00 00    	push   0x2f7a(%rip)        # 3fa0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 7c 2f 00 00    	jmp    *0x2f7c(%rip)        # 3fa8 <_GLOBAL_OFFSET_TABLE_+0x10>
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

Disassembly of section .plt.got:

0000000000001080 <__cxa_finalize@plt>:
    1080:	f3 0f 1e fa          	endbr64
    1084:	ff 25 6e 2f 00 00    	jmp    *0x2f6e(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    108a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000001090 <__stack_chk_fail@plt>:
    1090:	f3 0f 1e fa          	endbr64
    1094:	ff 25 16 2f 00 00    	jmp    *0x2f16(%rip)        # 3fb0 <__stack_chk_fail@GLIBC_2.4>
    109a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010a0 <memset@plt>:
    10a0:	f3 0f 1e fa          	endbr64
    10a4:	ff 25 0e 2f 00 00    	jmp    *0x2f0e(%rip)        # 3fb8 <memset@GLIBC_2.2.5>
    10aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010b0 <malloc@plt>:
    10b0:	f3 0f 1e fa          	endbr64
    10b4:	ff 25 06 2f 00 00    	jmp    *0x2f06(%rip)        # 3fc0 <malloc@GLIBC_2.2.5>
    10ba:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010c0 <realloc@plt>:
    10c0:	f3 0f 1e fa          	endbr64
    10c4:	ff 25 fe 2e 00 00    	jmp    *0x2efe(%rip)        # 3fc8 <realloc@GLIBC_2.2.5>
    10ca:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000010d0 <__printf_chk@plt>:
    10d0:	f3 0f 1e fa          	endbr64
    10d4:	ff 25 f6 2e 00 00    	jmp    *0x2ef6(%rip)        # 3fd0 <__printf_chk@GLIBC_2.3.4>
    10da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .text:

00000000000010e0 <main>:
    10e0:	f3 0f 1e fa          	endbr64
    10e4:	55                   	push   %rbp
    10e5:	ba 08 00 00 00       	mov    $0x8,%edx
    10ea:	53                   	push   %rbx
    10eb:	48 81 ec 98 00 00 00 	sub    $0x98,%rsp
    10f2:	48 8d 4c 24 20       	lea    0x20(%rsp),%rcx
    10f7:	48 8d 74 24 18       	lea    0x18(%rsp),%rsi
    10fc:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1103:	00 00 
    1105:	48 89 84 24 88 00 00 	mov    %rax,0x88(%rsp)
    110c:	00 
    110d:	31 c0                	xor    %eax,%eax
    110f:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
    1114:	4c 8d 4c 24 30       	lea    0x30(%rsp),%r9
    1119:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
    1120:	00 00 
    1122:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
    1129:	00 00 
    112b:	4c 8d 44 24 28       	lea    0x28(%rsp),%r8
    1130:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
    1137:	00 00 
    1139:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
    1140:	00 00 
    1142:	48 c7 44 24 50 00 00 	movq   $0x0,0x50(%rsp)
    1149:	00 00 
    114b:	48 c7 44 24 70 00 00 	movq   $0x0,0x70(%rsp)
    1152:	00 00 
    1154:	48 c7 44 24 78 00 00 	movq   $0x0,0x78(%rsp)
    115b:	00 00 
    115d:	48 c7 84 24 80 00 00 	movq   $0x0,0x80(%rsp)
    1164:	00 00 00 00 00 
    1169:	e8 22 05 00 00       	call   1690 <alloc__temp376v.constprop.0>
    116e:	85 c0                	test   %eax,%eax
    1170:	0f 85 10 02 00 00    	jne    1386 <main+0x2a6>
    1176:	48 8b 5c 24 28       	mov    0x28(%rsp),%rbx
    117b:	48 85 db             	test   %rbx,%rbx
    117e:	0f 84 7d 02 00 00    	je     1401 <main+0x321>
    1184:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    1189:	48 85 c9             	test   %rcx,%rcx
    118c:	0f 84 53 02 00 00    	je     13e5 <main+0x305>
    1192:	b8 ff 03 00 00       	mov    $0x3ff,%eax
    1197:	bf 02 00 00 00       	mov    $0x2,%edi
    119c:	48 89 0c 24          	mov    %rcx,(%rsp)
    11a0:	f2 0f 10 05 18 14 00 	movsd  0x1418(%rip),%xmm0        # 25c0 <_IO_stdin_used+0x5c0>
    11a7:	00 
    11a8:	48 c1 e0 34          	shl    $0x34,%rax
    11ac:	48 8d 15 fd 13 00 00 	lea    0x13fd(%rip),%rdx        # 25b0 <_IO_stdin_used+0x5b0>
    11b3:	48 8b 6c 24 30       	mov    0x30(%rsp),%rbp
    11b8:	48 8d 35 f3 13 00 00 	lea    0x13f3(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    11bf:	48 89 01             	mov    %rax,(%rcx)
    11c2:	b8 01 00 00 00       	mov    $0x1,%eax
    11c7:	e8 04 ff ff ff       	call   10d0 <__printf_chk@plt>
    11cc:	48 8b 0c 24          	mov    (%rsp),%rcx
    11d0:	4c 8b 01             	mov    (%rcx),%r8
    11d3:	48 83 fb 02          	cmp    $0x2,%rbx
    11d7:	74 3b                	je     1214 <main+0x134>
    11d9:	48 8d 54 2d 00       	lea    0x0(%rbp,%rbp,1),%rdx
    11de:	48 89 cf             	mov    %rcx,%rdi
    11e1:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
    11e6:	48 89 d6             	mov    %rdx,%rsi
    11e9:	48 89 14 24          	mov    %rdx,(%rsp)
    11ed:	e8 ce fe ff ff       	call   10c0 <realloc@plt>
    11f2:	48 89 c1             	mov    %rax,%rcx
    11f5:	48 85 c0             	test   %rax,%rax
    11f8:	0f 84 27 02 00 00    	je     1425 <main+0x345>
    11fe:	48 0f af dd          	imul   %rbp,%rbx
    1202:	48 8b 14 24          	mov    (%rsp),%rdx
    1206:	4c 8b 44 24 08       	mov    0x8(%rsp),%r8
    120b:	48 39 d3             	cmp    %rdx,%rbx
    120e:	0f 82 af 01 00 00    	jb     13c3 <main+0x2e3>
    1214:	4c 89 04 29          	mov    %r8,(%rcx,%rbp,1)
    1218:	48 8d 74 24 40       	lea    0x40(%rsp),%rsi
    121d:	48 8d 4c 24 48       	lea    0x48(%rsp),%rcx
    1222:	ba 20 00 00 00       	mov    $0x20,%edx
    1227:	48 8d 7c 24 38       	lea    0x38(%rsp),%rdi
    122c:	4c 8d 4c 24 58       	lea    0x58(%rsp),%r9
    1231:	4c 8d 44 24 50       	lea    0x50(%rsp),%r8
    1236:	e8 55 04 00 00       	call   1690 <alloc__temp376v.constprop.0>
    123b:	85 c0                	test   %eax,%eax
    123d:	0f 85 35 02 00 00    	jne    1478 <main+0x398>
    1243:	48 83 7c 24 50 00    	cmpq   $0x0,0x50(%rsp)
    1249:	0f 84 48 02 00 00    	je     1497 <main+0x3b7>
    124f:	48 8b 5c 24 48       	mov    0x48(%rsp),%rbx
    1254:	48 85 db             	test   %rbx,%rbx
    1257:	0f 84 95 02 00 00    	je     14f2 <main+0x412>
    125d:	66 0f 6f 05 5b 13 00 	movdqa 0x135b(%rip),%xmm0        # 25c0 <_IO_stdin_used+0x5c0>
    1264:	00 
    1265:	bf 02 00 00 00       	mov    $0x2,%edi
    126a:	b8 01 00 00 00       	mov    $0x1,%eax
    126f:	48 8d 15 43 13 00 00 	lea    0x1343(%rip),%rdx        # 25b9 <_IO_stdin_used+0x5b9>
    1276:	48 8d 35 35 13 00 00 	lea    0x1335(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    127d:	0f 11 03             	movups %xmm0,(%rbx)
    1280:	66 0f 6f 05 48 13 00 	movdqa 0x1348(%rip),%xmm0        # 25d0 <_IO_stdin_used+0x5d0>
    1287:	00 
    1288:	0f 11 43 10          	movups %xmm0,0x10(%rbx)
    128c:	f2 0f 10 05 2c 13 00 	movsd  0x132c(%rip),%xmm0        # 25c0 <_IO_stdin_used+0x5c0>
    1293:	00 
    1294:	e8 37 fe ff ff       	call   10d0 <__printf_chk@plt>
    1299:	f2 0f 10 43 08       	movsd  0x8(%rbx),%xmm0
    129e:	bf 02 00 00 00       	mov    $0x2,%edi
    12a3:	48 8d 15 0f 13 00 00 	lea    0x130f(%rip),%rdx        # 25b9 <_IO_stdin_used+0x5b9>
    12aa:	48 8d 35 01 13 00 00 	lea    0x1301(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    12b1:	b8 01 00 00 00       	mov    $0x1,%eax
    12b6:	e8 15 fe ff ff       	call   10d0 <__printf_chk@plt>
    12bb:	f2 0f 10 43 10       	movsd  0x10(%rbx),%xmm0
    12c0:	bf 02 00 00 00       	mov    $0x2,%edi
    12c5:	48 8d 15 ed 12 00 00 	lea    0x12ed(%rip),%rdx        # 25b9 <_IO_stdin_used+0x5b9>
    12cc:	48 8d 35 df 12 00 00 	lea    0x12df(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    12d3:	b8 01 00 00 00       	mov    $0x1,%eax
    12d8:	e8 f3 fd ff ff       	call   10d0 <__printf_chk@plt>
    12dd:	f2 0f 10 43 18       	movsd  0x18(%rbx),%xmm0
    12e2:	bf 02 00 00 00       	mov    $0x2,%edi
    12e7:	48 8d 15 c2 12 00 00 	lea    0x12c2(%rip),%rdx        # 25b0 <_IO_stdin_used+0x5b0>
    12ee:	48 8d 35 bd 12 00 00 	lea    0x12bd(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    12f5:	b8 01 00 00 00       	mov    $0x1,%eax
    12fa:	e8 d1 fd ff ff       	call   10d0 <__printf_chk@plt>
    12ff:	48 8d 4c 24 70       	lea    0x70(%rsp),%rcx
    1304:	48 8d 74 24 68       	lea    0x68(%rsp),%rsi
    1309:	ba 08 00 00 00       	mov    $0x8,%edx
    130e:	48 8d 7c 24 60       	lea    0x60(%rsp),%rdi
    1313:	4c 8d 8c 24 80 00 00 	lea    0x80(%rsp),%r9
    131a:	00 
    131b:	4c 8d 44 24 78       	lea    0x78(%rsp),%r8
    1320:	e8 6b 03 00 00       	call   1690 <alloc__temp376v.constprop.0>
    1325:	85 c0                	test   %eax,%eax
    1327:	0f 85 e4 01 00 00    	jne    1511 <main+0x431>
    132d:	48 8b 44 24 78       	mov    0x78(%rsp),%rax
    1332:	48 85 c0             	test   %rax,%rax
    1335:	0f 84 80 01 00 00    	je     14bb <main+0x3db>
    133b:	48 83 e8 01          	sub    $0x1,%rax
    133f:	48 0f af 84 24 80 00 	imul   0x80(%rsp),%rax
    1346:	00 00 
    1348:	48 03 44 24 70       	add    0x70(%rsp),%rax
    134d:	0f 84 dd 01 00 00    	je     1530 <main+0x450>
    1353:	bb ff 03 00 00       	mov    $0x3ff,%ebx
    1358:	f2 0f 10 05 60 12 00 	movsd  0x1260(%rip),%xmm0        # 25c0 <_IO_stdin_used+0x5c0>
    135f:	00 
    1360:	48 8d 15 49 12 00 00 	lea    0x1249(%rip),%rdx        # 25b0 <_IO_stdin_used+0x5b0>
    1367:	48 8d 35 44 12 00 00 	lea    0x1244(%rip),%rsi        # 25b2 <_IO_stdin_used+0x5b2>
    136e:	48 c1 e3 34          	shl    $0x34,%rbx
    1372:	bf 02 00 00 00       	mov    $0x2,%edi
    1377:	48 89 18             	mov    %rbx,(%rax)
    137a:	b8 01 00 00 00       	mov    $0x1,%eax
    137f:	e8 4c fd ff ff       	call   10d0 <__printf_chk@plt>
    1384:	eb 1a                	jmp    13a0 <main+0x2c0>
    1386:	48 8d 15 8b 0d 00 00 	lea    0xd8b(%rip),%rdx        # 2118 <_IO_stdin_used+0x118>
    138d:	48 8d 35 22 12 00 00 	lea    0x1222(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1394:	bf 02 00 00 00       	mov    $0x2,%edi
    1399:	31 c0                	xor    %eax,%eax
    139b:	e8 30 fd ff ff       	call   10d0 <__printf_chk@plt>
    13a0:	48 8b 84 24 88 00 00 	mov    0x88(%rsp),%rax
    13a7:	00 
    13a8:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    13af:	00 00 
    13b1:	0f 85 98 01 00 00    	jne    154f <main+0x46f>
    13b7:	48 81 c4 98 00 00 00 	add    $0x98,%rsp
    13be:	31 c0                	xor    %eax,%eax
    13c0:	5b                   	pop    %rbx
    13c1:	5d                   	pop    %rbp
    13c2:	c3                   	ret
    13c3:	48 89 de             	mov    %rbx,%rsi
    13c6:	48 89 c7             	mov    %rax,%rdi
    13c9:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
    13ce:	48 89 04 24          	mov    %rax,(%rsp)
    13d2:	e8 79 02 00 00       	call   1650 <zero__temp371v>
    13d7:	4c 8b 44 24 08       	mov    0x8(%rsp),%r8
    13dc:	48 8b 0c 24          	mov    (%rsp),%rcx
    13e0:	e9 2f fe ff ff       	jmp    1214 <main+0x134>
    13e5:	48 8d 15 ec 0d 00 00 	lea    0xdec(%rip),%rdx        # 21d8 <_IO_stdin_used+0x1d8>
    13ec:	48 8d 35 c3 11 00 00 	lea    0x11c3(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    13f3:	bf 02 00 00 00       	mov    $0x2,%edi
    13f8:	31 c0                	xor    %eax,%eax
    13fa:	e8 d1 fc ff ff       	call   10d0 <__printf_chk@plt>
    13ff:	eb 9f                	jmp    13a0 <main+0x2c0>
    1401:	e8 5a 02 00 00       	call   1660 <get__temp405v.part.0>
    1406:	48 8d 15 6b 0d 00 00 	lea    0xd6b(%rip),%rdx        # 2178 <_IO_stdin_used+0x178>
    140d:	48 8d 35 a2 11 00 00 	lea    0x11a2(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1414:	31 c0                	xor    %eax,%eax
    1416:	bf 02 00 00 00       	mov    $0x2,%edi
    141b:	e8 b0 fc ff ff       	call   10d0 <__printf_chk@plt>
    1420:	e9 7b ff ff ff       	jmp    13a0 <main+0x2c0>
    1425:	48 8d 15 fc 0d 00 00 	lea    0xdfc(%rip),%rdx        # 2228 <_IO_stdin_used+0x228>
    142c:	48 8d 35 83 11 00 00 	lea    0x1183(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1433:	bf 02 00 00 00       	mov    $0x2,%edi
    1438:	31 c0                	xor    %eax,%eax
    143a:	e8 91 fc ff ff       	call   10d0 <__printf_chk@plt>
    143f:	48 8d 15 32 0e 00 00 	lea    0xe32(%rip),%rdx        # 2278 <_IO_stdin_used+0x278>
    1446:	48 8d 35 69 11 00 00 	lea    0x1169(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    144d:	31 c0                	xor    %eax,%eax
    144f:	bf 02 00 00 00       	mov    $0x2,%edi
    1454:	e8 77 fc ff ff       	call   10d0 <__printf_chk@plt>
    1459:	48 8d 15 90 0e 00 00 	lea    0xe90(%rip),%rdx        # 22f0 <_IO_stdin_used+0x2f0>
    1460:	48 8d 35 4f 11 00 00 	lea    0x114f(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1467:	31 c0                	xor    %eax,%eax
    1469:	bf 02 00 00 00       	mov    $0x2,%edi
    146e:	e8 5d fc ff ff       	call   10d0 <__printf_chk@plt>
    1473:	e9 28 ff ff ff       	jmp    13a0 <main+0x2c0>
    1478:	48 8d 15 d1 0e 00 00 	lea    0xed1(%rip),%rdx        # 2350 <_IO_stdin_used+0x350>
    147f:	48 8d 35 30 11 00 00 	lea    0x1130(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1486:	bf 02 00 00 00       	mov    $0x2,%edi
    148b:	31 c0                	xor    %eax,%eax
    148d:	e8 3e fc ff ff       	call   10d0 <__printf_chk@plt>
    1492:	e9 09 ff ff ff       	jmp    13a0 <main+0x2c0>
    1497:	e8 c4 01 00 00       	call   1660 <get__temp405v.part.0>
    149c:	48 8d 15 0d 0f 00 00 	lea    0xf0d(%rip),%rdx        # 23b0 <_IO_stdin_used+0x3b0>
    14a3:	48 8d 35 0c 11 00 00 	lea    0x110c(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    14aa:	31 c0                	xor    %eax,%eax
    14ac:	bf 02 00 00 00       	mov    $0x2,%edi
    14b1:	e8 1a fc ff ff       	call   10d0 <__printf_chk@plt>
    14b6:	e9 e5 fe ff ff       	jmp    13a0 <main+0x2c0>
    14bb:	48 8d 15 fe 0f 00 00 	lea    0xffe(%rip),%rdx        # 24c0 <_IO_stdin_used+0x4c0>
    14c2:	48 8d 35 ed 10 00 00 	lea    0x10ed(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    14c9:	bf 02 00 00 00       	mov    $0x2,%edi
    14ce:	e8 fd fb ff ff       	call   10d0 <__printf_chk@plt>
    14d3:	48 8d 15 2e 10 00 00 	lea    0x102e(%rip),%rdx        # 2508 <_IO_stdin_used+0x508>
    14da:	48 8d 35 d5 10 00 00 	lea    0x10d5(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    14e1:	31 c0                	xor    %eax,%eax
    14e3:	bf 02 00 00 00       	mov    $0x2,%edi
    14e8:	e8 e3 fb ff ff       	call   10d0 <__printf_chk@plt>
    14ed:	e9 ae fe ff ff       	jmp    13a0 <main+0x2c0>
    14f2:	48 8d 15 17 0f 00 00 	lea    0xf17(%rip),%rdx        # 2410 <_IO_stdin_used+0x410>
    14f9:	48 8d 35 b6 10 00 00 	lea    0x10b6(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1500:	bf 02 00 00 00       	mov    $0x2,%edi
    1505:	31 c0                	xor    %eax,%eax
    1507:	e8 c4 fb ff ff       	call   10d0 <__printf_chk@plt>
    150c:	e9 8f fe ff ff       	jmp    13a0 <main+0x2c0>
    1511:	48 8d 15 48 0f 00 00 	lea    0xf48(%rip),%rdx        # 2460 <_IO_stdin_used+0x460>
    1518:	48 8d 35 97 10 00 00 	lea    0x1097(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    151f:	bf 02 00 00 00       	mov    $0x2,%edi
    1524:	31 c0                	xor    %eax,%eax
    1526:	e8 a5 fb ff ff       	call   10d0 <__printf_chk@plt>
    152b:	e9 70 fe ff ff       	jmp    13a0 <main+0x2c0>
    1530:	48 8d 15 29 10 00 00 	lea    0x1029(%rip),%rdx        # 2560 <_IO_stdin_used+0x560>
    1537:	48 8d 35 78 10 00 00 	lea    0x1078(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    153e:	bf 02 00 00 00       	mov    $0x2,%edi
    1543:	31 c0                	xor    %eax,%eax
    1545:	e8 86 fb ff ff       	call   10d0 <__printf_chk@plt>
    154a:	e9 51 fe ff ff       	jmp    13a0 <main+0x2c0>
    154f:	e8 3c fb ff ff       	call   1090 <__stack_chk_fail@plt>
    1554:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    155b:	00 00 00 
    155e:	66 90                	xchg   %ax,%ax

0000000000001560 <_start>:
    1560:	f3 0f 1e fa          	endbr64
    1564:	31 ed                	xor    %ebp,%ebp
    1566:	49 89 d1             	mov    %rdx,%r9
    1569:	5e                   	pop    %rsi
    156a:	48 89 e2             	mov    %rsp,%rdx
    156d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1571:	50                   	push   %rax
    1572:	54                   	push   %rsp
    1573:	45 31 c0             	xor    %r8d,%r8d
    1576:	31 c9                	xor    %ecx,%ecx
    1578:	48 8d 3d 61 fb ff ff 	lea    -0x49f(%rip),%rdi        # 10e0 <main>
    157f:	ff 15 53 2a 00 00    	call   *0x2a53(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    1585:	f4                   	hlt
    1586:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    158d:	00 00 00 

0000000000001590 <deregister_tm_clones>:
    1590:	48 8d 3d 79 2a 00 00 	lea    0x2a79(%rip),%rdi        # 4010 <__TMC_END__>
    1597:	48 8d 05 72 2a 00 00 	lea    0x2a72(%rip),%rax        # 4010 <__TMC_END__>
    159e:	48 39 f8             	cmp    %rdi,%rax
    15a1:	74 15                	je     15b8 <deregister_tm_clones+0x28>
    15a3:	48 8b 05 36 2a 00 00 	mov    0x2a36(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    15aa:	48 85 c0             	test   %rax,%rax
    15ad:	74 09                	je     15b8 <deregister_tm_clones+0x28>
    15af:	ff e0                	jmp    *%rax
    15b1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    15b8:	c3                   	ret
    15b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000015c0 <register_tm_clones>:
    15c0:	48 8d 3d 49 2a 00 00 	lea    0x2a49(%rip),%rdi        # 4010 <__TMC_END__>
    15c7:	48 8d 35 42 2a 00 00 	lea    0x2a42(%rip),%rsi        # 4010 <__TMC_END__>
    15ce:	48 29 fe             	sub    %rdi,%rsi
    15d1:	48 89 f0             	mov    %rsi,%rax
    15d4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    15d8:	48 c1 f8 03          	sar    $0x3,%rax
    15dc:	48 01 c6             	add    %rax,%rsi
    15df:	48 d1 fe             	sar    $1,%rsi
    15e2:	74 14                	je     15f8 <register_tm_clones+0x38>
    15e4:	48 8b 05 05 2a 00 00 	mov    0x2a05(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    15eb:	48 85 c0             	test   %rax,%rax
    15ee:	74 08                	je     15f8 <register_tm_clones+0x38>
    15f0:	ff e0                	jmp    *%rax
    15f2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    15f8:	c3                   	ret
    15f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001600 <__do_global_dtors_aux>:
    1600:	f3 0f 1e fa          	endbr64
    1604:	80 3d 05 2a 00 00 00 	cmpb   $0x0,0x2a05(%rip)        # 4010 <__TMC_END__>
    160b:	75 2b                	jne    1638 <__do_global_dtors_aux+0x38>
    160d:	55                   	push   %rbp
    160e:	48 83 3d e2 29 00 00 	cmpq   $0x0,0x29e2(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1615:	00 
    1616:	48 89 e5             	mov    %rsp,%rbp
    1619:	74 0c                	je     1627 <__do_global_dtors_aux+0x27>
    161b:	48 8b 3d e6 29 00 00 	mov    0x29e6(%rip),%rdi        # 4008 <__dso_handle>
    1622:	e8 59 fa ff ff       	call   1080 <__cxa_finalize@plt>
    1627:	e8 64 ff ff ff       	call   1590 <deregister_tm_clones>
    162c:	c6 05 dd 29 00 00 01 	movb   $0x1,0x29dd(%rip)        # 4010 <__TMC_END__>
    1633:	5d                   	pop    %rbp
    1634:	c3                   	ret
    1635:	0f 1f 00             	nopl   (%rax)
    1638:	c3                   	ret
    1639:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001640 <frame_dummy>:
    1640:	f3 0f 1e fa          	endbr64
    1644:	e9 77 ff ff ff       	jmp    15c0 <register_tm_clones>
    1649:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001650 <zero__temp371v>:
    1650:	48 01 f7             	add    %rsi,%rdi
    1653:	31 f6                	xor    %esi,%esi
    1655:	e9 46 fa ff ff       	jmp    10a0 <memset@plt>
    165a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000001660 <get__temp405v.part.0>:
    1660:	48 83 ec 08          	sub    $0x8,%rsp
    1664:	48 8d 15 9d 09 00 00 	lea    0x99d(%rip),%rdx        # 2008 <_IO_stdin_used+0x8>
    166b:	48 8d 35 44 0f 00 00 	lea    0xf44(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1672:	31 c0                	xor    %eax,%eax
    1674:	bf 02 00 00 00       	mov    $0x2,%edi
    1679:	e8 52 fa ff ff       	call   10d0 <__printf_chk@plt>
    167e:	b8 05 00 00 00       	mov    $0x5,%eax
    1683:	48 83 c4 08          	add    $0x8,%rsp
    1687:	c3                   	ret
    1688:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    168f:	00 

0000000000001690 <alloc__temp376v.constprop.0>:
    1690:	41 57                	push   %r15
    1692:	49 89 ff             	mov    %rdi,%r15
    1695:	48 89 d7             	mov    %rdx,%rdi
    1698:	41 56                	push   %r14
    169a:	49 89 f6             	mov    %rsi,%r14
    169d:	41 55                	push   %r13
    169f:	49 89 cd             	mov    %rcx,%r13
    16a2:	41 54                	push   %r12
    16a4:	4d 89 c4             	mov    %r8,%r12
    16a7:	55                   	push   %rbp
    16a8:	4c 89 cd             	mov    %r9,%rbp
    16ab:	53                   	push   %rbx
    16ac:	48 89 d3             	mov    %rdx,%rbx
    16af:	48 83 ec 18          	sub    $0x18,%rsp
    16b3:	e8 f8 f9 ff ff       	call   10b0 <malloc@plt>
    16b8:	48 85 c0             	test   %rax,%rax
    16bb:	74 42                	je     16ff <alloc__temp376v.constprop.0+0x6f>
    16bd:	48 89 c7             	mov    %rax,%rdi
    16c0:	48 89 da             	mov    %rbx,%rdx
    16c3:	31 f6                	xor    %esi,%esi
    16c5:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    16ca:	e8 81 ff ff ff       	call   1650 <zero__temp371v>
    16cf:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    16d4:	49 89 07             	mov    %rax,(%r15)
    16d7:	49 c7 06 01 00 00 00 	movq   $0x1,(%r14)
    16de:	49 89 45 00          	mov    %rax,0x0(%r13)
    16e2:	31 c0                	xor    %eax,%eax
    16e4:	49 c7 04 24 01 00 00 	movq   $0x1,(%r12)
    16eb:	00 
    16ec:	48 89 5d 00          	mov    %rbx,0x0(%rbp)
    16f0:	48 83 c4 18          	add    $0x18,%rsp
    16f4:	5b                   	pop    %rbx
    16f5:	5d                   	pop    %rbp
    16f6:	41 5c                	pop    %r12
    16f8:	41 5d                	pop    %r13
    16fa:	41 5e                	pop    %r14
    16fc:	41 5f                	pop    %r15
    16fe:	c3                   	ret
    16ff:	48 8d 15 52 09 00 00 	lea    0x952(%rip),%rdx        # 2058 <_IO_stdin_used+0x58>
    1706:	48 8d 35 a9 0e 00 00 	lea    0xea9(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    170d:	bf 02 00 00 00       	mov    $0x2,%edi
    1712:	e8 b9 f9 ff ff       	call   10d0 <__printf_chk@plt>
    1717:	48 8d 15 8a 09 00 00 	lea    0x98a(%rip),%rdx        # 20a8 <_IO_stdin_used+0xa8>
    171e:	48 8d 35 91 0e 00 00 	lea    0xe91(%rip),%rsi        # 25b6 <_IO_stdin_used+0x5b6>
    1725:	31 c0                	xor    %eax,%eax
    1727:	bf 02 00 00 00       	mov    $0x2,%edi
    172c:	e8 9f f9 ff ff       	call   10d0 <__printf_chk@plt>
    1731:	b8 02 00 00 00       	mov    $0x2,%eax
    1736:	eb b8                	jmp    16f0 <alloc__temp376v.constprop.0+0x60>

Disassembly of section .fini:

0000000000001738 <_fini>:
    1738:	f3 0f 1e fa          	endbr64
    173c:	48 83 ec 08          	sub    $0x8,%rsp
    1740:	48 83 c4 08          	add    $0x8,%rsp
    1744:	c3                   	ret
