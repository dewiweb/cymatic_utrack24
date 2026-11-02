// rea decompile_all
// name: FUN_00115080
// address: 0x115080
// body: available
// range: 0x115080-0x11533f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00115080(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_00115340;
  *param_1 = DAT_00115340;
  param_1[0x12] = iVar1 + 0x7c;
  param_1[0x13] = iVar1 + 0xa4;
  param_1[0x14] = iVar1 + 0xbc;
  FUN_00069b9c(param_1[0x36],param_1 + 0x14);
  iVar1 = FUN_001a8808(param_1);
  if (iVar1 != 0) {
    for (uVar3 = 1; (int)uVar3 < 3; uVar3 = uVar3 + 1) {
      for (iVar4 = 0; iVar4 < 0xc; iVar4 = iVar4 + 1) {
        if (param_1[iVar4 + 0x37] != 0) {
          FUN_00086914(iVar1,param_1[iVar4 + 0x37],uVar3 & 0xff);
        }
      }
      FUN_00086914(iVar1,param_1[0x43],uVar3 & 0xff);
      FUN_00086914(iVar1,param_1[0x44],uVar3 & 0xff);
    }
  }
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    if ((param_1[iVar1 + 0x37] != 0) && (param_1[iVar1 + 0x37] != 0)) {
      (**(code **)(*(int *)param_1[iVar1 + 0x37] + 4))(param_1[iVar1 + 0x37]);
    }
    if ((param_1[iVar1 + 0x45] != 0) && (param_1[iVar1 + 0x45] != 0)) {
      (**(code **)(*(int *)param_1[iVar1 + 0x45] + 4))(param_1[iVar1 + 0x45]);
    }
  }
  if ((param_1[0x43] != 0) && (param_1[0x43] != 0)) {
    (**(code **)(*(int *)param_1[0x43] + 4))();
  }
  if ((param_1[0x44] != 0) && (param_1[0x44] != 0)) {
    (**(code **)(*(int *)param_1[0x44] + 4))();
  }
  if ((param_1[0x51] != 0) && (param_1[0x51] != 0)) {
    (**(code **)(*(int *)param_1[0x51] + 4))();
  }
  if ((param_1[0x52] != 0) && (param_1[0x52] != 0)) {
    (**(code **)(*(int *)param_1[0x52] + 4))();
  }
  if ((param_1[0x5f] != 0) && (param_1[0x5f] != 0)) {
    (**(code **)(*(int *)param_1[0x5f] + 4))();
  }
  if ((param_1[0x5e] != 0) && (param_1[0x5e] != 0)) {
    (**(code **)(*(int *)param_1[0x5e] + 4))();
  }
  if ((param_1[0x60] != 0) && (param_1[0x60] != 0)) {
    (**(code **)(*(int *)param_1[0x60] + 4))();
  }
  iVar1 = FUN_0013a130(param_1 + 0x58);
  iVar1 = FUN_00129be8(iVar1 + -0x14);
  iVar1 = FUN_0012f304(iVar1 + -0xb4);
  iVar1 = FUN_00146830(iVar1 + -0x2c);
  iVar1 = FUN_000d051c(iVar1 + -0xc);
  iVar1 = FUN_000d0500(iVar1 + -0xc);
  iVar1 = FUN_0013ed74(iVar1 + -8);
  uVar2 = FUN_00079550(iVar1 + -0x4c);
  return uVar2;
}

