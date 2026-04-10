
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
    1084:	48 83 ec 18          	sub    $0x18,%rsp
    1088:	bf 2a 00 00 00       	mov    $0x2a,%edi
    108d:	64 48 8b 34 25 28 00 	mov    %fs:0x28,%rsi
    1094:	00 00 
    1096:	48 89 74 24 08       	mov    %rsi,0x8(%rsp)
    109b:	48 89 e6             	mov    %rsp,%rsi
    109e:	e8 2d 01 00 00       	call   11d0 <fib__temp382v>
    10a3:	48 8b 14 24          	mov    (%rsp),%rdx
    10a7:	31 c0                	xor    %eax,%eax
    10a9:	bf 02 00 00 00       	mov    $0x2,%edi
    10ae:	48 8d 0d 4f 0f 00 00 	lea    0xf4f(%rip),%rcx        # 2004 <_IO_stdin_used+0x4>
    10b5:	48 8d 35 4a 0f 00 00 	lea    0xf4a(%rip),%rsi        # 2006 <_IO_stdin_used+0x6>
    10bc:	e8 af ff ff ff       	call   1070 <__printf_chk@plt>
    10c1:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    10c6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    10cd:	00 00 
    10cf:	75 07                	jne    10d8 <main+0x58>
    10d1:	31 c0                	xor    %eax,%eax
    10d3:	48 83 c4 18          	add    $0x18,%rsp
    10d7:	c3                   	ret
    10d8:	e8 83 ff ff ff       	call   1060 <__stack_chk_fail@plt>
    10dd:	0f 1f 00             	nopl   (%rax)

