// rea decompile_all
// name: FUN_000e83b4
// address: 0xe83b4
// body: available
// range: 0xe83b4-0xe852b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e83b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0010fe70(param_1,param_2,param_3,param_4);
  iVar1 = FUN_00085e90(iVar1 + 0x14);
  iVar1 = FUN_00143204(iVar1 + 0x84);
  iVar1 = FUN_0012a234(iVar1 + 4);
  piVar2 = (int *)FUN_000d7b00(iVar1 + 4);
  iVar1 = DAT_000e852c;
  piVar2[-0x28] = DAT_000e852c;
  piVar2[-4] = iVar1 + 0x168;
  piVar2[-0x23] = iVar1 + 0x134;
  piVar2[-2] = iVar1 + 0x174;
  piVar2[-1] = iVar1 + 0x194;
  *piVar2 = iVar1 + 0x25c;
  piVar2[1] = param_5;
  piVar2[2] = 0;
  *(undefined1 *)((int)piVar2 + 0xd) = 0;
  *(undefined1 *)((int)piVar2 + 0xe) = 0xff;
  *(undefined1 *)((int)piVar2 + 0xf) = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  *(undefined1 *)((int)piVar2 + 0x1e) = 0;
  *(undefined1 *)((int)piVar2 + 0x1f) = 0;
  *(undefined1 *)(piVar2 + 8) = 1;
  piVar2[9] = 0;
  piVar2[10] = 0;
  *(undefined1 *)(piVar2 + 0xb) = 0;
  piVar2[0xc] = 0;
  iVar1 = FUN_00129574(piVar2 + 0xe);
  uVar3 = FUN_000f4e84();
  FUN_000f4e44(uVar3,iVar1 + -0x40);
  FUN_001432a8(iVar1 + -0x38);
  FUN_00178f04();
  iVar4 = FUN_001bf388();
  if (iVar4 != 0) {
    FUN_000f4e84();
    uVar3 = FUN_000f4fb4();
    iVar4 = FUN_0006d818(uVar3);
    if (iVar4 == 1) {
      FUN_0003bd34(0xb4);
      FUN_0003bd78(0xbe);
    }
    else if (iVar4 == 2) {
      FUN_0003bd34(0xdc);
      FUN_0003bd78(0xe6);
    }
  }
  *DAT_000e8530 = iVar1 + -0xd8;
  return iVar1 + -0xd8;
}

