// rea decompile_all
// name: FUN_004313a0
// address: 0x4313a0
// body: available
// range: 0x4313a0-0x4316ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004313a0(int param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  local_40 = 0;
  iVar6 = 0;
  puVar3 = *(undefined4 **)(in_ECX + 0x70c);
  iVar5 = 2;
  if (*(int *)(in_ECX + 0x4c) < 2) {
    iVar5 = *(int *)(in_ECX + 0x4c);
  }
  *(undefined4 *)(in_ECX + 0x72c) = 0;
  *(undefined4 *)(in_ECX + 0x730) = 0;
  if (0 < iVar5) {
    do {
      puVar3[1] = iVar6;
      *puVar3 = 1;
      iVar4 = iVar4 + 1;
      puVar3[3] = 0;
      iVar6 = iVar6 + 1;
      puVar3[2] = 0;
      puVar3 = puVar3 + 4;
      iVar5 = 2;
      if (*(int *)(in_ECX + 0x4c) < 2) {
        iVar5 = *(int *)(in_ECX + 0x4c);
      }
      local_40 = iVar4;
    } while (iVar6 < iVar5);
  }
  iVar5 = local_40;
  iVar6 = 0;
  iVar4 = 2;
  if (*(int *)(in_ECX + 0x50) < 2) {
    iVar4 = *(int *)(in_ECX + 0x50);
  }
  if (0 < iVar4) {
    puVar3 = puVar3 + 3;
    do {
      puVar3[-2] = iVar6;
      puVar3[-3] = 0;
      *puVar3 = 0;
      local_40 = local_40 + 1;
      puVar3[-1] = 0;
      iVar6 = iVar6 + 1;
      iVar4 = 2;
      if (*(int *)(in_ECX + 0x50) < 2) {
        iVar4 = *(int *)(in_ECX + 0x50);
      }
      puVar3 = puVar3 + 4;
    } while (iVar6 < iVar4);
  }
  puVar3 = (undefined4 *)(in_ECX + 0x28);
  if (DAT_00c8a600 == in_ECX) {
    *puVar3 = FUN_00433620;
    *(code **)(in_ECX + 0x30) = FUN_004335f0;
    *(code **)(in_ECX + 0x34) = FUN_00433680;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_004335d0;
  }
  else if (DAT_00c8a604 == in_ECX) {
    *puVar3 = FUN_00433860;
    *(code **)(in_ECX + 0x30) = FUN_00433830;
    *(code **)(in_ECX + 0x34) = FUN_004338c0;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_00433810;
  }
  else if (DAT_00c8a608 == in_ECX) {
    *puVar3 = FUN_004339f0;
    *(code **)(in_ECX + 0x30) = FUN_004339c0;
    *(code **)(in_ECX + 0x34) = FUN_00433a50;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_004339a0;
  }
  else if (DAT_00c8a60c == in_ECX) {
    *puVar3 = FUN_00433b50;
    *(code **)(in_ECX + 0x30) = FUN_00433b20;
    *(code **)(in_ECX + 0x34) = FUN_00433bb0;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_00433b00;
  }
  else if (DAT_00c8a610 == in_ECX) {
    *puVar3 = FUN_00433c60;
    *(code **)(in_ECX + 0x30) = FUN_00433c30;
    *(code **)(in_ECX + 0x34) = FUN_00433cc0;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_00433c10;
  }
  else if (DAT_00c8a614 == in_ECX) {
    *puVar3 = FUN_00433dc0;
    *(code **)(in_ECX + 0x30) = FUN_00433d90;
    *(code **)(in_ECX + 0x34) = FUN_00433e20;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_00433d70;
  }
  else if (DAT_00c8a618 == in_ECX) {
    *puVar3 = FUN_00433ed0;
    *(code **)(in_ECX + 0x30) = FUN_00433ea0;
    *(code **)(in_ECX + 0x34) = FUN_00433f30;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_00433e80;
  }
  else {
    FUN_00433d20();
  }
  if (0 < param_1) {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x4c))
              (*(undefined4 *)(in_ECX + 0x70c),local_40,param_1,puVar3);
  }
  local_44 = 0;
  local_48 = 0;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x24))(&local_44,&local_48);
  if ((*(int *)(in_ECX + 0x4c) != local_44) || (*(int *)(in_ECX + 0x50) != local_48)) {
    *(int *)(in_ECX + 0x4c) = local_44;
    *(int *)(in_ECX + 0x50) = local_48;
  }
  FUN_0042f570();
  FUN_004309d0();
  local_40 = 0;
  if (0 < *(int *)(in_ECX + 0x50)) {
    iVar4 = 0;
    iVar5 = iVar5 << 4;
    do {
      _memset(local_3c + 1,0,0x30);
      local_3c[0] = local_40;
      local_3c[1] = 0;
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x48))(local_3c);
      puVar2 = (undefined8 *)FUN_0042e630(local_2c);
      iVar6 = *(int *)(in_ECX + 0x71c);
      *(undefined8 *)(iVar6 + iVar4) = *puVar2;
      *(undefined4 *)(iVar6 + 8 + iVar4) = *(undefined4 *)(puVar2 + 1);
      if (local_40 < 2) {
        pvVar1 = *(void **)(iVar5 + 8 + *(int *)(in_ECX + 0x70c));
        if (pvVar1 != (void *)0x0) {
          _memset(pvVar1,0,*(int *)(iVar4 + 4 + *(int *)(in_ECX + 0x71c)) * *(int *)(in_ECX + 0x94))
          ;
        }
        pvVar1 = *(void **)(iVar5 + 0xc + *(int *)(in_ECX + 0x70c));
        if (pvVar1 != (void *)0x0) {
          _memset(pvVar1,0,*(int *)(iVar4 + 4 + *(int *)(in_ECX + 0x71c)) * *(int *)(in_ECX + 0x94))
          ;
        }
      }
      iVar5 = iVar5 + 0x10;
      local_40 = local_40 + 1;
      iVar4 = iVar4 + 0xc;
    } while (local_40 < *(int *)(in_ECX + 0x50));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

