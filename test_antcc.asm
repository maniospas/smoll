
test:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 c1 2f 00 00 	mov    0x2fc1(%rip),%rax        # 3fd0 <__gmon_start__@Base>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	ret

Disassembly of section .plt:

0000000000001020 <free@plt-0x10>:
    1020:	ff 35 ca 2f 00 00    	push   0x2fca(%rip)        # 3ff0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 cc 2f 00 00    	jmp    *0x2fcc(%rip)        # 3ff8 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001030 <free@plt>:
    1030:	ff 25 ca 2f 00 00    	jmp    *0x2fca(%rip)        # 4000 <free@GLIBC_2.2.5>
    1036:	68 00 00 00 00       	push   $0x0
    103b:	e9 e0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001040 <printf@plt>:
    1040:	ff 25 c2 2f 00 00    	jmp    *0x2fc2(%rip)        # 4008 <printf@GLIBC_2.2.5>
    1046:	68 01 00 00 00       	push   $0x1
    104b:	e9 d0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001050 <memset@plt>:
    1050:	ff 25 ba 2f 00 00    	jmp    *0x2fba(%rip)        # 4010 <memset@GLIBC_2.2.5>
    1056:	68 02 00 00 00       	push   $0x2
    105b:	e9 c0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001060 <memcpy@plt>:
    1060:	ff 25 b2 2f 00 00    	jmp    *0x2fb2(%rip)        # 4018 <memcpy@GLIBC_2.14>
    1066:	68 03 00 00 00       	push   $0x3
    106b:	e9 b0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001070 <malloc@plt>:
    1070:	ff 25 aa 2f 00 00    	jmp    *0x2faa(%rip)        # 4020 <malloc@GLIBC_2.2.5>
    1076:	68 04 00 00 00       	push   $0x4
    107b:	e9 a0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001080 <realloc@plt>:
    1080:	ff 25 a2 2f 00 00    	jmp    *0x2fa2(%rip)        # 4028 <realloc@GLIBC_2.2.5>
    1086:	68 05 00 00 00       	push   $0x5
    108b:	e9 90 ff ff ff       	jmp    1020 <_init+0x20>

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090:	ff 25 4a 2f 00 00    	jmp    *0x2f4a(%rip)        # 3fe0 <__cxa_finalize@GLIBC_2.2.5>
    1096:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000000000010a0 <_start>:
    10a0:	f3 0f 1e fa          	endbr64
    10a4:	31 ed                	xor    %ebp,%ebp
    10a6:	49 89 d1             	mov    %rdx,%r9
    10a9:	5e                   	pop    %rsi
    10aa:	48 89 e2             	mov    %rsp,%rdx
    10ad:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    10b1:	50                   	push   %rax
    10b2:	54                   	push   %rsp
    10b3:	45 31 c0             	xor    %r8d,%r8d
    10b6:	31 c9                	xor    %ecx,%ecx
    10b8:	48 8d 3d 71 0b 00 00 	lea    0xb71(%rip),%rdi        # 1c30 <main>
    10bf:	ff 15 fb 2e 00 00    	call   *0x2efb(%rip)        # 3fc0 <__libc_start_main@GLIBC_2.34>
    10c5:	f4                   	hlt
    10c6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    10cd:	00 00 00 

