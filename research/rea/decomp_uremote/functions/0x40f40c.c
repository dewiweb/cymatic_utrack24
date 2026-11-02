// rea decompile_all
// name: FUN_0040f40c
// address: 0x40f40c
// body: available
// range: 0x40f40c-0x40f5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f40c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  uint uVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    _memset((undefined2 *)(iVar1 + 0xc),0,0x1c);
    *(undefined4 *)(iVar1 + 0x10) = 0x10000;
    *(undefined4 *)(iVar1 + 0x14) = 0x10000;
    return;
  }
  iVar2 = *unaff_EBX;
  uVar5 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (iVar2 == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x44);
    local_8 = uVar5;
LAB_0040f4a8:
    if ((int)local_8 < 0) {
      local_8 = -local_8;
    }
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
  }
  else {
    if (iVar2 == 1) {
      uVar5 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
      local_8 = uVar5;
      goto LAB_0040f4a8;
    }
    if (iVar2 == 2) {
      uVar5 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
      local_8 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34);
      goto LAB_0040f4a8;
    }
    if (iVar2 == 3) {
      uVar5 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
      local_8 = (int)*(short *)(param_1 + 0x4c);
      goto LAB_0040f4a8;
    }
    if (iVar2 == 4) {
      *(int *)(iVar1 + 0x10) = unaff_EBX[1];
      iVar2 = unaff_EBX[2];
      *(int *)(iVar1 + 0x14) = iVar2;
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(int *)(iVar1 + 0x10) = iVar2;
      }
      else if (iVar2 == 0) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x10);
      }
      goto LAB_0040f565;
    }
  }
  if (unaff_EBX[3] == 0) {
    local_10 = unaff_EBX[1];
  }
  else {
    local_10 = (unaff_EBX[3] * unaff_EBX[1] + 0x24) / 0x48;
  }
  local_c = unaff_EBX[2];
  if (unaff_EBX[4] != 0) {
    local_c = (local_c * unaff_EBX[4] + 0x24) / 0x48;
  }
  if (unaff_EBX[1] == 0) {
    uVar4 = FUN_0040d2d8();
    *(undefined4 *)(iVar1 + 0x14) = uVar4;
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    local_10 = FUN_0040d230(local_8);
  }
  else {
    iVar2 = FUN_0040d2d8();
    *(int *)(iVar1 + 0x10) = iVar2;
    if (unaff_EBX[2] == 0) {
      *(int *)(iVar1 + 0x14) = iVar2;
      local_c = FUN_0040d230(uVar5);
    }
    else {
      iVar3 = FUN_0040d2d8();
      *(int *)(iVar1 + 0x14) = iVar3;
      if (*unaff_EBX == 3) {
        if (iVar2 < iVar3) {
          *(int *)(iVar1 + 0x14) = iVar2;
        }
        else {
          *(int *)(iVar1 + 0x10) = iVar3;
        }
      }
    }
  }
LAB_0040f565:
  if (*unaff_EBX != 0) {
    local_10 = thunk_FUN_00401000(*(undefined2 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x10));
    local_c = thunk_FUN_00401000(*(undefined2 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x14));
  }
  *(undefined2 *)(iVar1 + 0xc) = (short)(local_10 + 0x20 >> 6);
  *(short *)(iVar1 + 0xe) = (short)(local_c + 0x20 >> 6);
  FUN_0040f334();
  return;
}

