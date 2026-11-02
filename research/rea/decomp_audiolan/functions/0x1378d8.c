// rea decompile_all
// name: FUN_001378d8
// address: 0x1378d8
// body: available
// range: 0x1378d8-0x137a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001378d8(ushort *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_a4 [112];
  ushort *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  puStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  iVar1 = FUN_0016d7a4(0xf0,DAT_00137a94);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00137ea0(iVar1,param_3,0), piVar2 != (int *)0x0)) {
    iVar1 = piVar2[0x1c];
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0xc) + -1;
      *(int *)(iVar1 + 0xc) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(piVar2[0x1c] + 4) = 0;
      }
    }
    piVar2[0x1c] = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 4) = piVar2[0x19];
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      *(int *)(param_2 + 8) = piVar2[0x1a];
    }
    uVar3 = FUN_000f5730(auStack_a4,*param_1 | 0x8000,param_1 + 2,DAT_00137a9c,
                         *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x1e),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x22),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x26),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x2a),param_1[0x2c],param_1[0x2d],
                         *(undefined4 *)(param_3 + 0x188),DAT_00137a98);
    FUN_000f58d4(piVar2 + 0x1e,uVar3);
    FUN_000f589c(auStack_a4);
    iVar1 = FUN_000fb7e0(piVar2,0,DAT_00137a9c,param_3 + 0x484,local_28,500,10,
                         *(int *)(*piVar2 + -0xc) + (int)piVar2);
    if (iVar1 != 0) {
      return piVar2;
    }
    FUN_000fbae8(piVar2,0);
  }
  return (int *)0x0;
}

