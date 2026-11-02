// rea decompile_all
// name: FUN_0016b0d8
// address: 0x16b0d8
// body: available
// range: 0x16b0d8-0x16b197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16b178 to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016b0d8(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*param_1 + -0xb0) + (int)param_1;
  FUN_001179e0(iVar6);
  piVar4 = (int *)(iVar6 + 0x104);
  if (param_2 == 0) {
    *(undefined2 *)(iVar6 + 0x108) = 0;
    if (*piVar4 != 0) {
      FUN_0016d744();
    }
    *piVar4 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar6 + 0x108);
    bVar1 = false;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        iVar7 = *piVar4;
        if (*(int *)(iVar7 + uVar2 * 4) == param_2) {
          bVar1 = true;
LAB_0016b134:
          if (uVar2 < *(ushort *)(iVar6 + 0x108) - 1) {
            uVar5 = *(undefined4 *)(iVar7 + uVar2 * 4 + 4);
          }
          else {
            uVar5 = 0;
          }
          *(undefined4 *)(iVar7 + uVar2 * 4) = uVar5;
        }
        else if (bVar1) goto LAB_0016b134;
        uVar3 = uVar3 - 1;
        uVar2 = uVar2 + 1;
      } while (uVar3 != 0);
      if (bVar1) {
        *(short *)(iVar6 + 0x108) = *(short *)(iVar6 + 0x108) + -1;
      }
    }
  }
  FUN_001179d0(iVar6);
  return;
}

