// rea decompile_all
// name: FUN_0017b780
// address: 0x17b780
// body: available
// range: 0x17b780-0x17b8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017b780(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar4 = thunk_EXT_FUN_0040001c();
  piVar1 = DAT_0017b8e8;
  *DAT_0017b8e4 = *DAT_0017b8e4 + -1;
  iVar7 = DAT_0017b8ec;
  iVar5 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x44) == 0) {
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x40) == 0) {
        uVar6 = *(uint *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        iVar5 = *(int *)(iVar7 + uVar6 * 4);
        if (iVar5 == 0) {
          *(int *)(iVar7 + uVar6 * 4) = param_1;
          *(int *)(param_1 + 0x20) = param_1;
          puVar2 = DAT_0017b8f0;
          *(int *)(param_1 + 0x24) = param_1;
          puVar3 = DAT_0017b8f4;
          *puVar2 = *(uint *)(param_1 + 0x4c) | *puVar2;
          if (*piVar1 == 0) {
            *piVar1 = param_1;
            *puVar3 = uVar6;
          }
          else if ((uVar6 < *puVar3) && (*puVar3 = uVar6, uVar6 < *(uint *)(*piVar1 + 0x48))) {
            if (*(int *)(*piVar1 + 0x48) != *(int *)(*piVar1 + 0x38)) {
              *DAT_0017b8f8 = *(uint *)(*piVar1 + 0x4c) | *DAT_0017b8f8;
            }
            *piVar1 = param_1;
          }
        }
        else {
          iVar7 = *(int *)(iVar5 + 0x24);
          *(int *)(iVar7 + 0x20) = param_1;
          *(int *)(iVar5 + 0x24) = param_1;
          *(int *)(param_1 + 0x20) = iVar5;
          *(int *)(param_1 + 0x24) = iVar7;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 3;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
  else if (iVar5 != 1 && iVar5 != 2) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  thunk_EXT_FUN_00400034(uVar4);
  if ((*DAT_0017b8fc != *piVar1) && (*DAT_0017b900 == 0)) {
    uVar8 = 1;
  }
  return uVar8;
}

