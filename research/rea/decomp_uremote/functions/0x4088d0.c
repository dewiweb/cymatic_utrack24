// rea decompile_all
// name: FUN_004088d0
// address: 0x4088d0
// body: available
// range: 0x4088d0-0x408adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004088d0(byte *param_1)

{
  byte *in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  int local_18;
  byte *local_14;
  int local_8;
  
  local_8 = 0;
  *(int *)(unaff_EDI + 0x194) = unaff_EDI + 0x10;
  *(byte **)(unaff_EDI + 4) = in_EAX;
  *(byte **)(unaff_EDI + 8) = param_1;
  *(byte **)(unaff_EDI + 0xc) = in_EAX;
  local_14 = in_EAX;
  while( true ) {
    if (param_1 <= local_14) {
      return local_8;
    }
    uVar3 = (uint)*local_14;
    if ((uVar3 < 0x1b) || (uVar3 == 0x1f)) break;
    if (0x17f < (int)((int)*(undefined4 **)(unaff_EDI + 0x194) + (-0x10 - unaff_EDI) & 0xfffffffcU))
    {
      return 6;
    }
    **(undefined4 **)(unaff_EDI + 0x194) = local_14;
    *(int *)(unaff_EDI + 0x194) = *(int *)(unaff_EDI + 0x194) + 4;
    if (uVar3 == 0x1e) {
      do {
        local_14 = local_14 + 1;
        if (param_1 <= local_14) {
          return local_8;
        }
      } while (((*local_14 & 0xf0) != 0xf0) && ((*local_14 & 0xf) != 0xf));
    }
    else if (uVar3 == 0x1c) {
      local_14 = local_14 + 2;
    }
    else if (uVar3 == 0x1d) {
      local_14 = local_14 + 4;
    }
    else if (0xf6 < uVar3) {
      local_14 = local_14 + 1;
    }
LAB_00408ac0:
    local_14 = local_14 + 1;
  }
  uVar2 = (int)*(undefined4 **)(unaff_EDI + 0x194) + (-0x10 - unaff_EDI) >> 2;
  **(undefined4 **)(unaff_EDI + 0x194) = local_14;
  if (uVar3 == 0xc) {
    local_14 = local_14 + 1;
    if (param_1 <= local_14) {
      return 6;
    }
    uVar3 = *local_14 | 0x100;
  }
  piVar4 = (int *)&DAT_008fa600;
LAB_004089bc:
  if (piVar4[1] != (uVar3 | *(uint *)(unaff_EDI + 0x198))) goto code_r0x004089c1;
  iVar1 = *piVar4;
  piVar5 = (int *)(piVar4[2] + *(int *)(unaff_EDI + 0x19c));
  if ((iVar1 != 6) && (uVar2 == 0)) {
    return 6;
  }
  if (iVar1 == 1) {
LAB_00408a93:
    iVar1 = FUN_0040861e();
LAB_00408a9b:
    if ((char)piVar4[3] == '\x01') {
      *(char *)piVar5 = (char)iVar1;
    }
    else if ((char)piVar4[3] == '\x02') {
      *(short *)piVar5 = (short)iVar1;
    }
    else {
      *piVar5 = iVar1;
    }
  }
  else {
    if (iVar1 == 2) {
      iVar1 = FUN_00408642();
      goto LAB_00408a9b;
    }
    if (iVar1 == 3) {
      iVar1 = FUN_00408667();
      goto LAB_00408a9b;
    }
    if (iVar1 < 4) {
LAB_00408a6b:
      local_8 = (*(code *)piVar4[4])();
      if (local_8 != 0) {
        return local_8;
      }
    }
    else {
      if (iVar1 < 6) goto LAB_00408a93;
      if (iVar1 != 6) goto LAB_00408a6b;
      if ((uint)piVar4[5] < uVar2) {
        uVar2 = piVar4[5];
      }
      local_18 = 0;
      *(char *)(piVar4[6] + *(int *)(unaff_EDI + 0x19c)) = (char)uVar2;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        iVar1 = FUN_0040861e();
        local_18 = local_18 + iVar1;
        if ((char)piVar4[3] == '\x01') {
          *(char *)piVar5 = (char)local_18;
        }
        else if ((char)piVar4[3] == '\x02') {
          *(short *)piVar5 = (short)local_18;
        }
        else {
          *piVar5 = local_18;
        }
        piVar5 = (int *)((int)piVar5 + (uint)*(byte *)(piVar4 + 3));
      }
    }
  }
  goto LAB_00408ab1;
code_r0x004089c1:
  piVar4 = piVar4 + 7;
  if (*piVar4 == 0) {
LAB_00408ab1:
    *(int *)(unaff_EDI + 0x194) = unaff_EDI + 0x10;
    goto LAB_00408ac0;
  }
  goto LAB_004089bc;
}