00000000000010e0 <_start>:
    10e0:	f3 0f 1e fa          	endbr64
    10e4:	31 ed                	xor    %ebp,%ebp
    10e6:	49 89 d1             	mov    %rdx,%r9
    10e9:	5e                   	pop    %rsi
    10ea:	48 89 e2             	mov    %rsp,%rdx
    10ed:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    10f1:	50                   	push   %rax
    10f2:	54                   	push   %rsp
    10f3:	45 31 c0             	xor    %r8d,%r8d
    10f6:	31 c9                	xor    %ecx,%ecx
    10f8:	48 8d 3d 81 ff ff ff 	lea    -0x7f(%rip),%rdi        # 1080 <main>
    10ff:	ff 15 d3 2e 00 00    	call   *0x2ed3(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    1105:	f4                   	hlt
    1106:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    110d:	00 00 00 

0000000000001110 <deregister_tm_clones>:
    1110:	48 8d 3d f9 2e 00 00 	lea    0x2ef9(%rip),%rdi        # 4010 <__TMC_END__>
    1117:	48 8d 05 f2 2e 00 00 	lea    0x2ef2(%rip),%rax        # 4010 <__TMC_END__>
    111e:	48 39 f8             	cmp    %rdi,%rax
    1121:	74 15                	je     1138 <deregister_tm_clones+0x28>
    1123:	48 8b 05 b6 2e 00 00 	mov    0x2eb6(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    112a:	48 85 c0             	test   %rax,%rax
    112d:	74 09                	je     1138 <deregister_tm_clones+0x28>
    112f:	ff e0                	jmp    *%rax
    1131:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1138:	c3                   	ret
    1139:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001140 <register_tm_clones>:
    1140:	48 8d 3d c9 2e 00 00 	lea    0x2ec9(%rip),%rdi        # 4010 <__TMC_END__>
    1147:	48 8d 35 c2 2e 00 00 	lea    0x2ec2(%rip),%rsi        # 4010 <__TMC_END__>
    114e:	48 29 fe             	sub    %rdi,%rsi
    1151:	48 89 f0             	mov    %rsi,%rax
    1154:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1158:	48 c1 f8 03          	sar    $0x3,%rax
    115c:	48 01 c6             	add    %rax,%rsi
    115f:	48 d1 fe             	sar    $1,%rsi
    1162:	74 14                	je     1178 <register_tm_clones+0x38>
    1164:	48 8b 05 85 2e 00 00 	mov    0x2e85(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    116b:	48 85 c0             	test   %rax,%rax
    116e:	74 08                	je     1178 <register_tm_clones+0x38>
    1170:	ff e0                	jmp    *%rax
    1172:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1178:	c3                   	ret
    1179:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001180 <__do_global_dtors_aux>:
    1180:	f3 0f 1e fa          	endbr64
    1184:	80 3d 85 2e 00 00 00 	cmpb   $0x0,0x2e85(%rip)        # 4010 <__TMC_END__>
    118b:	75 2b                	jne    11b8 <__do_global_dtors_aux+0x38>
    118d:	55                   	push   %rbp
    118e:	48 83 3d 62 2e 00 00 	cmpq   $0x0,0x2e62(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1195:	00 
    1196:	48 89 e5             	mov    %rsp,%rbp
    1199:	74 0c                	je     11a7 <__do_global_dtors_aux+0x27>
    119b:	48 8b 3d 66 2e 00 00 	mov    0x2e66(%rip),%rdi        # 4008 <__dso_handle>
    11a2:	e8 a9 fe ff ff       	call   1050 <__cxa_finalize@plt>
    11a7:	e8 64 ff ff ff       	call   1110 <deregister_tm_clones>
    11ac:	c6 05 5d 2e 00 00 01 	movb   $0x1,0x2e5d(%rip)        # 4010 <__TMC_END__>
    11b3:	5d                   	pop    %rbp
    11b4:	c3                   	ret
    11b5:	0f 1f 00             	nopl   (%rax)
    11b8:	c3                   	ret
    11b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011c0 <frame_dummy>:
    11c0:	f3 0f 1e fa          	endbr64
    11c4:	e9 77 ff ff ff       	jmp    1140 <register_tm_clones>
    11c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011d0 <fib__temp382v>:
    11d0:	f3 0f 1e fa          	endbr64
    11d4:	41 57                	push   %r15
    11d6:	b8 01 00 00 00       	mov    $0x1,%eax
    11db:	41 56                	push   %r14
    11dd:	55                   	push   %rbp
    11de:	53                   	push   %rbx
    11df:	48 83 ec 38          	sub    $0x38,%rsp
    11e3:	64 48 8b 14 25 28 00 	mov    %fs:0x28,%rdx
    11ea:	00 00 
    11ec:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
    11f1:	48 89 f2             	mov    %rsi,%rdx
    11f4:	48 83 ff 01          	cmp    $0x1,%rdi
    11f8:	7f 26                	jg     1220 <fib__temp382v+0x50>
    11fa:	48 89 02             	mov    %rax,(%rdx)
    11fd:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    1202:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    1209:	00 00 
    120b:	0f 85 4f 01 00 00    	jne    1360 <fib__temp382v+0x190>
    1211:	48 83 c4 38          	add    $0x38,%rsp
    1215:	5b                   	pop    %rbx
    1216:	5d                   	pop    %rbp
    1217:	41 5e                	pop    %r14
    1219:	41 5f                	pop    %r15
    121b:	c3                   	ret
    121c:	0f 1f 40 00          	nopl   0x0(%rax)
    1220:	48 89 f8             	mov    %rdi,%rax
    1223:	48 83 ff 02          	cmp    $0x2,%rdi
    1227:	74 d1                	je     11fa <fib__temp382v+0x2a>
    1229:	48 83 ff 03          	cmp    $0x3,%rdi
    122d:	74 cb                	je     11fa <fib__temp382v+0x2a>
    122f:	48 8d 4f fd          	lea    -0x3(%rdi),%rcx
    1233:	48 89 7c 24 08       	mov    %rdi,0x8(%rsp)
    1238:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    123d:	48 89 cf             	mov    %rcx,%rdi
    1240:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
    1245:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    124a:	e8 81 ff ff ff       	call   11d0 <fib__temp382v>
    124f:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    1254:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
    1259:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    125e:	4c 8d 78 fc          	lea    -0x4(%rax),%r15
    1262:	4c 89 04 24          	mov    %r8,(%rsp)
    1266:	4c 89 ff             	mov    %r15,%rdi
    1269:	e8 62 ff ff ff       	call   11d0 <fib__temp382v>
    126e:	48 8b 4c 24 10       	mov    0x10(%rsp),%rcx
    1273:	4c 8b 34 24          	mov    (%rsp),%r14
    1277:	4c 03 74 24 20       	add    0x20(%rsp),%r14
    127c:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    1281:	48 83 f9 01          	cmp    $0x1,%rcx
    1285:	0f 84 da 00 00 00    	je     1365 <fib__temp382v+0x195>
    128b:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    1290:	4c 89 ff             	mov    %r15,%rdi
    1293:	48 89 54 24 10       	mov    %rdx,0x10(%rsp)
    1298:	e8 33 ff ff ff       	call   11d0 <fib__temp382v>
    129d:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    12a2:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    12a7:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    12ac:	48 8d 68 fb          	lea    -0x5(%rax),%rbp
    12b0:	48 89 0c 24          	mov    %rcx,(%rsp)
    12b4:	48 89 ef             	mov    %rbp,%rdi
    12b7:	e8 14 ff ff ff       	call   11d0 <fib__temp382v>
    12bc:	48 8b 0c 24          	mov    (%rsp),%rcx
    12c0:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    12c5:	4c 89 ff             	mov    %r15,%rdi
    12c8:	48 03 4c 24 20       	add    0x20(%rsp),%rcx
    12cd:	49 01 ce             	add    %rcx,%r14
    12d0:	e8 fb fe ff ff       	call   11d0 <fib__temp382v>
    12d5:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
    12da:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    12df:	48 89 ef             	mov    %rbp,%rdi
    12e2:	4c 89 04 24          	mov    %r8,(%rsp)
    12e6:	e8 e5 fe ff ff       	call   11d0 <fib__temp382v>
    12eb:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    12f0:	4c 8b 04 24          	mov    (%rsp),%r8
    12f4:	b9 01 00 00 00       	mov    $0x1,%ecx
    12f9:	4c 03 44 24 20       	add    0x20(%rsp),%r8
    12fe:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
    1303:	48 83 f8 05          	cmp    $0x5,%rax
    1307:	74 4b                	je     1354 <fib__temp382v+0x184>
    1309:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    130e:	48 89 ef             	mov    %rbp,%rdi
    1311:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
    1316:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
    131b:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
    1320:	e8 ab fe ff ff       	call   11d0 <fib__temp382v>
    1325:	48 8b 44 24 10       	mov    0x10(%rsp),%rax
    132a:	48 8b 4c 24 20       	mov    0x20(%rsp),%rcx
    132f:	48 8d 74 24 20       	lea    0x20(%rsp),%rsi
    1334:	48 8d 78 fa          	lea    -0x6(%rax),%rdi
    1338:	48 89 0c 24          	mov    %rcx,(%rsp)
    133c:	e8 8f fe ff ff       	call   11d0 <fib__temp382v>
    1341:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    1346:	4c 8b 44 24 08       	mov    0x8(%rsp),%r8
    134b:	48 8b 0c 24          	mov    (%rsp),%rcx
    134f:	48 03 4c 24 20       	add    0x20(%rsp),%rcx
    1354:	4c 01 c1             	add    %r8,%rcx
    1357:	49 8d 04 0e          	lea    (%r14,%rcx,1),%rax
    135b:	e9 9a fe ff ff       	jmp    11fa <fib__temp382v+0x2a>
    1360:	e8 fb fc ff ff       	call   1060 <__stack_chk_fail@plt>
    1365:	49 83 c6 01          	add    $0x1,%r14
    1369:	41 b8 01 00 00 00    	mov    $0x1,%r8d
    136f:	eb e3                	jmp    1354 <fib__temp382v+0x184>

Disassembly of section .fini:

0000000000001374 <_fini>:
    1374:	f3 0f 1e fa          	endbr64
    1378:	48 83 ec 08          	sub    $0x8,%rsp
    137c:	48 83 c4 08          	add    $0x8,%rsp
    1380:	c3                   	ret
