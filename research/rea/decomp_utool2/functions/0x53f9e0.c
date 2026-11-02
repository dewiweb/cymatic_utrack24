// rea decompile_all
// name: FUN_0053f9e0
// address: 0x53f9e0
// body: available
// range: 0x53f9e0-0x53fb96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f9e0(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  BOOL BVar7;
  int in_ECX;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  int local_60;
  int local_5c;
  undefined4 *local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  int local_3c;
  undefined1 local_38 [28];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e572;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  local_48 = 0x1000;
  local_14 = uVar2;
  FUN_0053b670(&local_60,param_1);
  lVar1 = CONCAT44(local_3c,0x1000);
  uVar10 = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    bVar11 = *(int *)(in_ECX + 0x5c) != 0;
    lVar1 = CONCAT44(local_3c,0x1000);
    do {
      local_3c = (int)((ulonglong)lVar1 >> 0x20);
      if (bVar11) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x54) + uVar10 * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((local_60 <= *(int *)(iVar3 + 8)) && (*(int *)(iVar3 + 8) < local_5c)) {
        piVar4 = (int *)FUN_0053f050(&local_54);
        local_8 = 0;
        local_44 = CONCAT44(*piVar4,(undefined4)local_44);
        if (*(int *)(*piVar4 + 0x24) == 0) {
          local_44 = 0;
          lVar12 = 0;
          local_48 = (int)lVar1;
        }
        else {
          puVar5 = (undefined4 *)FUN_00458890(uVar2);
          BVar7 = GetFileAttributesExW((LPCWSTR)*puVar5,GetFileExInfoStandard,local_38);
          uVar8 = local_18;
          iVar3 = local_1c;
          if (BVar7 == 0) {
            local_50 = 0;
            local_50._4_4_ = 0;
            local_50._0_4_ = 0;
            uVar8 = (uint)local_50;
            iVar3 = local_50._4_4_;
          }
          lVar12 = __alldiv(uVar8,iVar3,*(int *)(local_44._4_4_ + 0x24),
                            *(int *)(local_44._4_4_ + 0x24) >> 0x1f);
        }
        lVar1 = lVar12 + CONCAT44(local_3c,local_48);
        uVar9 = (undefined4)lVar1;
        local_8 = 0xffffffff;
        local_3c = (int)((ulonglong)lVar1 >> 0x20);
        local_48 = uVar9;
        if (local_54 != (undefined4 *)0x0) {
          LOCK();
          piVar4 = local_54 + 1;
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*local_54)(1);
            lVar1 = CONCAT44(local_3c,uVar9);
          }
        }
      }
      uVar10 = uVar10 + 1;
      bVar11 = uVar10 < *(uint *)(in_ECX + 0x5c);
    } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x5c));
  }
  local_3c = (int)((ulonglong)lVar1 >> 0x20);
  iVar3 = local_3c;
  if ((param_1 < 2) && (**(char **)(in_ECX + 100) != '\0')) {
    puVar5 = (undefined4 *)FUN_00458890(uVar2);
    DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
    iVar3 = local_3c;
    if ((DVar6 & 0x10) == 0) {
      puVar5 = (undefined4 *)FUN_00458890(uVar2);
      BVar7 = GetFileAttributesExW((LPCWSTR)*puVar5,GetFileExInfoStandard,local_38);
      if (BVar7 == 0) {
        local_50 = 0;
        iVar3 = local_3c;
      }
      else {
        iVar3 = local_3c + local_1c + (uint)CARRY4(local_18,(uint)lVar1);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,iVar3);
  return;
}

