// rea decompile_all
// name: FUN_0018133c
// address: 0x18133c
// body: available
// range: 0x18133c-0x18142b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018133c(int *param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  (**(code **)(*param_2 + 0x6c))(auStack_38);
  FUN_001becf4(auStack_28,auStack_38);
  iVar8 = param_1[6];
  if (param_1[6] == 0) {
    return;
  }
  do {
    iVar3 = FUN_00172574(auStack_28,iVar8);
    bVar9 = iVar3 < 0;
    bVar10 = iVar3 == 0;
    if (0 < iVar3) {
      iVar3 = 1;
    }
    if (bVar9) {
      iVar3 = 0;
    }
    if (bVar10) {
      if (iVar8 == 0) {
        return;
      }
      uVar2 = *(ushort *)(iVar8 + 0xc);
      uVar4 = *(uint *)(iVar8 + 0x10);
      *(short *)(iVar8 + 0xc) = (short)param_2[0x1d];
      uVar7 = param_2[0x1c];
      bVar9 = uVar4 <= uVar2;
      *(uint *)(iVar8 + 0x10) = uVar7;
      if (bVar9) {
        uVar4 = (uint)*(ushort *)(iVar8 + 0xc);
      }
      if (bVar9 && uVar4 <= uVar7) {
        FUN_00185918(*param_1 + 0x58c);
        *(undefined4 *)(iVar8 + 0x14) = 0;
        return;
      }
      uVar5 = FUN_001d06b8();
      *(undefined4 *)(iVar8 + 0x14) = uVar5;
      return;
    }
    iVar6 = *(int *)(iVar8 + iVar3 * 4 + 0x18);
    if (iVar6 == 0) {
      return;
    }
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar8 + 0x20);
    }
    iVar8 = iVar6;
  } while (iVar3 == 0 || (bVar1 & 0x80) == 0);
  return;
}

