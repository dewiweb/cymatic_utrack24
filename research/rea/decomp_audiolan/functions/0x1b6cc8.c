// rea decompile_all
// name: FUN_001b6cc8
// address: 0x1b6cc8
// body: available
// range: 0x1b6cc8-0x1b6d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b6cc8(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x70);
  if ((iVar6 != 0) || (iVar6 = *(int *)(param_1 + 0x6c), iVar6 != 0)) {
    if (((*(byte *)(*(int *)(iVar6 + 0xc) + 0xd) & 1) == 0) || (*(short *)(iVar6 + 8) != 0)) {
      bVar1 = false;
      uVar5 = 1;
    }
    else {
      bVar1 = true;
      uVar5 = 0;
    }
    iVar3 = FUN_001b3228(param_1,0,uVar5,*(undefined4 *)(*(int *)(iVar6 + 0xc) + 4));
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 4);
      if (bVar1) {
        iVar6 = (*(ushort *)(iVar4 + 0xc) & DAT_001b6d90) + 0x1100;
        *(char *)(iVar4 + 0xc) = (char)iVar6;
        *(char *)(iVar4 + 0xd) = (char)((uint)iVar6 >> 8);
      }
      else {
        FUN_001a9ee8(*(int *)(iVar6 + 4),iVar4 + 0x14,1,
                     *(short *)(*(int *)(iVar6 + 4) + 8) - *(short *)(iVar6 + 8));
      }
      uVar2 = FUN_0018d614(iVar3,param_1,param_1 + 4,6,*(undefined2 *)(iVar3 + 8));
      *(char *)(iVar4 + 0x10) = (char)uVar2;
      *(char *)(iVar4 + 0x11) = (char)((ushort)uVar2 >> 8);
      FUN_0018defc(iVar3,param_1,param_1 + 4,*(undefined1 *)(param_1 + 10),0,6);
      FUN_001aa008(iVar3);
    }
  }
  return;
}