00000000000010d0 <deregister_tm_clones>:
    10d0:	48 8d 3d 69 2f 00 00 	lea    0x2f69(%rip),%rdi        # 4040 <__TMC_END__>
    10d7:	48 8d 05 62 2f 00 00 	lea    0x2f62(%rip),%rax        # 4040 <__TMC_END__>
    10de:	48 39 f8             	cmp    %rdi,%rax
    10e1:	74 15                	je     10f8 <deregister_tm_clones+0x28>
    10e3:	48 8b 05 de 2e 00 00 	mov    0x2ede(%rip),%rax        # 3fc8 <_ITM_deregisterTMCloneTable@Base>
    10ea:	48 85 c0             	test   %rax,%rax
    10ed:	74 09                	je     10f8 <deregister_tm_clones+0x28>
    10ef:	ff e0                	jmp    *%rax
    10f1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10f8:	c3                   	ret
    10f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001100 <register_tm_clones>:
    1100:	48 8d 3d 39 2f 00 00 	lea    0x2f39(%rip),%rdi        # 4040 <__TMC_END__>
    1107:	48 8d 35 32 2f 00 00 	lea    0x2f32(%rip),%rsi        # 4040 <__TMC_END__>
    110e:	48 29 fe             	sub    %rdi,%rsi
    1111:	48 89 f0             	mov    %rsi,%rax
    1114:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1118:	48 c1 f8 03          	sar    $0x3,%rax
    111c:	48 01 c6             	add    %rax,%rsi
    111f:	48 d1 fe             	sar    $1,%rsi
    1122:	74 14                	je     1138 <register_tm_clones+0x38>
    1124:	48 8b 05 ad 2e 00 00 	mov    0x2ead(%rip),%rax        # 3fd8 <_ITM_registerTMCloneTable@Base>
    112b:	48 85 c0             	test   %rax,%rax
    112e:	74 08                	je     1138 <register_tm_clones+0x38>
    1130:	ff e0                	jmp    *%rax
    1132:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1138:	c3                   	ret
    1139:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001140 <__do_global_dtors_aux>:
    1140:	f3 0f 1e fa          	endbr64
    1144:	80 3d f5 2e 00 00 00 	cmpb   $0x0,0x2ef5(%rip)        # 4040 <__TMC_END__>
    114b:	75 2b                	jne    1178 <__do_global_dtors_aux+0x38>
    114d:	55                   	push   %rbp
    114e:	48 83 3d 8a 2e 00 00 	cmpq   $0x0,0x2e8a(%rip)        # 3fe0 <__cxa_finalize@GLIBC_2.2.5>
    1155:	00 
    1156:	48 89 e5             	mov    %rsp,%rbp
    1159:	74 0c                	je     1167 <__do_global_dtors_aux+0x27>
    115b:	48 8b 3d d6 2e 00 00 	mov    0x2ed6(%rip),%rdi        # 4038 <__dso_handle>
    1162:	e8 29 ff ff ff       	call   1090 <__cxa_finalize@plt>
    1167:	e8 64 ff ff ff       	call   10d0 <deregister_tm_clones>
    116c:	c6 05 cd 2e 00 00 01 	movb   $0x1,0x2ecd(%rip)        # 4040 <__TMC_END__>
    1173:	5d                   	pop    %rbp
    1174:	c3                   	ret
    1175:	0f 1f 00             	nopl   (%rax)
    1178:	c3                   	ret
    1179:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001180 <frame_dummy>:
    1180:	f3 0f 1e fa          	endbr64
    1184:	e9 77 ff ff ff       	jmp    1100 <register_tm_clones>
    1189:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001190 <alloc__temp428v>:
    1190:	55                   	push   %rbp
    1191:	48 89 e5             	mov    %rsp,%rbp
    1194:	41 57                	push   %r15
    1196:	41 56                	push   %r14
    1198:	41 55                	push   %r13
    119a:	41 54                	push   %r12
    119c:	53                   	push   %rbx
    119d:	48 83 ec 48          	sub    $0x48,%rsp
    11a1:	48 8b df             	mov    %rdi,%rbx
    11a4:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
    11a8:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    11ac:	4c 8b f1             	mov    %rcx,%r14
    11af:	4c 89 45 b0          	mov    %r8,-0x50(%rbp)
    11b3:	4c 89 4d b8          	mov    %r9,-0x48(%rbp)
    11b7:	4c 8b 5d 10          	mov    0x10(%rbp),%r11
    11bb:	4c 89 5d c0          	mov    %r11,-0x40(%rbp)
    11bf:	4c 8b 3b             	mov    (%rbx),%r15
    11c2:	4c 8b 5d a0          	mov    -0x60(%rbp),%r11
    11c6:	4d 8b 2b             	mov    (%r11),%r13
    11c9:	4c 8b 5d a8          	mov    -0x58(%rbp),%r11
    11cd:	4d 8b 03             	mov    (%r11),%r8
    11d0:	4c 89 45 c8          	mov    %r8,-0x38(%rbp)
    11d4:	4d 3b ee             	cmp    %r14,%r13
    11d7:	0f 85 0a 00 00 00    	jne    11e7 <alloc__temp428v+0x57>
    11dd:	b8 01 00 00 00       	mov    $0x1,%eax
    11e2:	e9 02 00 00 00       	jmp    11e9 <alloc__temp428v+0x59>
    11e7:	33 c0                	xor    %eax,%eax
    11e9:	85 c0                	test   %eax,%eax
    11eb:	0f 84 3f 00 00 00    	je     1230 <alloc__temp428v+0xa0>
    11f1:	4d 85 f6             	test   %r14,%r14
    11f4:	0f 84 0a 00 00 00    	je     1204 <alloc__temp428v+0x74>
    11fa:	b8 01 00 00 00       	mov    $0x1,%eax
    11ff:	e9 02 00 00 00       	jmp    1206 <alloc__temp428v+0x76>
    1204:	33 c0                	xor    %eax,%eax
    1206:	85 c0                	test   %eax,%eax
    1208:	0f 84 15 00 00 00    	je     1223 <alloc__temp428v+0x93>
    120e:	4c 8b 5d c8          	mov    -0x38(%rbp),%r11
    1212:	49 8b d3             	mov    %r11,%rdx
    1215:	49 0f af d6          	imul   %r14,%rdx
    1219:	49 8b ff             	mov    %r15,%rdi
    121c:	33 f6                	xor    %esi,%esi
    121e:	e8 2d fe ff ff       	call   1050 <memset@plt>
    1223:	33 c0                	xor    %eax,%eax
    1225:	44 8b e0             	mov    %eax,%r12d
    1228:	4d 8b f5             	mov    %r13,%r14
    122b:	e9 7e 00 00 00       	jmp    12ae <alloc__temp428v+0x11e>
    1230:	4d 85 ed             	test   %r13,%r13
    1233:	0f 84 0a 00 00 00    	je     1243 <alloc__temp428v+0xb3>
    1239:	b8 01 00 00 00       	mov    $0x1,%eax
    123e:	e9 02 00 00 00       	jmp    1245 <alloc__temp428v+0xb5>
    1243:	33 c0                	xor    %eax,%eax
    1245:	85 c0                	test   %eax,%eax
    1247:	0f 84 0d 00 00 00    	je     125a <alloc__temp428v+0xca>
    124d:	b8 07 00 00 00       	mov    $0x7,%eax
    1252:	44 8b e0             	mov    %eax,%r12d
    1255:	e9 3f 00 00 00       	jmp    1299 <alloc__temp428v+0x109>
    125a:	4c 8b 5d c8          	mov    -0x38(%rbp),%r11
    125e:	4d 8b eb             	mov    %r11,%r13
    1261:	4d 0f af ee          	imul   %r14,%r13
    1265:	49 8b fd             	mov    %r13,%rdi
    1268:	e8 03 fe ff ff       	call   1070 <malloc@plt>
    126d:	48 85 c0             	test   %rax,%rax
    1270:	0f 85 12 00 00 00    	jne    1288 <alloc__temp428v+0xf8>
    1276:	b8 05 00 00 00       	mov    $0x5,%eax
    127b:	33 c9                	xor    %ecx,%ecx
    127d:	4c 8b f9             	mov    %rcx,%r15
    1280:	44 8b e0             	mov    %eax,%r12d
    1283:	e9 08 00 00 00       	jmp    1290 <alloc__temp428v+0x100>
    1288:	33 c9                	xor    %ecx,%ecx
    128a:	4c 8b f8             	mov    %rax,%r15
    128d:	44 8b e1             	mov    %ecx,%r12d
    1290:	45 85 e4             	test   %r12d,%r12d
    1293:	0f 84 08 00 00 00    	je     12a1 <alloc__temp428v+0x111>
    1299:	41 8b c4             	mov    %r12d,%eax
    129c:	e9 3e 00 00 00       	jmp    12df <alloc__temp428v+0x14f>
    12a1:	49 8b ff             	mov    %r15,%rdi
    12a4:	33 f6                	xor    %esi,%esi
    12a6:	49 8b d5             	mov    %r13,%rdx
    12a9:	e8 a2 fd ff ff       	call   1050 <memset@plt>
    12ae:	4c 89 3b             	mov    %r15,(%rbx)
    12b1:	4c 8b 5d a0          	mov    -0x60(%rbp),%r11
    12b5:	4d 89 33             	mov    %r14,(%r11)
    12b8:	4c 8b 5d a8          	mov    -0x58(%rbp),%r11
    12bc:	4c 8b 45 c8          	mov    -0x38(%rbp),%r8
    12c0:	4d 89 03             	mov    %r8,(%r11)
    12c3:	4c 8b 5d b0          	mov    -0x50(%rbp),%r11
    12c7:	4d 89 3b             	mov    %r15,(%r11)
    12ca:	4c 8b 5d b8          	mov    -0x48(%rbp),%r11
    12ce:	4d 89 33             	mov    %r14,(%r11)
    12d1:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    12d5:	4c 8b 5d c8          	mov    -0x38(%rbp),%r11
    12d9:	4c 89 18             	mov    %r11,(%rax)
    12dc:	41 8b c4             	mov    %r12d,%eax
    12df:	48 83 c4 48          	add    $0x48,%rsp
    12e3:	5b                   	pop    %rbx
    12e4:	41 5c                	pop    %r12
    12e6:	41 5d                	pop    %r13
    12e8:	41 5e                	pop    %r14
    12ea:	41 5f                	pop    %r15
    12ec:	c9                   	leave
    12ed:	c3                   	ret
    12ee:	66 90                	xchg   %ax,%ax

