// rea decompile_all
// name: FUN_005f4970
// address: 0x5f4970
// body: available
// range: 0x5f4970-0x5f5065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f4970(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_ECX;
  uint uVar9;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  byte abStack_1d [17];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_3c;
  local_34 = 0;
  local_2c = 0;
  abStack_1d[1] = *(undefined1 *)(in_ECX[1] + 0xdf0);
  abStack_1d[2] = *(byte *)(in_ECX[1] + 0xdf1);
  uVar9 = abStack_1d[2] >> 1 & 1;
  iVar7 = 2;
  do {
    iVar6 = FUN_005feec0(8);
    if (iVar6 == 0) goto LAB_005f5052;
    if (local_38 == 0xff) {
      *(undefined1 *)(in_ECX[1] + 0xdf2) = 0xff;
      *(undefined4 *)(in_ECX[1] + 0xdb8) = 1;
      goto switchD_005f4a6d_caseD_f;
    }
    abStack_1d[iVar7 + 1] = (byte)local_38;
    local_30 = iVar7 + 1;
    uVar1 = iVar7 - 1;
    iVar7 = local_30;
  } while (uVar1 < 2);
  bVar5 = abStack_1d[3] >> 4;
  local_3c = uVar9;
  switch((uint)bVar5) {
  case 0:
    local_3c = 1;
    break;
  case 1:
    *(undefined4 *)(in_ECX[1] + 0x468) = 0xc0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    cVar3 = -2;
    iVar7 = 0x240;
    goto LAB_005f4a52;
  case 6:
  case 7:
    local_34 = (uint)bVar5;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    cVar3 = -8;
    iVar7 = 0x100;
LAB_005f4a52:
    *(int *)(in_ECX[1] + 0x468) = iVar7 << (bVar5 + cVar3 & 0x1f);
  }
  switch(abStack_1d[3] & 0xf) {
  case 0:
    iVar7 = in_ECX[1];
    if (*(int *)(iVar7 + 0xf0) == 0) {
      local_3c = 1;
    }
    else {
      *(undefined4 *)(iVar7 + 0x46c) = *(undefined4 *)(iVar7 + 0x118);
    }
    break;
  case 1:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 0x15888;
    break;
  case 2:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 0x2b110;
    break;
  case 3:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 0x2ee00;
    break;
  case 4:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 8000;
    break;
  case 5:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 16000;
    break;
  case 6:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 0x5622;
    break;
  case 7:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 24000;
    break;
  case 8:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 32000;
    break;
  case 9:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 0xac44;
    break;
  case 10:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 48000;
    break;
  case 0xb:
    *(undefined4 *)(in_ECX[1] + 0x46c) = 96000;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    local_2c = abStack_1d[3] & 0xf;
    break;
  case 0xf:
switchD_005f4a6d_caseD_f:
    iVar7 = in_ECX[1];
    goto LAB_005f501c;
  }
  bVar5 = abStack_1d[4] >> 4;
  if ((bVar5 & 8) == 0) {
    *(uint *)(in_ECX[1] + 0x470) = bVar5 + 1;
    *(undefined4 *)(in_ECX[1] + 0x474) = 0;
  }
  else {
    uVar9 = bVar5 & 7;
    *(undefined4 *)(in_ECX[1] + 0x470) = 2;
    if ((bVar5 & 7) == 0) {
      *(undefined4 *)(in_ECX[1] + 0x474) = 1;
    }
    else if (uVar9 == 1) {
      *(undefined4 *)(in_ECX[1] + 0x474) = 2;
    }
    else if (uVar9 == 2) {
      *(undefined4 *)(in_ECX[1] + 0x474) = 3;
    }
    else {
      local_3c = 1;
    }
  }
  local_38 = abStack_1d[4] >> 1 & 7;
  switch(local_38) {
  case 0:
    iVar7 = in_ECX[1];
    if (*(int *)(iVar7 + 0xf0) == 0) goto switchD_005f4bd4_caseD_3;
    *(undefined4 *)(iVar7 + 0x478) = *(undefined4 *)(iVar7 + 0x120);
    break;
  case 1:
    *(undefined4 *)(in_ECX[1] + 0x478) = 8;
    break;
  case 2:
    *(undefined4 *)(in_ECX[1] + 0x478) = 0xc;
    break;
  case 3:
  case 7:
switchD_005f4bd4_caseD_3:
    local_3c = 1;
    break;
  case 4:
    *(undefined4 *)(in_ECX[1] + 0x478) = 0x10;
    break;
  case 5:
    *(undefined4 *)(in_ECX[1] + 0x478) = 0x14;
    break;
  case 6:
    *(undefined4 *)(in_ECX[1] + 0x478) = 0x18;
  }
  if ((abStack_1d[4] & 1) != 0) {
    local_3c = 1;
  }
  if (((abStack_1d[2] & 1) == 0) &&
     ((iVar7 = in_ECX[1], *(int *)(iVar7 + 0xf0) == 0 ||
      (*(int *)(iVar7 + 0x108) == *(int *)(iVar7 + 0x10c))))) {
    iVar7 = FUN_005fe780(abStack_1d + 1,&local_30);
    if (iVar7 == 0) goto LAB_005f5052;
    if (local_38 == 0xffffffff) {
      *(byte *)(in_ECX[1] + 0xdf2) = abStack_1d[local_30];
      *(undefined4 *)(in_ECX[1] + 0xdb8) = 1;
      if (*(int *)(in_ECX[1] + 0xe1c) == 0) {
        (**(code **)(in_ECX[1] + 0x1c))();
      }
      *(undefined4 *)*in_ECX = 2;
      __security_check_cookie(local_c ^ (uint)&local_3c);
      return;
    }
    *(undefined4 *)(in_ECX[1] + 0x47c) = 0;
    *(uint *)(in_ECX[1] + 0x480) = local_38;
  }
  else {
    iVar7 = FUN_005fe5e0(abStack_1d + 1,&local_30);
    if (iVar7 == 0) goto LAB_005f5052;
    if ((local_28 & local_24) == 0xffffffff) {
      *(byte *)(in_ECX[1] + 0xdf2) = abStack_1d[local_30];
      *(undefined4 *)(in_ECX[1] + 0xdb8) = 1;
      if (*(int *)(in_ECX[1] + 0xe1c) == 0) {
        (**(code **)(in_ECX[1] + 0x1c))();
      }
      *(undefined4 *)*in_ECX = 2;
      __security_check_cookie(local_c ^ (uint)&local_3c);
      return;
    }
    *(undefined4 *)(in_ECX[1] + 0x47c) = 1;
    iVar7 = in_ECX[1];
    *(uint *)(iVar7 + 0x480) = local_28;
    *(uint *)(iVar7 + 0x484) = local_24;
  }
  iVar7 = local_30;
  if (local_34 != 0) {
    iVar7 = FUN_005feec0(8);
    iVar6 = local_30;
    uVar9 = local_38;
    if (iVar7 == 0) goto LAB_005f5052;
    abStack_1d[local_30 + 1] = (byte)local_38;
    iVar7 = local_30 + 1;
    if (local_34 == 7) {
      iVar7 = FUN_005feec0(8);
      if (iVar7 == 0) goto LAB_005f5052;
      abStack_1d[iVar6 + 2] = (byte)local_34;
      iVar7 = iVar6 + 2;
      local_38 = uVar9 << 8 | local_34;
    }
    *(uint *)(in_ECX[1] + 0x468) = local_38 + 1;
  }
  iVar6 = iVar7;
  if (local_2c != 0) {
    iVar6 = FUN_005feec0(8);
    uVar9 = local_38;
    if (iVar6 == 0) goto LAB_005f5052;
    iVar8 = in_ECX[1];
    abStack_1d[iVar7 + 1] = (byte)local_38;
    iVar6 = iVar7 + 1;
    if (local_2c == 0xc) {
      iVar7 = local_38 * 1000;
    }
    else {
      iVar6 = FUN_005feec0(8);
      if (iVar6 == 0) goto LAB_005f5052;
      abStack_1d[iVar7 + 2] = (byte)local_34;
      local_38 = uVar9 << 8 | local_34;
      iVar8 = in_ECX[1];
      iVar6 = iVar7 + 2;
      if (local_2c == 0xd) {
        *(uint *)(iVar8 + 0x46c) = local_38;
        goto LAB_005f4eab;
      }
      iVar7 = local_38 * 10;
    }
    *(int *)(iVar8 + 0x46c) = iVar7;
  }
