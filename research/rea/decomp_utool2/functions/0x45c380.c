// rea decompile_all
// name: FUN_0045c380
// address: 0x45c380
// body: available
// range: 0x45c380-0x45c86e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c380(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_60 [4];
  byte *local_5c;
  char local_57;
  undefined1 local_56;
  byte local_55;
  int local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  int local_44;
  int local_40 [2];
  double local_38 [5];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_60;
  local_40[0] = -1;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  dVar6 = 0.0;
  local_48 = (byte *)0x0;
  local_44 = 0;
  local_56 = 0;
  local_57 = '\0';
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_40[1] = 0xffffffff;
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  FUN_0045c2c0(*in_ECX);
  pbVar5 = local_5c;
  *in_ECX = (int)local_5c;
  iVar2 = FUN_00426f70();
  if (iVar2 == 0x2b) {
LAB_0045c40c:
    bVar1 = *pbVar5;
    *in_ECX = (int)(pbVar5 + 1);
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          *in_ECX = *in_ECX + 1;
          uVar3 = uVar3 >> 1;
        } while ((uVar3 & (int)(char)bVar1) != 0);
      }
    }
    iVar2 = FUN_00426f70();
  }
  else if (iVar2 == 0x2d) {
    local_56 = 1;
    goto LAB_0045c40c;
  }
  switch(iVar2) {
  case 0x49:
  case 0x69:
    pbVar5 = (byte *)*in_ECX;
    local_5c = pbVar5;
    FUN_0044ebd0(1);
    iVar2 = FUN_00426f70();
    if (iVar2 != 0x6e) {
      local_5c = pbVar5;
      FUN_0044ebd0(1);
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x4e) break;
    }
    local_5c = pbVar5;
    FUN_0044ebd0(2);
    iVar2 = FUN_00426f70();
    if (iVar2 == 0x66) {
LAB_0045c55e:
      __security_check_cookie(local_c ^ (uint)auStack_60);
      return;
    }
    local_5c = pbVar5;
    FUN_0044ebd0(2);
    iVar2 = FUN_00426f70();
    if (iVar2 == 0x46) goto LAB_0045c55e;
    break;
  case 0x4e:
  case 0x6e:
    pbVar5 = (byte *)*in_ECX;
    local_5c = pbVar5;
    FUN_0044ebd0(1);
    iVar2 = FUN_00426f70();
    if (iVar2 != 0x61) {
      local_5c = pbVar5;
      FUN_0044ebd0(1);
      iVar2 = FUN_00426f70();
      if (iVar2 != 0x41) break;
    }
    local_5c = pbVar5;
    FUN_0044ebd0(2);
    iVar2 = FUN_00426f70();
    if (iVar2 == 0x6e) {
LAB_0045c4cf:
      __security_check_cookie(local_c ^ (uint)auStack_60);
      return;
    }
    local_5c = pbVar5;
    FUN_0044ebd0(2);
    iVar2 = FUN_00426f70();
    if (iVar2 == 0x4e) goto LAB_0045c4cf;
  }
  dVar8 = 1.0;
  iVar2 = 0;
  dVar10 = 429496728.0;
  dVar9 = 10.0;
  do {
    while (local_55 = *(byte *)*in_ECX, (byte)(local_55 - 0x30) < 10) {
      local_5c = local_48;
      iVar4 = FUN_00443260();
      local_48 = (byte *)(iVar4 + -0x30);
      local_57 = '\x01';
      if (iVar2 != 0) {
        local_50 = local_50 + 1;
      }
      if ((local_44 != 0) || (local_48 != (byte *)0x0)) {
        local_44 = local_44 + 1;
        if (local_44 < 0x12) {
          dVar7 = local_38[iVar2];
          if (dVar10 < dVar7) {
            FUN_00622510();
            local_40[iVar2] = 0;
            local_38[iVar2 + 2] = dVar6 + dVar7;
            local_38[iVar2] = 0.0;
          }
          dVar7 = local_38[iVar2];
          local_40[iVar2] = local_40[iVar2] + 1;
          dVar6 = (double)(int)local_48;
          local_38[iVar2] = dVar7 * dVar9 + dVar6;
        }
        else {
          if ((5 < (int)local_48) || ((local_48 == &DAT_00000005 && (((uint)local_5c & 1) != 0)))) {
            dVar6 = local_38[iVar2] + dVar8;
            local_38[iVar2] = dVar6;
          }
          if (iVar2 == 0) goto LAB_0045c60a;
          local_50 = local_50 + -1;
          while( true ) {
            bVar1 = *(byte *)*in_ECX;
            if (9 < (byte)(bVar1 - 0x30)) break;
            pbVar5 = (byte *)*in_ECX + 1;
            *in_ECX = (int)pbVar5;
            if ((char)bVar1 < '\0') {
              uVar3 = 0x40;
              if ((bVar1 & 0x40) != 0) {
                do {
                  if (uVar3 < 9) break;
                  pbVar5 = pbVar5 + 1;
                  uVar3 = uVar3 >> 1;
                  *in_ECX = (int)pbVar5;
                } while ((uVar3 & (int)(char)bVar1) != 0);
              }
            }
            if (iVar2 == 0) {
LAB_0045c60a:
              local_54 = local_54 + 1;
            }
          }
        }
      }
    }
    if ((iVar2 != 0) || (iVar4 = FUN_00426f70(), iVar4 != 0x2e)) goto LAB_0045c720;
    iVar2 = *in_ECX + 1;
    *in_ECX = iVar2;
    if ((char)local_55 < '\0') {
      uVar3 = 0x40;
      if ((local_55 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          iVar2 = iVar2 + 1;
          uVar3 = uVar3 >> 1;
          *in_ECX = iVar2;
        } while ((uVar3 & (int)(char)local_55) != 0);
      }
    }
    iVar2 = 1;
  } while (local_44 < 0x12);
