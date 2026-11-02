// rea decompile_all
// name: FUN_0018d5ac
// address: 0x18d5ac
// body: available
// range: 0x18d5ac-0x18d74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0018d5ac(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 auStack_74 [60];
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined1 auStack_28 [8];
  
  local_8c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_84 = 0;
  local_7e = 0;
  local_7c = 0;
  local_76 = 0;
  iVar1 = FUN_001727f0(auStack_74);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  FUN_00171e90(auStack_28);
  FUN_00171828(auStack_28,&DAT_0018d750);
  FUN_00171bc8(auStack_28,*param_1 + 0x180);
  FUN_00171b00(auStack_28,&DAT_0018d754);
  FUN_00171b00(auStack_28,param_5);
  FUN_0017277c(&local_38,param_2);
  iVar1 = FUN_001beecc(&local_38);
  if (iVar1 != 0) {
    FUN_0017f6d4(&local_a0,*param_1 + 0x1e0);
    local_38 = (undefined2)local_a0;
    FUN_0017f6d4(&local_a0,*param_1 + 0x1e0);
    local_36 = (undefined2)(local_a0 >> 0x10);
    FUN_0017f6d4(&local_a0,*param_1 + 0x1e0);
    local_34 = local_9c;
    FUN_0017f6d4(&local_a0,*param_1 + 0x1e0);
  }
  local_98 = FUN_001beccc(auStack_28);
  local_a0 = param_3 & 0xffff;
  local_94 = param_6;
  local_9c = param_4;
  FUN_0014d948(&local_90,*(undefined4 *)(*param_1 + 0x188),&local_38,(char)param_1[1]);
  uVar2 = FUN_001a2410(*param_1 + 0x4a0,&local_90,1);
  FUN_00171ea4(auStack_28);
  FUN_0015111c(&local_90);
  FUN_0014ca10(&local_7c);
  FUN_0014ca10(&local_84);
  return uVar2;
}

