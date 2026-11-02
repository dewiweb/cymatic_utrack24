// rea decompile_all
// name: FUN_001c61f8
// address: 0x1c61f8
// body: available
// range: 0x1c61f8-0x1c62d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_001c61f8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [72];
  int *piStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar2 = *(int *)(*param_1 + -0x1b4) + (int)param_1;
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_00180064(iVar2);
  if ((param_2 & 0x2000) == 0) {
    uVar3 = 0x14;
  }
  else {
    FUN_001512cc(&local_90);
    FUN_0014d7a4(&local_90,*(undefined4 *)(**(int **)(iVar2 + 0x7c) + 0x188),iVar2 + 0x40,param_2,
                 local_2c,param_4,param_5,param_6,param_7,param_8);
    iVar1 = FUN_001a2410(**(int **)(iVar2 + 0x7c) + 0x4a0,&local_90,1);
    uVar3 = iVar1 == 0;
    FUN_0015111c(&local_90);
    FUN_0014ca10(auStack_7c);
    FUN_0014ca10(auStack_84);
    local_8c = 0;
    local_90 = 0;
    local_88 = 0;
  }
  FUN_00180054(iVar2);
  return uVar3;
}

