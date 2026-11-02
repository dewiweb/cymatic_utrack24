// rea decompile_all
// name: FUN_00126c20
// address: 0x126c20
// body: available
// range: 0x126c20-0x126ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00126c20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_18 [8];
  
  FUN_001179e0();
  FUN_0010e728(auStack_18,param_3);
  iVar1 = FUN_0015e6b4(auStack_18);
  if (iVar1 != 0) {
    iVar1 = FUN_00132100(param_1 + 0xb4,param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_0016d7a4(0x28,DAT_00126cd0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_00126cd4;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        puVar2[2] = *param_2;
        puVar2[3] = uVar3;
        puVar2[4] = uVar4;
        puVar2[5] = uVar5;
        iVar1 = FUN_0010e770(puVar2 + 6,auStack_18);
        FUN_00132264(param_1 + 0xb4,iVar1 + -0x18);
      }
    }
    else {
      FUN_0010e498(iVar1 + 0x18,auStack_18);
    }
  }
  FUN_001179d0(param_1);
  FUN_0010e7f4(auStack_18);
  return;
}

