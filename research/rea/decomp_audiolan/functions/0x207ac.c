// rea decompile_all
// name: FUN_000207ac
// address: 0x207ac
// body: available
// range: 0x207ac-0x2090d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000207ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_c8 [88];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_001a0e4c(auStack_c8);
  uVar1 = FUN_000034d0(param_7);
  FUN_001a15e0(auStack_c8,param_7,uVar1);
  FUN_001a15e0(auStack_c8,&DAT_00020910,1);
  uVar1 = FUN_000034d0(param_8);
  FUN_001a15e0(auStack_c8,param_8,uVar1);
  if (param_5 == 0) {
LAB_00020800:
    FUN_001a0dc4(auStack_48,auStack_c8);
    FUN_0001f170(auStack_48,auStack_70);
    FUN_001a0e4c(auStack_c8);
    FUN_001a15e0(auStack_c8,local_24,0x20);
    FUN_001a15e0(auStack_c8,&DAT_00020910,1);
    uVar1 = FUN_000034d0(local_20);
    FUN_001a15e0(auStack_c8,local_20,uVar1);
    FUN_001a15e0(auStack_c8,&DAT_00020910,1);
  }
  else {
    iVar2 = FUN_001a6f04(param_5,s_auth_int_00020914);
    if (iVar2 == 0) {
      FUN_001a15e0(auStack_c8,&DAT_00020910,1);
      FUN_001a15e0(auStack_c8,param_9,0x20);
    }
    else {
      iVar2 = FUN_001a6f04(param_5,&DAT_00020920);
      if (iVar2 != 0) goto LAB_00020800;
    }
    FUN_001a0dc4(auStack_48,auStack_c8);
    FUN_0001f170(auStack_48,auStack_70);
    FUN_001a0e4c(auStack_c8);
    FUN_001a15e0(auStack_c8,local_24,0x20);
    FUN_001a15e0(auStack_c8,&DAT_00020910,1);
    uVar1 = FUN_000034d0(local_20);
    FUN_001a15e0(auStack_c8,local_20,uVar1);
    FUN_001a15e0(auStack_c8,&DAT_00020910,1);
    if (param_6 == 0) {
      uVar1 = FUN_000034d0(local_1c);
      FUN_001a15e0(auStack_c8,local_1c,uVar1);
      FUN_001a15e0(auStack_c8,&DAT_00020910,1);
      uVar1 = FUN_000034d0(local_18);
      FUN_001a15e0(auStack_c8,local_18,uVar1);
      FUN_001a15e0(auStack_c8,&DAT_00020910,1);
      uVar1 = FUN_000034d0(param_5);
      FUN_001a15e0(auStack_c8,param_5,uVar1);
      FUN_001a15e0(auStack_c8,&DAT_00020910,1);
    }
  }
  FUN_001a15e0(auStack_c8,auStack_70,0x20);
  FUN_001a0dc4(auStack_38,auStack_c8);
  FUN_0001f170(auStack_38,param_10);
  return;
}