LAB_005f4eab:
  iVar7 = FUN_005feec0(8);
  if (iVar7 == 0) {
LAB_005f5052:
    __security_check_cookie(local_c ^ (uint)&local_3c);
    return;
  }
  uVar9 = 0;
  bVar5 = 0;
  pbVar4 = abStack_1d;
  for (; pbVar4 = pbVar4 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    bVar5 = (&DAT_00bfd7f0)[uVar9 ^ *pbVar4];
    uVar9 = (uint)bVar5;
  }
  iVar7 = in_ECX[1];
  if (bVar5 != (byte)local_38) {
LAB_005f501c:
    if (*(int *)(iVar7 + 0xe1c) == 0) {
      (**(code **)(iVar7 + 0x1c))();
    }
    *(undefined4 *)*in_ECX = 2;
    goto LAB_005f503b;
  }
  *(undefined4 *)(iVar7 + 0xe4) = 0;
  iVar7 = in_ECX[1];
  if (*(int *)(iVar7 + 0x47c) == 0) {
    uVar9 = *(uint *)(iVar7 + 0x480);
    *(undefined4 *)(iVar7 + 0x47c) = 1;
    iVar7 = in_ECX[1];
    if (*(uint *)(iVar7 + 0xe0) == 0) {
      if (*(int *)(iVar7 + 0xf0) == 0) {
        if (uVar9 != 0) {
          lVar2 = (ulonglong)uVar9 * (ulonglong)*(uint *)(iVar7 + 0x468);
          goto LAB_005f4f8d;
        }
        *(undefined4 *)(iVar7 + 0x480) = 0;
        *(undefined4 *)(iVar7 + 0x484) = 0;
        *(undefined4 *)(in_ECX[1] + 0xe4) = *(undefined4 *)(in_ECX[1] + 0x468);
      }
      else {
        if (*(uint *)(iVar7 + 0x108) != *(uint *)(iVar7 + 0x10c)) goto LAB_005f4fa4;
        *(ulonglong *)(iVar7 + 0x480) = (ulonglong)uVar9 * (ulonglong)*(uint *)(iVar7 + 0x108);
        *(undefined4 *)(in_ECX[1] + 0xe4) = *(undefined4 *)(in_ECX[1] + 0x10c);
      }
    }
    else {
      lVar2 = (ulonglong)uVar9 * (ulonglong)*(uint *)(iVar7 + 0xe0);
LAB_005f4f8d:
      *(longlong *)(iVar7 + 0x480) = lVar2;
    }
  }
  if (local_3c != 0) {
LAB_005f4fa4:
    iVar7 = in_ECX[1];
    if (*(int *)(iVar7 + 0xe1c) == 0) {
      (**(code **)(iVar7 + 0x1c))();
      *(undefined4 *)*in_ECX = 2;
      __security_check_cookie(local_c ^ (uint)&local_3c);
      return;
    }
    *(int *)(iVar7 + 0x17f0) = *(int *)(iVar7 + 0x17f0) + 1;
    *(undefined4 *)*in_ECX = 2;
    __security_check_cookie(local_c ^ (uint)&local_3c);
    return;
  }
LAB_005f503b:
  __security_check_cookie(local_c ^ (uint)&local_3c);
  return;
}

