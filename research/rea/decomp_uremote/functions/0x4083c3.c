// rea decompile_all
// name: FUN_004083c3
// address: 0x4083c3
// body: available
// range: 0x4083c3-0x40861d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004083c3(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  byte *in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  bVar2 = false;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_c = 0;
  iVar6 = 0;
  local_10 = 0;
  local_14 = 0;
  local_8 = 0;
  iVar4 = 4;
  while( true ) {
    while( true ) {
      if ((iVar4 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar3 = bVar1 & 0xf;
      if (uVar3 != 0xe) break;
      bVar2 = true;
    }
    if (9 < uVar3) break;
    if (iVar6 < 0xccccccc) {
      if (((bVar1 & 0xf) != 0) || (iVar6 != 0)) {
        local_14 = local_14 + 1;
        iVar6 = iVar6 * 10 + uVar3;
      }
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  if (uVar3 == 10) {
    while( true ) {
      if ((iVar4 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = *in_EAX >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar3 = bVar1 & 0xf;
      if (9 < uVar3) break;
      if (((bVar1 & 0xf) == 0) && (iVar6 == 0)) {
        local_10 = local_10 + -1;
      }
      else if ((iVar6 < 0xccccccc) && (local_8 < 9)) {
        local_8 = local_8 + 1;
        iVar6 = iVar6 * 10 + uVar3;
      }
    }
  }
  bVar7 = uVar3 == 0xc;
  if (bVar7) {
    uVar3 = 0xb;
  }
  if (uVar3 == 0xb) {
    do {
      if ((iVar4 != 0) && (in_EAX = in_EAX + 1, param_1 <= in_EAX)) {
        return 0;
      }
      bVar1 = (byte)iVar4;
      iVar4 = 4 - iVar4;
      uVar3 = *in_EAX >> (bVar1 & 0x1f) & 0xf;
      if (9 < uVar3) {
        if (bVar7) {
          iVar5 = -iVar5;
        }
        goto LAB_004084e1;
      }
      iVar5 = iVar5 * 10 + uVar3;
    } while (iVar5 < 0x3e9);
  }
  else {
LAB_004084e1:
    iVar5 = iVar5 + local_10 + param_2;
    if (param_3 == (int *)0x0) {
      local_8 = local_8 - iVar5;
      local_14 = local_14 + iVar5;
      iVar5 = local_14;
      if (local_14 < 0) {
        iVar5 = -local_14;
      }
      if (5 < iVar5) {
        return 0;
      }
      if (local_14 < 0) {
        iVar6 = iVar6 / *(int *)(&DAT_008fa5d8 + local_14 * -4);
        local_8 = local_8 + local_14;
      }
      if (local_8 == 10) {
        iVar6 = iVar6 / 10;
        local_8 = 9;
      }
      if (local_8 < 1) {
        if (0x7fff < *(int *)(&DAT_008fa5d8 + local_8 * -4) * iVar6) {
          return 0;
        }
        local_c = *(int *)(&DAT_008fa5d8 + local_8 * -4) * iVar6 * 0x10000;
      }
      else {
        if (0x7fff < iVar6 / *(int *)(&DAT_008fa5d8 + local_8 * 4)) {
          return 0;
        }
        local_c = FUN_0040d2d8();
      }
    }
    else {
      local_8 = local_8 + local_14;
      iVar5 = iVar5 + local_14;
      if (local_8 < 6) {
        if (iVar6 < 0x8000) {
          if (iVar5 < 1) {
            iVar5 = iVar5 - local_8;
          }
          else {
            iVar4 = 5;
            if (iVar5 < 5) {
              iVar4 = iVar5;
            }
            iVar5 = iVar5 - iVar4;
            iVar6 = iVar6 * *(int *)(&DAT_008fa5d8 + (iVar4 - local_8) * 4);
            if (0x7fff < iVar6) {
              iVar6 = iVar6 / 10;
              iVar5 = iVar5 + 1;
            }
          }
          local_c = iVar6 << 0x10;
        }
        else {
          local_c = FUN_0040d2d8();
          iVar5 = (iVar5 - local_8) + 1;
        }
      }
      else if (iVar6 / (int)(&PTR_LAB_008fa5c4)[local_8] < 0x8000) {
        local_c = FUN_0040d2d8();
        iVar5 = iVar5 + -5;
      }
      else {
        local_c = FUN_0040d2d8();
        iVar5 = iVar5 + -4;
      }
      *param_3 = iVar5;
    }
    if (bVar2) {
      local_c = -local_c;
    }
  }
  return local_c;
}

