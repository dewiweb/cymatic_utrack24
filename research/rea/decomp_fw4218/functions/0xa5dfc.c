// rea decompile_all
// name: FUN_000a5dfc
// address: 0xa5dfc
// body: available
// range: 0xa5dfc-0xa6457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a5dfc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [48];
  undefined1 auStack_28 [4];
  
  *(undefined4 *)(param_1 + 300) = param_2;
  local_5c = FUN_0009175c();
  FUN_00142c6c();
  iVar2 = FUN_001bc69c();
  FUN_00142c6c();
  uVar3 = FUN_001bc690();
  FUN_000f4e84();
  local_60 = FUN_000f5150();
  FUN_000f4e84();
  local_64 = FUN_000f5144();
  FUN_000f4e84();
  uVar4 = FUN_000f4fc0();
  FUN_001b550c(auStack_68,uVar4);
  uVar5 = FUN_00142c6c();
  FUN_001bc670(auStack_6c,uVar5);
  if (iVar2 == 0) {
    iVar2 = FUN_001b52ec(local_5c);
    uVar5 = FUN_00142c6c();
    FUN_0013a6c8(uVar5,iVar2,uVar3);
  }
  uVar5 = FUN_0022d49c(auStack_68);
  uVar6 = FUN_0022d49c(auStack_6c);
  local_78 = FUN_0009182c(local_5c);
  local_7c = uVar5;
  FUN_000a6464(param_1,local_78,iVar2,uVar3,uVar6);
  FUN_00145e14(param_1 + 0x574,*(undefined4 *)(param_1 + 0x130));
  FUN_00171e90(auStack_74);
  uVar3 = FUN_001b595c(uVar4);
  FUN_00171d10(auStack_74,uVar3);
  piVar8 = (int *)((int)*(int **)(param_1 + 0x134) + *(int *)(**(int **)(param_1 + 0x134) + -0x1ec))
  ;
  uVar3 = FUN_001beccc(auStack_74);
  (**(code **)(*piVar8 + 0xfc))(piVar8,DAT_000a6458,uVar3);
  uVar3 = FUN_000f4e84();
  FUN_000f4e44(uVar3,param_1 + 0x114);
  FUN_000f7688(param_2,DAT_000a645c);
  uVar3 = FUN_000f6910(param_2);
  FUN_000699c8(uVar3,param_1 + 0x118);
  uVar3 = FUN_001b557c(uVar4);
  FUN_000aa7b4(param_1,uVar3);
  uVar3 = FUN_001b59d4(uVar4);
  FUN_000aa640(param_1,uVar3);
  uVar3 = FUN_001b6f18(local_60);
  FUN_000aaab8(param_1,uVar3);
  uVar1 = FUN_001b6f24(local_60);
  FUN_000aa6fc(param_1,uVar1);
  uVar1 = FUN_001b6f74(local_60);
  FUN_000aa788(param_1,uVar1);
  uVar3 = FUN_001b6f0c(local_60);
  FUN_000ab064(param_1,uVar3);
  uVar3 = FUN_001b6eac(local_64);
  FUN_000aa3f8(param_1,uVar3);
  uVar3 = FUN_001b6ee8(local_64);
  FUN_000ab11c(param_1,uVar3);
  uVar3 = FUN_001b6eb8(local_64);
  FUN_000aa66c(param_1,uVar3);
  uVar3 = FUN_001b5540(uVar4);
  FUN_000aa43c(param_1,uVar3);
  local_78 = FUN_001b5980(uVar4);
  FUN_000aa468(param_1,local_78);
  local_78 = FUN_001b5500(uVar4);
  FUN_000aa728(param_1,local_78);
  uVar3 = FUN_001b6ec4(local_64);
  FUN_000aaa7c(param_1,uVar3);
  uVar3 = FUN_001b6edc(local_64);
  FUN_000aa51c(param_1,uVar3);
  uVar3 = FUN_001b6ed0(local_64);
  FUN_000aa4c8(param_1,uVar3);
  uVar3 = FUN_001b6ef4(local_64);
  FUN_000acb70(param_1,uVar3);
  uVar3 = FUN_001b6f00(local_64);
  FUN_000ad704(param_1,uVar3);
  uVar3 = FUN_001b5498(uVar4);
  FUN_000ab8bc(param_1,uVar3);
  uVar3 = FUN_001b53b8(uVar4);
  FUN_000ab0c4(param_1,uVar3);
  uVar3 = FUN_001b5470(uVar4);
  FUN_000ab864(param_1,uVar3);
  FUN_000ad5e4(param_1);
  FUN_000ad674(param_1);
  FUN_000ac0fc(param_1);
  FUN_001b590c(auStack_28,uVar4);
  FUN_000aad5c(param_1,auStack_28);
  FUN_00232190(auStack_28);
  FUN_001b5678(auStack_28,uVar4);
  FUN_000aaa20(param_1,auStack_28);
  FUN_00232190(auStack_28);
  FUN_001b5a08(auStack_58,uVar4);
  FUN_000ab65c(param_1,auStack_58);
  FUN_000639f4(auStack_58);
  uVar3 = FUN_001b5a54(uVar4);
  FUN_000ab994(param_1,uVar3);
  uVar3 = FUN_001b59a4(uVar4);
  FUN_000aaf5c(param_1,uVar3);
  FUN_001b56ac(uVar4,&local_78,&local_7c);
  FUN_000ab180(param_1,local_78);
  FUN_000aadb8(param_1,local_7c);
  uVar3 = FUN_001b5660(uVar4);
  FUN_000aa7e0(param_1,uVar3);
  uVar3 = FUN_001b54f4(uVar4);
  FUN_000aa6d0(param_1,uVar3);
  uVar3 = FUN_001b5974(uVar4);
  FUN_000aaebc(param_1,uVar3);
  uVar3 = FUN_001b59fc(uVar4);
  FUN_000aad30(param_1,uVar3);
  FUN_001b5a6c(auStack_28,uVar4);
  FUN_000aaae8(param_1,auStack_28);
  FUN_00232190(auStack_28);
  uVar3 = FUN_001b5aa0(uVar4);
  FUN_000aab44(param_1,uVar3);
  uVar3 = FUN_001b5b38(uVar4);
  FUN_000acb40(param_1,uVar3);
  uVar3 = FUN_001b5b44(uVar4);
  FUN_000ab090(param_1,uVar3);
  uVar3 = FUN_001b5b78(uVar4);
  FUN_000ab288(param_1,uVar3);
  uVar3 = FUN_001b5b0c(uVar4);
  FUN_000ad9b8(param_1,uVar3);
  FUN_000ad8e0(param_1,uVar4);
  for (uVar7 = 0; (int)uVar7 < 0x18; uVar7 = uVar7 + 1) {
    FUN_001282fc(&local_7c,DAT_000a6460,0);
    uVar3 = FUN_000f6910(param_2);
    FUN_00069ed4(uVar3,uVar7 & 0xff,&local_7c);
    FUN_000b001c(param_1,uVar7,local_78._1_1_);
    uVar3 = FUN_000f6910(param_2);
    uVar3 = FUN_0006a588(uVar3,uVar7 & 0xff);
    FUN_000b0070(param_1,uVar7,uVar3);
    FUN_000aff68(param_1,uVar7,(int)(char)local_78);
    FUN_000affbc(param_1,uVar7,local_7c);
  }
  (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
  uVar3 = FUN_001b59e0(uVar4);
  FUN_000ac0cc(param_1,uVar3);
  uVar3 = FUN_001b5bb8(uVar4);
  FUN_000ada04(param_1,uVar3);
  uVar3 = FUN_001b5bc4(uVar4);
  FUN_000ada58(param_1,uVar3);
  (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
  FUN_00171ea4(auStack_74);
  FUN_002329f0(auStack_6c);
  FUN_002329f0(auStack_68);
  return;
}