00000000000012f0 <resize__temp442v>:
    12f0:	55                   	push   %rbp
    12f1:	48 89 e5             	mov    %rsp,%rbp
    12f4:	41 57                	push   %r15
    12f6:	41 56                	push   %r14
    12f8:	41 55                	push   %r13
    12fa:	41 54                	push   %r12
    12fc:	53                   	push   %rbx
    12fd:	48 83 ec 68          	sub    $0x68,%rsp
    1301:	48 8b df             	mov    %rdi,%rbx
    1304:	4c 8b e6             	mov    %rsi,%r12
    1307:	48 89 55 b0          	mov    %rdx,-0x50(%rbp)
    130b:	4c 89 45 b8          	mov    %r8,-0x48(%rbp)
    130f:	4c 89 4d c0          	mov    %r9,-0x40(%rbp)
    1313:	4c 8b 5d 10          	mov    0x10(%rbp),%r11
    1317:	4c 89 5d c8          	mov    %r11,-0x38(%rbp)
    131b:	48 8b 03             	mov    (%rbx),%rax
    131e:	48 89 45 80          	mov    %rax,-0x80(%rbp)
    1322:	49 8b 04 24          	mov    (%r12),%rax
    1326:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    132a:	4c 8b 5d b0          	mov    -0x50(%rbp),%r11
    132e:	49 8b 03             	mov    (%r11),%rax
    1331:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    1335:	48 c7 45 98 00 00 00 	movq   $0x0,-0x68(%rbp)
    133c:	00 
    133d:	48 c7 45 a0 00 00 00 	movq   $0x0,-0x60(%rbp)
    1344:	00 
    1345:	48 c7 45 a8 00 00 00 	movq   $0x0,-0x58(%rbp)
    134c:	00 
    134d:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    1351:	48 3b c1             	cmp    %rcx,%rax
    1354:	0f 85 0a 00 00 00    	jne    1364 <resize__temp442v+0x74>
    135a:	b8 01 00 00 00       	mov    $0x1,%eax
    135f:	e9 02 00 00 00       	jmp    1366 <resize__temp442v+0x76>
    1364:	33 c0                	xor    %eax,%eax
    1366:	85 c0                	test   %eax,%eax
    1368:	0f 84 0a 00 00 00    	je     1378 <resize__temp442v+0x88>
    136e:	33 c0                	xor    %eax,%eax
    1370:	44 8b e8             	mov    %eax,%r13d
    1373:	e9 c4 01 00 00       	jmp    153c <resize__temp442v+0x24c>
    1378:	48 85 c9             	test   %rcx,%rcx
    137b:	0f 85 0a 00 00 00    	jne    138b <resize__temp442v+0x9b>
    1381:	b8 01 00 00 00       	mov    $0x1,%eax
    1386:	e9 02 00 00 00       	jmp    138d <resize__temp442v+0x9d>
    138b:	33 c0                	xor    %eax,%eax
    138d:	85 c0                	test   %eax,%eax
    138f:	0f 84 5e 00 00 00    	je     13f3 <resize__temp442v+0x103>
    1395:	4c 8b 7d 80          	mov    -0x80(%rbp),%r15
    1399:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    139d:	4c 8b 75 90          	mov    -0x70(%rbp),%r14
    13a1:	48 85 c0             	test   %rax,%rax
    13a4:	0f 85 0a 00 00 00    	jne    13b4 <resize__temp442v+0xc4>
    13aa:	b9 01 00 00 00       	mov    $0x1,%ecx
    13af:	e9 02 00 00 00       	jmp    13b6 <resize__temp442v+0xc6>
    13b4:	33 c9                	xor    %ecx,%ecx
    13b6:	85 c9                	test   %ecx,%ecx
    13b8:	0f 85 13 00 00 00    	jne    13d1 <resize__temp442v+0xe1>
    13be:	4d 85 ff             	test   %r15,%r15
    13c1:	0f 84 08 00 00 00    	je     13cf <resize__temp442v+0xdf>
    13c7:	49 8b ff             	mov    %r15,%rdi
    13ca:	e8 61 fc ff ff       	call   1030 <free@plt>
    13cf:	33 c0                	xor    %eax,%eax
    13d1:	4c 89 7d 80          	mov    %r15,-0x80(%rbp)
    13d5:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    13d9:	4c 89 75 90          	mov    %r14,-0x70(%rbp)
    13dd:	4c 89 7d 80          	mov    %r15,-0x80(%rbp)
    13e1:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    13e5:	4c 89 75 90          	mov    %r14,-0x70(%rbp)
    13e9:	33 c0                	xor    %eax,%eax
    13eb:	44 8b e8             	mov    %eax,%r13d
    13ee:	e9 49 01 00 00       	jmp    153c <resize__temp442v+0x24c>
    13f3:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    13f7:	48 85 c0             	test   %rax,%rax
    13fa:	0f 85 0a 00 00 00    	jne    140a <resize__temp442v+0x11a>
    1400:	b8 01 00 00 00       	mov    $0x1,%eax
    1405:	e9 02 00 00 00       	jmp    140c <resize__temp442v+0x11c>
    140a:	33 c0                	xor    %eax,%eax
    140c:	85 c0                	test   %eax,%eax
    140e:	0f 84 71 00 00 00    	je     1485 <resize__temp442v+0x195>
    1414:	48 8d 7d 80          	lea    -0x80(%rbp),%rdi
    1418:	48 83 ec 10          	sub    $0x10,%rsp
    141c:	48 8d 75 88          	lea    -0x78(%rbp),%rsi
    1420:	48 8d 55 90          	lea    -0x70(%rbp),%rdx
    1424:	4c 8d 45 98          	lea    -0x68(%rbp),%r8
    1428:	4c 8d 4d a0          	lea    -0x60(%rbp),%r9
    142c:	48 8d 45 a8          	lea    -0x58(%rbp),%rax
    1430:	48 89 04 24          	mov    %rax,(%rsp)
    1434:	e8 57 fd ff ff       	call   1190 <alloc__temp428v>
    1439:	48 83 c4 10          	add    $0x10,%rsp
    143d:	85 c0                	test   %eax,%eax
    143f:	0f 84 08 00 00 00    	je     144d <resize__temp442v+0x15d>
    1445:	44 8b e8             	mov    %eax,%r13d
    1448:	e9 2a 01 00 00       	jmp    1577 <resize__temp442v+0x287>
    144d:	48 8b 4d 98          	mov    -0x68(%rbp),%rcx
    1451:	48 89 4d 80          	mov    %rcx,-0x80(%rbp)
    1455:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
    1459:	48 89 4d 88          	mov    %rcx,-0x78(%rbp)
    145d:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
    1461:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
    1465:	48 8b 4d 80          	mov    -0x80(%rbp),%rcx
    1469:	48 89 4d 80          	mov    %rcx,-0x80(%rbp)
    146d:	48 8b 4d 88          	mov    -0x78(%rbp),%rcx
    1471:	48 89 4d 88          	mov    %rcx,-0x78(%rbp)
    1475:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
    1479:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
    147d:	44 8b e8             	mov    %eax,%r13d
    1480:	e9 b7 00 00 00       	jmp    153c <resize__temp442v+0x24c>
    1485:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    1489:	48 8b 55 90          	mov    -0x70(%rbp),%rdx
    148d:	4c 8b f0             	mov    %rax,%r14
    1490:	4c 0f af f2          	imul   %rdx,%r14
    1494:	48 89 4d 88          	mov    %rcx,-0x78(%rbp)
    1498:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    149c:	4c 8b f8             	mov    %rax,%r15
    149f:	4c 0f af f9          	imul   %rcx,%r15
    14a3:	48 8b 7d 80          	mov    -0x80(%rbp),%rdi
    14a7:	48 85 ff             	test   %rdi,%rdi
    14aa:	0f 84 0d 00 00 00    	je     14bd <resize__temp442v+0x1cd>
    14b0:	49 8b f7             	mov    %r15,%rsi
    14b3:	e8 c8 fb ff ff       	call   1080 <realloc@plt>
    14b8:	e9 08 00 00 00       	jmp    14c5 <resize__temp442v+0x1d5>
    14bd:	49 8b ff             	mov    %r15,%rdi
    14c0:	e8 ab fb ff ff       	call   1070 <malloc@plt>
    14c5:	48 85 c0             	test   %rax,%rax
    14c8:	0f 85 0f 00 00 00    	jne    14dd <resize__temp442v+0x1ed>
    14ce:	b8 06 00 00 00       	mov    $0x6,%eax
    14d3:	33 c9                	xor    %ecx,%ecx
    14d5:	44 8b e8             	mov    %eax,%r13d
    14d8:	e9 08 00 00 00       	jmp    14e5 <resize__temp442v+0x1f5>
    14dd:	33 c9                	xor    %ecx,%ecx
    14df:	4c 8b e9             	mov    %rcx,%r13
    14e2:	48 8b c8             	mov    %rax,%rcx
    14e5:	45 85 ed             	test   %r13d,%r13d
    14e8:	0f 85 89 00 00 00    	jne    1577 <resize__temp442v+0x287>
    14ee:	48 89 4d 80          	mov    %rcx,-0x80(%rbp)
    14f2:	4d 3b f7             	cmp    %r15,%r14
    14f5:	0f 83 0a 00 00 00    	jae    1505 <resize__temp442v+0x215>
    14fb:	b8 01 00 00 00       	mov    $0x1,%eax
    1500:	e9 02 00 00 00       	jmp    1507 <resize__temp442v+0x217>
    1505:	33 c0                	xor    %eax,%eax
    1507:	85 c0                	test   %eax,%eax
    1509:	0f 84 15 00 00 00    	je     1524 <resize__temp442v+0x234>
    150f:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    1513:	4a 8d 3c 30          	lea    (%rax,%r14,1),%rdi
    1517:	49 8b d7             	mov    %r15,%rdx
    151a:	49 2b d6             	sub    %r14,%rdx
    151d:	33 f6                	xor    %esi,%esi
    151f:	e8 2c fb ff ff       	call   1050 <memset@plt>
    1524:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    1528:	48 89 45 80          	mov    %rax,-0x80(%rbp)
    152c:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    1530:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    1534:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    1538:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    153c:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    1540:	48 89 03             	mov    %rax,(%rbx)
    1543:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    1547:	49 89 04 24          	mov    %rax,(%r12)
    154b:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    154f:	4c 8b 5d b0          	mov    -0x50(%rbp),%r11
    1553:	49 89 03             	mov    %rax,(%r11)
    1556:	48 8b 45 80          	mov    -0x80(%rbp),%rax
    155a:	4c 8b 5d b8          	mov    -0x48(%rbp),%r11
    155e:	49 89 03             	mov    %rax,(%r11)
    1561:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    1565:	4c 8b 5d c0          	mov    -0x40(%rbp),%r11
    1569:	49 89 03             	mov    %rax,(%r11)
    156c:	48 8b 45 90          	mov    -0x70(%rbp),%rax
    1570:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
    1574:	48 89 01             	mov    %rax,(%rcx)
    1577:	48 8b 5d 98          	mov    -0x68(%rbp),%rbx
    157b:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    157f:	4c 8b 65 a8          	mov    -0x58(%rbp),%r12
    1583:	48 85 c0             	test   %rax,%rax
    1586:	0f 85 0a 00 00 00    	jne    1596 <resize__temp442v+0x2a6>
    158c:	b9 01 00 00 00       	mov    $0x1,%ecx
    1591:	e9 02 00 00 00       	jmp    1598 <resize__temp442v+0x2a8>
    1596:	33 c9                	xor    %ecx,%ecx
    1598:	85 c9                	test   %ecx,%ecx
    159a:	0f 85 13 00 00 00    	jne    15b3 <resize__temp442v+0x2c3>
    15a0:	48 85 db             	test   %rbx,%rbx
    15a3:	0f 84 08 00 00 00    	je     15b1 <resize__temp442v+0x2c1>
    15a9:	48 8b fb             	mov    %rbx,%rdi
    15ac:	e8 7f fa ff ff       	call   1030 <free@plt>
    15b1:	33 c0                	xor    %eax,%eax
    15b3:	48 89 5d 98          	mov    %rbx,-0x68(%rbp)
    15b7:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    15bb:	4c 89 65 a8          	mov    %r12,-0x58(%rbp)
    15bf:	41 8b c5             	mov    %r13d,%eax
    15c2:	48 83 c4 68          	add    $0x68,%rsp
    15c6:	5b                   	pop    %rbx
    15c7:	41 5c                	pop    %r12
    15c9:	41 5d                	pop    %r13
    15cb:	41 5e                	pop    %r14
    15cd:	41 5f                	pop    %r15
    15cf:	c9                   	leave
    15d0:	c3                   	ret
    15d1:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    15d8:	00 00 
    15da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000015e0 <push__temp494v>:
    15e0:	55                   	push   %rbp
    15e1:	48 89 e5             	mov    %rsp,%rbp
    15e4:	41 57                	push   %r15
    15e6:	41 56                	push   %r14
    15e8:	41 55                	push   %r13
    15ea:	41 54                	push   %r12
    15ec:	53                   	push   %rbx
    15ed:	48 83 ec 38          	sub    $0x38,%rsp
    15f1:	48 8b df             	mov    %rdi,%rbx
    15f4:	4c 8b e6             	mov    %rsi,%r12
    15f7:	4c 8b ea             	mov    %rdx,%r13
    15fa:	4c 8b f1             	mov    %rcx,%r14
    15fd:	4c 89 45 d0          	mov    %r8,-0x30(%rbp)
    1601:	48 8b 03             	mov    (%rbx),%rax
    1604:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    1608:	49 8b 04 24          	mov    (%r12),%rax
    160c:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
    1610:	49 8b 45 00          	mov    0x0(%r13),%rax
    1614:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
    1618:	4d 8b 3e             	mov    (%r14),%r15
    161b:	48 c7 45 b8 00 00 00 	movq   $0x0,-0x48(%rbp)
    1622:	00 
    1623:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
    162a:	00 
    162b:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
    1632:	00 
    1633:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    1637:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
    163b:	48 8b 55 b0          	mov    -0x50(%rbp),%rdx
    163f:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    1643:	48 89 4d a8          	mov    %rcx,-0x58(%rbp)
    1647:	48 89 55 b0          	mov    %rdx,-0x50(%rbp)
    164b:	4c 3b f9             	cmp    %rcx,%r15
    164e:	0f 82 0a 00 00 00    	jb     165e <push__temp494v+0x7e>
    1654:	b8 01 00 00 00       	mov    $0x1,%eax
    1659:	e9 02 00 00 00       	jmp    1660 <push__temp494v+0x80>
    165e:	33 c0                	xor    %eax,%eax
    1660:	85 c0                	test   %eax,%eax
    1662:	0f 84 5d 00 00 00    	je     16c5 <push__temp494v+0xe5>
    1668:	49 8b c7             	mov    %r15,%rax
    166b:	48 d1 e8             	shr    $1,%rax
    166e:	48 ff c0             	inc    %rax
    1671:	49 8d 0c 07          	lea    (%r15,%rax,1),%rcx
    1675:	48 8d 7d a0          	lea    -0x60(%rbp),%rdi
    1679:	48 83 ec 10          	sub    $0x10,%rsp
    167d:	48 8d 75 a8          	lea    -0x58(%rbp),%rsi
    1681:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
    1685:	4c 8d 45 b8          	lea    -0x48(%rbp),%r8
    1689:	4c 8d 4d c0          	lea    -0x40(%rbp),%r9
    168d:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    1691:	48 89 04 24          	mov    %rax,(%rsp)
    1695:	e8 56 fc ff ff       	call   12f0 <resize__temp442v>
    169a:	48 83 c4 10          	add    $0x10,%rsp
    169e:	85 c0                	test   %eax,%eax
    16a0:	0f 84 07 00 00 00    	je     16ad <push__temp494v+0xcd>
    16a6:	8b c8                	mov    %eax,%ecx
    16a8:	e9 72 00 00 00       	jmp    171f <push__temp494v+0x13f>
    16ad:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    16b1:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    16b5:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    16b9:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
    16bd:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    16c1:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
    16c5:	49 8d 47 01          	lea    0x1(%r15),%rax
    16c9:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
    16cd:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
    16d1:	48 8b 75 b0          	mov    -0x50(%rbp),%rsi
    16d5:	4c 3b fa             	cmp    %rdx,%r15
    16d8:	0f 82 0a 00 00 00    	jb     16e8 <push__temp494v+0x108>
    16de:	bf 01 00 00 00       	mov    $0x1,%edi
    16e3:	e9 02 00 00 00       	jmp    16ea <push__temp494v+0x10a>
    16e8:	33 ff                	xor    %edi,%edi
    16ea:	85 ff                	test   %edi,%edi
    16ec:	0f 84 0c 00 00 00    	je     16fe <push__temp494v+0x11e>
    16f2:	b9 08 00 00 00       	mov    $0x8,%ecx
    16f7:	33 d2                	xor    %edx,%edx
    16f9:	e9 19 00 00 00       	jmp    1717 <push__temp494v+0x137>
    16fe:	4c 0f af fe          	imul   %rsi,%r15
    1702:	4a 8d 3c 39          	lea    (%rcx,%r15,1),%rdi
    1706:	48 89 4d a0          	mov    %rcx,-0x60(%rbp)
    170a:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    170e:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    1712:	33 c9                	xor    %ecx,%ecx
    1714:	48 8b d7             	mov    %rdi,%rdx
    1717:	85 c9                	test   %ecx,%ecx
    1719:	0f 84 07 00 00 00    	je     1726 <push__temp494v+0x146>
    171f:	8b c1                	mov    %ecx,%eax
    1721:	e9 23 00 00 00       	jmp    1749 <push__temp494v+0x169>
    1726:	48 8b 75 a0          	mov    -0x60(%rbp),%rsi
    172a:	48 89 33             	mov    %rsi,(%rbx)
    172d:	48 8b 75 a8          	mov    -0x58(%rbp),%rsi
    1731:	49 89 34 24          	mov    %rsi,(%r12)
    1735:	48 8b 75 b0          	mov    -0x50(%rbp),%rsi
    1739:	49 89 75 00          	mov    %rsi,0x0(%r13)
    173d:	49 89 06             	mov    %rax,(%r14)
    1740:	4c 8b 5d d0          	mov    -0x30(%rbp),%r11
    1744:	49 89 13             	mov    %rdx,(%r11)
    1747:	8b c1                	mov    %ecx,%eax
    1749:	48 83 c4 38          	add    $0x38,%rsp
    174d:	5b                   	pop    %rbx
    174e:	41 5c                	pop    %r12
    1750:	41 5d                	pop    %r13
    1752:	41 5e                	pop    %r14
    1754:	41 5f                	pop    %r15
    1756:	c9                   	leave
    1757:	c3                   	ret
    1758:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    175f:	00 