LAB_0045c6f0:
  bVar1 = *(byte *)*in_ECX;
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar5 = (byte *)*in_ECX + 1;
    *in_ECX = (int)pbVar5;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          pbVar5 = pbVar5 + 1;
          uVar3 = uVar3 >> 1;
          *in_ECX = (int)pbVar5;
        } while ((uVar3 & (int)(char)bVar1) != 0);
      }
    }
    goto LAB_0045c6f0;
  }
LAB_0045c720:
  FUN_00622510();
  if (iVar2 != 0) {
    FUN_00622510();
  }
  iVar4 = FUN_00426f70();
  if (((iVar4 != 0x65) && (iVar4 != 0x45)) || (local_57 == '\0')) goto LAB_0045c821;
  local_57 = '\0';
  bVar1 = *(byte *)*in_ECX;
  pbVar5 = (byte *)*in_ECX + 1;
  *in_ECX = (int)pbVar5;
  if ((char)bVar1 < '\0') {
    uVar3 = 0x40;
    if ((bVar1 & 0x40) != 0) {
      do {
        if (uVar3 < 9) break;
        pbVar5 = pbVar5 + 1;
        uVar3 = uVar3 >> 1;
        *in_ECX = (int)pbVar5;
      } while ((uVar3 & (int)(char)bVar1) != 0);
    }
  }
  iVar4 = FUN_00426f70();
  if (iVar4 == 0x2b) {
LAB_0045c7c4:
    bVar1 = *(byte *)*in_ECX;
    pbVar5 = (byte *)*in_ECX + 1;
    *in_ECX = (int)pbVar5;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          pbVar5 = pbVar5 + 1;
          uVar3 = uVar3 >> 1;
          *in_ECX = (int)pbVar5;
        } while ((uVar3 & (int)(char)bVar1) != 0);
      }
    }
  }
  else if (iVar4 == 0x2d) {
    local_57 = '\x01';
    goto LAB_0045c7c4;
  }
  iVar4 = 0;
  while ((byte)(*(char *)*in_ECX - 0x30U) < 10) {
    iVar4 = FUN_00443260();
    iVar4 = iVar4 + (local_4c * 5 + -0x18) * 2;
    local_4c = iVar4;
  }
  if (local_57 != '\0') {
    local_4c = -iVar4;
  }
LAB_0045c821:
  FUN_00622510();
  if (iVar2 != 0) {
    FUN_00622510();
  }
  __security_check_cookie(local_c ^ (uint)auStack_60);
  return;
}

