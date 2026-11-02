// rea decompile_all
// name: FUN_0053ab70
// address: 0x53ab70
// body: available
// range: 0x53ab70-0x53ae35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053ab70(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined4 *local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  uint local_60;
  int iStack_5c;
  int local_54;
  uint local_50;
  int iStack_4c;
  uint local_44;
  int local_3c;
  undefined1 local_38 [28];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dee2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = operator_new(0x1020);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00539ef0();
  local_8 = 0xffffffff;
  puVar6 = *(undefined4 **)(in_ECX + 0x10);
  if ((puVar6 != puVar3) && (*(undefined4 **)(in_ECX + 0x10) = puVar3, puVar6 != (undefined4 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  local_54 = 0;
  iStack_5c = 0;
  local_60 = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0xc) + 0x5c)) {
    local_3c = 0;
    local_44 = 0;
    do {
      cVar1 = FUN_0053e410();
      if (cVar1 != '\0') {
        FUN_0053f050();
        piVar4 = (int *)FUN_00410ea0();
        piVar9 = *(int **)(in_ECX + 0x18);
        piVar8 = piVar9 + *(int *)(in_ECX + 0x20);
        for (; piVar9 != piVar8; piVar9 = piVar9 + 1) {
          if ((*piVar4 == *piVar9) || (iVar5 = FUN_0045c1e0(*piVar4), iVar5 == 0)) {
            bVar10 = true;
            goto LAB_0053ac7f;
          }
        }
        bVar10 = false;
LAB_0053ac7f:
        piVar8 = (int *)(local_64 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if (local_68 != (undefined4 *)0x0) {
          LOCK();
          piVar8 = local_68 + 1;
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*local_68)();
          }
        }
        local_60 = local_44;
        if (!bVar10) {
          FUN_0053f050();
          puVar6 = (undefined4 *)FUN_00410ea0();
          if (*(int *)(in_ECX + 0x1c) < *(int *)(in_ECX + 0x20) + 1) {
            FUN_00409cf0();
          }
          iVar5 = *(int *)(in_ECX + 0x20);
          *(int *)(in_ECX + 0x20) = iVar5 + 1;
          puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x18) + iVar5 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar6;
            *puVar6 = &DAT_00bfe12c;
          }
          piVar8 = (int *)(local_6c + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          if (local_70 != (undefined4 *)0x0) {
            LOCK();
            piVar8 = local_70 + 1;
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)*local_70)();
            }
          }
          FUN_0053f050();
          local_8 = 1;
          puVar6 = (undefined4 *)FUN_00458890();
          BVar7 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_38);
          local_50 = local_18;
          iStack_4c = local_1c;
          if (BVar7 == 0) {
            iStack_4c = 0;
            local_50 = 0;
          }
          bVar10 = CARRY4(local_44,local_50);
          local_44 = local_44 + local_50;
          local_8 = 0xffffffff;
          local_3c = local_3c + iStack_4c + (uint)bVar10;
          local_60 = local_44;
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar8 = puVar2 + 1;
            iVar5 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)*puVar2)();
            }
          }
        }
      }
      local_54 = local_54 + 1;
      iStack_5c = local_3c;
    } while (local_54 < *(int *)(*(int *)(in_ECX + 0xc) + 0x5c));
  }
  FUN_004edf00(local_60,iStack_5c,local_60);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