0000000000001760 <mutget__temp491v>:
    1760:	41 55                	push   %r13
    1762:	41 54                	push   %r12
    1764:	53                   	push   %rbx
    1765:	48 8b 07             	mov    (%rdi),%rax
    1768:	4c 8b 16             	mov    (%rsi),%r10
    176b:	48 8b 1a             	mov    (%rdx),%rbx
    176e:	4c 8b 21             	mov    (%rcx),%r12
    1771:	4d 3b c4             	cmp    %r12,%r8
    1774:	0f 82 0b 00 00 00    	jb     1785 <mutget__temp491v+0x25>
    177a:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    1780:	e9 03 00 00 00       	jmp    1788 <mutget__temp491v+0x28>
    1785:	45 33 ed             	xor    %r13d,%r13d
    1788:	45 85 ed             	test   %r13d,%r13d
    178b:	0f 84 0d 00 00 00    	je     179e <mutget__temp491v+0x3e>
    1791:	b8 08 00 00 00       	mov    $0x8,%eax
    1796:	44 8b c0             	mov    %eax,%r8d
    1799:	e9 44 00 00 00       	jmp    17e2 <mutget__temp491v+0x82>
    179e:	4d 3b c2             	cmp    %r10,%r8
    17a1:	0f 82 0b 00 00 00    	jb     17b2 <mutget__temp491v+0x52>
    17a7:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    17ad:	e9 03 00 00 00       	jmp    17b5 <mutget__temp491v+0x55>
    17b2:	45 33 ed             	xor    %r13d,%r13d
    17b5:	45 85 ed             	test   %r13d,%r13d
    17b8:	0f 84 0e 00 00 00    	je     17cc <mutget__temp491v+0x6c>
    17be:	41 b8 08 00 00 00    	mov    $0x8,%r8d
    17c4:	45 33 ed             	xor    %r13d,%r13d
    17c7:	e9 0d 00 00 00       	jmp    17d9 <mutget__temp491v+0x79>
    17cc:	4c 0f af c3          	imul   %rbx,%r8
    17d0:	4c 03 c0             	add    %rax,%r8
    17d3:	45 33 ed             	xor    %r13d,%r13d
    17d6:	4d 87 e8             	xchg   %r13,%r8
    17d9:	45 85 c0             	test   %r8d,%r8d
    17dc:	0f 84 09 00 00 00    	je     17eb <mutget__temp491v+0x8b>
    17e2:	41 8b c0             	mov    %r8d,%eax
    17e5:	5b                   	pop    %rbx
    17e6:	41 5c                	pop    %r12
    17e8:	41 5d                	pop    %r13
    17ea:	c3                   	ret
    17eb:	48 89 07             	mov    %rax,(%rdi)
    17ee:	4c 89 16             	mov    %r10,(%rsi)
    17f1:	48 89 1a             	mov    %rbx,(%rdx)
    17f4:	4c 89 21             	mov    %r12,(%rcx)
    17f7:	4d 89 29             	mov    %r13,(%r9)
    17fa:	41 8b c0             	mov    %r8d,%eax
    17fd:	5b                   	pop    %rbx
    17fe:	41 5c                	pop    %r12
    1800:	41 5d                	pop    %r13
    1802:	c3                   	ret
    1803:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    180a:	00 00 
    180c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001810 <get__temp488v>:
    1810:	41 55                	push   %r13
    1812:	41 54                	push   %r12
    1814:	53                   	push   %rbx
    1815:	48 8b 07             	mov    (%rdi),%rax
    1818:	4c 8b 16             	mov    (%rsi),%r10
    181b:	48 8b 1a             	mov    (%rdx),%rbx
    181e:	4c 8b 21             	mov    (%rcx),%r12
    1821:	4d 3b c4             	cmp    %r12,%r8
    1824:	0f 82 0b 00 00 00    	jb     1835 <get__temp488v+0x25>
    182a:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    1830:	e9 03 00 00 00       	jmp    1838 <get__temp488v+0x28>
    1835:	45 33 ed             	xor    %r13d,%r13d
    1838:	45 85 ed             	test   %r13d,%r13d
    183b:	0f 84 0d 00 00 00    	je     184e <get__temp488v+0x3e>
    1841:	b8 08 00 00 00       	mov    $0x8,%eax
    1846:	44 8b c0             	mov    %eax,%r8d
    1849:	e9 44 00 00 00       	jmp    1892 <get__temp488v+0x82>
    184e:	4d 3b c2             	cmp    %r10,%r8
    1851:	0f 82 0b 00 00 00    	jb     1862 <get__temp488v+0x52>
    1857:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    185d:	e9 03 00 00 00       	jmp    1865 <get__temp488v+0x55>
    1862:	45 33 ed             	xor    %r13d,%r13d
    1865:	45 85 ed             	test   %r13d,%r13d
    1868:	0f 84 0e 00 00 00    	je     187c <get__temp488v+0x6c>
    186e:	41 b8 08 00 00 00    	mov    $0x8,%r8d
    1874:	45 33 ed             	xor    %r13d,%r13d
    1877:	e9 0d 00 00 00       	jmp    1889 <get__temp488v+0x79>
    187c:	4c 0f af c3          	imul   %rbx,%r8
    1880:	4c 03 c0             	add    %rax,%r8
    1883:	45 33 ed             	xor    %r13d,%r13d
    1886:	4d 87 e8             	xchg   %r13,%r8
    1889:	45 85 c0             	test   %r8d,%r8d
    188c:	0f 84 09 00 00 00    	je     189b <get__temp488v+0x8b>
    1892:	41 8b c0             	mov    %r8d,%eax
    1895:	5b                   	pop    %rbx
    1896:	41 5c                	pop    %r12
    1898:	41 5d                	pop    %r13
    189a:	c3                   	ret
    189b:	48 89 07             	mov    %rax,(%rdi)
    189e:	4c 89 16             	mov    %r10,(%rsi)
    18a1:	48 89 1a             	mov    %rbx,(%rdx)
    18a4:	4c 89 21             	mov    %r12,(%rcx)
    18a7:	4d 89 29             	mov    %r13,(%r9)
    18aa:	41 8b c0             	mov    %r8d,%eax
    18ad:	5b                   	pop    %rbx
    18ae:	41 5c                	pop    %r12
    18b0:	41 5d                	pop    %r13
    18b2:	c3                   	ret
    18b3:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    18ba:	00 00 
    18bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000000018c0 <main__temp568v>:
    18c0:	55                   	push   %rbp
    18c1:	48 89 e5             	mov    %rsp,%rbp
    18c4:	53                   	push   %rbx
    18c5:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp
    18cc:	48 c7 85 70 ff ff ff 	movq   $0x0,-0x90(%rbp)
    18d3:	00 00 00 00 
    18d7:	48 c7 85 78 ff ff ff 	movq   $0x0,-0x88(%rbp)
    18de:	00 00 00 00 
    18e2:	48 c7 45 80 00 00 00 	movq   $0x0,-0x80(%rbp)
    18e9:	00 
    18ea:	48 c7 45 88 00 00 00 	movq   $0x0,-0x78(%rbp)
    18f1:	00 
    18f2:	48 c7 45 90 00 00 00 	movq   $0x0,-0x70(%rbp)
    18f9:	00 
    18fa:	48 c7 45 98 00 00 00 	movq   $0x0,-0x68(%rbp)
    1901:	00 
    1902:	48 c7 45 a0 00 00 00 	movq   $0x0,-0x60(%rbp)
    1909:	00 
    190a:	48 c7 45 a8 00 00 00 	movq   $0x0,-0x58(%rbp)
    1911:	00 
    1912:	48 c7 45 b0 00 00 00 	movq   $0x0,-0x50(%rbp)
    1919:	00 
    191a:	48 c7 45 b8 00 00 00 	movq   $0x0,-0x48(%rbp)
    1921:	00 
    1922:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
    1929:	00 
    192a:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
    1931:	00 
    1932:	48 c7 45 d0 00 00 00 	movq   $0x0,-0x30(%rbp)
    1939:	00 
    193a:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
    1941:	00 
    1942:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
    1949:	00 
    194a:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
    1951:	00 
    1952:	48 c7 45 f0 00 00 00 	movq   $0x0,-0x10(%rbp)
    1959:	00 
    195a:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
    1961:	48 c7 00 00 00 00 00 	movq   $0x0,(%rax)
    1968:	48 c7 85 78 ff ff ff 	movq   $0x0,-0x88(%rbp)
    196f:	00 00 00 00 
    1973:	48 c7 45 80 00 00 00 	movq   $0x0,-0x80(%rbp)
    197a:	00 
    197b:	48 c7 45 88 08 00 00 	movq   $0x8,-0x78(%rbp)
    1982:	00 
    1983:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
    198a:	48 89 45 90          	mov    %rax,-0x70(%rbp)
    198e:	48 b8 9a 99 99 99 99 	movabs $0x3fb999999999999a,%rax
    1995:	99 b9 3f 
    1998:	48 89 45 98          	mov    %rax,-0x68(%rbp)
    199c:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    19a3:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    19a7:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    19ab:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    19af:	4c 8d 45 a0          	lea    -0x60(%rbp),%r8
    19b3:	e8 28 fc ff ff       	call   15e0 <push__temp494v>
    19b8:	85 c0                	test   %eax,%eax
    19ba:	0f 84 07 00 00 00    	je     19c7 <main__temp568v+0x107>
    19c0:	8b d8                	mov    %eax,%ebx
    19c2:	e9 57 02 00 00       	jmp    1c1e <main__temp568v+0x35e>
    19c7:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
    19cb:	48 85 c9             	test   %rcx,%rcx
    19ce:	0f 84 48 02 00 00    	je     1c1c <main__temp568v+0x35c>
    19d4:	48 8b 7d a0          	mov    -0x60(%rbp),%rdi
    19d8:	48 8d 75 98          	lea    -0x68(%rbp),%rsi
    19dc:	ba 08 00 00 00       	mov    $0x8,%edx
    19e1:	e8 7a f6 ff ff       	call   1060 <memcpy@plt>
    19e6:	48 b8 9a 99 99 99 99 	movabs $0x3fb999999999999a,%rax
    19ed:	99 b9 3f 
    19f0:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
    19f4:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    19fb:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    19ff:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    1a03:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    1a07:	4c 8d 45 b0          	lea    -0x50(%rbp),%r8
    1a0b:	e8 d0 fb ff ff       	call   15e0 <push__temp494v>
    1a10:	85 c0                	test   %eax,%eax
    1a12:	0f 84 07 00 00 00    	je     1a1f <main__temp568v+0x15f>
    1a18:	8b d8                	mov    %eax,%ebx
    1a1a:	e9 ff 01 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1a1f:	48 8b 4d b0          	mov    -0x50(%rbp),%rcx
    1a23:	48 85 c9             	test   %rcx,%rcx
    1a26:	0f 84 e9 01 00 00    	je     1c15 <main__temp568v+0x355>
    1a2c:	48 8b 7d b0          	mov    -0x50(%rbp),%rdi
    1a30:	48 8d 75 a8          	lea    -0x58(%rbp),%rsi
    1a34:	ba 08 00 00 00       	mov    $0x8,%edx
    1a39:	e8 22 f6 ff ff       	call   1060 <memcpy@plt>
    1a3e:	48 b8 9a 99 99 99 99 	movabs $0x3fb999999999999a,%rax
    1a45:	99 b9 3f 
    1a48:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
    1a4c:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    1a53:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    1a57:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    1a5b:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    1a5f:	4c 8d 45 c0          	lea    -0x40(%rbp),%r8
    1a63:	e8 78 fb ff ff       	call   15e0 <push__temp494v>
    1a68:	85 c0                	test   %eax,%eax
    1a6a:	0f 84 07 00 00 00    	je     1a77 <main__temp568v+0x1b7>
    1a70:	8b d8                	mov    %eax,%ebx
    1a72:	e9 a7 01 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1a77:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
    1a7b:	48 85 c9             	test   %rcx,%rcx
    1a7e:	0f 84 8a 01 00 00    	je     1c0e <main__temp568v+0x34e>
    1a84:	48 8b 7d c0          	mov    -0x40(%rbp),%rdi
    1a88:	48 8d 75 b8          	lea    -0x48(%rbp),%rsi
    1a8c:	ba 08 00 00 00       	mov    $0x8,%edx
    1a91:	e8 ca f5 ff ff       	call   1060 <memcpy@plt>
    1a96:	48 8b 85 78 ff ff ff 	mov    -0x88(%rbp),%rax
    1a9d:	48 8b 75 80          	mov    -0x80(%rbp),%rsi
    1aa1:	48 8b 4d 88          	mov    -0x78(%rbp),%rcx
    1aa5:	48 89 85 78 ff ff ff 	mov    %rax,-0x88(%rbp)
    1aac:	48 89 75 80          	mov    %rsi,-0x80(%rbp)
    1ab0:	48 89 4d 88          	mov    %rcx,-0x78(%rbp)
    1ab4:	48 8d 3d 49 05 00 00 	lea    0x549(%rip),%rdi        # 2004 <.LD.0>
    1abb:	48 8d 15 52 05 00 00 	lea    0x552(%rip),%rdx        # 2014 <.LD.3>
    1ac2:	33 c0                	xor    %eax,%eax
    1ac4:	e8 77 f5 ff ff       	call   1040 <printf@plt>
    1ac9:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    1ad0:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    1ad4:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    1ad8:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    1adc:	41 b8 01 00 00 00    	mov    $0x1,%r8d
    1ae2:	4c 8d 4d c8          	lea    -0x38(%rbp),%r9
    1ae6:	e8 75 fc ff ff       	call   1760 <mutget__temp491v>
    1aeb:	85 c0                	test   %eax,%eax
    1aed:	0f 84 07 00 00 00    	je     1afa <main__temp568v+0x23a>
    1af3:	8b d8                	mov    %eax,%ebx
    1af5:	e9 24 01 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1afa:	48 b9 9a 99 99 99 99 	movabs $0x3fc999999999999a,%rcx
    1b01:	99 c9 3f 
    1b04:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
    1b08:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
    1b0c:	48 85 c9             	test   %rcx,%rcx
    1b0f:	0f 84 f2 00 00 00    	je     1c07 <main__temp568v+0x347>
    1b15:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
    1b19:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
    1b1d:	ba 08 00 00 00       	mov    $0x8,%edx
    1b22:	e8 39 f5 ff ff       	call   1060 <memcpy@plt>
    1b27:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    1b2e:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    1b32:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    1b36:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    1b3a:	45 33 c0             	xor    %r8d,%r8d
    1b3d:	4c 8d 4d d8          	lea    -0x28(%rbp),%r9
    1b41:	e8 ca fc ff ff       	call   1810 <get__temp488v>
    1b46:	85 c0                	test   %eax,%eax
    1b48:	0f 84 07 00 00 00    	je     1b55 <main__temp568v+0x295>
    1b4e:	8b d8                	mov    %eax,%ebx
    1b50:	e9 c9 00 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1b55:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
    1b59:	48 85 c9             	test   %rcx,%rcx
    1b5c:	0f 84 9e 00 00 00    	je     1c00 <main__temp568v+0x340>
    1b62:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
    1b66:	48 8d 7d e0          	lea    -0x20(%rbp),%rdi
    1b6a:	ba 08 00 00 00       	mov    $0x8,%edx
    1b6f:	e8 ec f4 ff ff       	call   1060 <memcpy@plt>
    1b74:	f2 0f 10 45 e0       	movsd  -0x20(%rbp),%xmm0
    1b79:	48 8d 3d 8d 04 00 00 	lea    0x48d(%rip),%rdi        # 200d <.LD.2>
    1b80:	48 8d 35 84 04 00 00 	lea    0x484(%rip),%rsi        # 200b <.LD.1>
    1b87:	b8 01 00 00 00       	mov    $0x1,%eax
    1b8c:	e8 af f4 ff ff       	call   1040 <printf@plt>
    1b91:	48 8d bd 78 ff ff ff 	lea    -0x88(%rbp),%rdi
    1b98:	48 8d 75 80          	lea    -0x80(%rbp),%rsi
    1b9c:	48 8d 55 88          	lea    -0x78(%rbp),%rdx
    1ba0:	48 8d 4d 90          	lea    -0x70(%rbp),%rcx
    1ba4:	41 b8 01 00 00 00    	mov    $0x1,%r8d
    1baa:	4c 8d 4d e8          	lea    -0x18(%rbp),%r9
    1bae:	e8 5d fc ff ff       	call   1810 <get__temp488v>
    1bb3:	8b d8                	mov    %eax,%ebx
    1bb5:	85 db                	test   %ebx,%ebx
    1bb7:	0f 85 61 00 00 00    	jne    1c1e <main__temp568v+0x35e>
    1bbd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1bc1:	48 85 c0             	test   %rax,%rax
    1bc4:	0f 84 54 00 00 00    	je     1c1e <main__temp568v+0x35e>
    1bca:	48 8b 75 e8          	mov    -0x18(%rbp),%rsi
    1bce:	48 8d 7d f0          	lea    -0x10(%rbp),%rdi
    1bd2:	ba 08 00 00 00       	mov    $0x8,%edx
    1bd7:	e8 84 f4 ff ff       	call   1060 <memcpy@plt>
    1bdc:	f2 0f 10 45 f0       	movsd  -0x10(%rbp),%xmm0
    1be1:	48 8d 3d 25 04 00 00 	lea    0x425(%rip),%rdi        # 200d <.LD.2>
    1be8:	48 8d 35 1c 04 00 00 	lea    0x41c(%rip),%rsi        # 200b <.LD.1>
    1bef:	b8 01 00 00 00       	mov    $0x1,%eax
    1bf4:	e8 47 f4 ff ff       	call   1040 <printf@plt>
    1bf9:	8b c3                	mov    %ebx,%eax
    1bfb:	e9 20 00 00 00       	jmp    1c20 <main__temp568v+0x360>
    1c00:	8b d8                	mov    %eax,%ebx
    1c02:	e9 17 00 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1c07:	8b d8                	mov    %eax,%ebx
    1c09:	e9 10 00 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1c0e:	8b d8                	mov    %eax,%ebx
    1c10:	e9 09 00 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1c15:	8b d8                	mov    %eax,%ebx
    1c17:	e9 02 00 00 00       	jmp    1c1e <main__temp568v+0x35e>
    1c1c:	8b d8                	mov    %eax,%ebx
    1c1e:	8b c3                	mov    %ebx,%eax
    1c20:	48 81 c4 88 00 00 00 	add    $0x88,%rsp
    1c27:	5b                   	pop    %rbx
    1c28:	c9                   	leave
    1c29:	c3                   	ret
    1c2a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000001c30 <main>:
    1c30:	55                   	push   %rbp
    1c31:	48 89 e5             	mov    %rsp,%rbp
    1c34:	33 c0                	xor    %eax,%eax
    1c36:	e8 85 fc ff ff       	call   18c0 <main__temp568v>
    1c3b:	33 c0                	xor    %eax,%eax
    1c3d:	c9                   	leave
    1c3e:	c3                   	ret
	...

Disassembly of section .fini:

0000000000001c40 <_fini>:
    1c40:	f3 0f 1e fa          	endbr64
    1c44:	48 83 ec 08          	sub    $0x8,%rsp
    1c48:	48 83 c4 08          	add    $0x8,%rsp
    1c4c:	c3                   	ret
