// rea decompile_all
// name: FUN_0017baa8
// address: 0x17baa8
// body: available
// range: 0x17baa8-0x17bd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17bcd8 to 0x1181c FUN_0001181c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17bd38 to 0x1181c FUN_0001181c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017baa8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = thunk_EXT_FUN_0040001c();
  piVar4 = DAT_0017bd48;
  piVar3 = DAT_0017bd44;
  piVar2 = DAT_0017bd40;
  piVar1 = DAT_0017bd3c;
  *DAT_0017bd3c = *DAT_0017bd3c + -1;
  iVar9 = DAT_0017bd54;
  puVar6 = DAT_0017bd50;
  puVar5 = DAT_0017bd4c;
  if (*(int *)(param_1 + 0x44) == 0) {
    thunk_EXT_FUN_00400034(uVar8);
    if (*piVar2 == *piVar4) {
      return;
    }
    if (*piVar3 != 0) {
      return;
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x44) = 0;
    puVar7 = DAT_0017bd58;
    if (*(int *)(param_1 + 0x20) == param_1) {
      *(undefined4 *)(iVar9 + iVar11 * 4) = 0;
      uVar12 = *(uint *)(param_1 + 0x4c);
      *puVar7 = *puVar7 & ~uVar12;
      if (*puVar6 != 0) {
        *puVar6 = *puVar6 & ~uVar12;
      }
      iVar11 = DAT_0017bd5c;
      uVar12 = *puVar7;
      if ((uVar12 & 0xff) == 0) {
        uVar10 = uVar12 >> 8 & 0xff;
        if (uVar10 == 0) {
          uVar10 = uVar12 >> 0x10 & 0xff;
          if (uVar10 == 0) {
            if (uVar12 >> 0x18 == 0) {
              *puVar5 = 0x20;
              *piVar4 = 0;
              thunk_EXT_FUN_00400034(uVar8);
              FUN_0001181c();
              return;
            }
            uVar12 = *(byte *)(DAT_0017bd5c + (uVar12 >> 0x18)) + 0x18;
          }
          else {
            uVar12 = *(byte *)(DAT_0017bd5c + uVar10) + 0x10;
          }
        }
        else {
          uVar12 = *(byte *)(DAT_0017bd5c + uVar10) + 8;
        }
      }
      else {
        uVar12 = (uint)*(byte *)(DAT_0017bd5c + (uVar12 & 0xff));
      }
      *puVar5 = uVar12;
      if ((param_1 == *piVar4) && (*piVar4 = *(int *)(iVar9 + *puVar5 * 4), *puVar6 != 0)) {
        *piVar1 = *piVar1 + 1;
        thunk_EXT_FUN_00400034(uVar8);
        uVar8 = thunk_EXT_FUN_0040001c();
        *piVar1 = *piVar1 + -1;
        uVar12 = *puVar6;
        if ((uVar12 & 0xff) == 0) {
          uVar10 = uVar12 >> 8 & 0xff;
          if (uVar10 == 0) {
            uVar10 = uVar12 >> 0x10 & 0xff;
            if (uVar10 == 0) {
              uVar12 = *(byte *)(iVar11 + (uVar12 >> 0x18)) + 0x18;
            }
            else {
              uVar12 = *(byte *)(iVar11 + uVar10) + 0x10;
            }
          }
          else {
            uVar12 = *(byte *)(iVar11 + uVar10) + 8;
          }
        }
        else {
          uVar12 = (uint)*(byte *)(iVar11 + (uVar12 & 0xff));
        }
        iVar9 = *(int *)(iVar9 + uVar12 * 4);
        if (*(uint *)(iVar9 + 0x48) <= *puVar5) {
          *piVar4 = iVar9;
          *puVar6 = *puVar6 & ~*(uint *)(*piVar4 + 0x4c);
        }
      }
      thunk_EXT_FUN_00400034(uVar8);
      if (*piVar2 == *piVar4) {
        return;
      }
      if (*piVar3 != 0) {
        return;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(iVar9 + iVar11 * 4) == param_1) {
        *(undefined4 *)(iVar9 + iVar11 * 4) = *(undefined4 *)(param_1 + 0x20);
        if (*puVar6 != 0) {
          *puVar6 = *puVar6 & ~*(uint *)(param_1 + 0x4c);
        }
        if (param_1 == *piVar4) {
          *piVar4 = *(int *)(iVar9 + *puVar5 * 4);
        }
      }
      thunk_EXT_FUN_00400034(uVar8);
      if (*piVar2 == *piVar4) {
        return;
      }
      if (*piVar3 != 0) {
        return;
      }
    }
  }
  FUN_0001181c();
  return;
}

