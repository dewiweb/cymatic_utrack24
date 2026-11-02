// rea decompile_all
// name: FUN_0049f1c0
// address: 0x49f1c0
// body: available
// range: 0x49f1c0-0x49f3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f1c0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_60 [16];
  int local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int local_40 [2];
  int local_38;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070300e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = *(int **)(*(int *)(in_ECX + 0x74) + 0xb8);
  if (local_1c != (int *)0x0) {
    local_14 = CONCAT31(local_14._1_3_,*(char *)(in_ECX + 0x88));
    if (*(code **)(*local_1c + 8) == FUN_0052c2a0) {
      if (*(char *)(in_ECX + 0x88) != '\0') {
        FUN_00684a80(DAT_00c7eba8);
      }
    }
    else {
      (**(code **)(*local_1c + 8))
                (param_1,*(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x18),
                 *(undefined4 *)(in_ECX + 0x1c),local_14,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    }
    local_14 = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x74) + 0xb4);
    iVar5 = *(int *)(iVar1 + 0x80) + -1;
    if (-1 < iVar5) {
      iVar6 = 0;
      do {
        local_14 = iVar6 + 1;
        if ((*(byte *)(*(int *)(*(int *)(iVar1 + 0x78) + iVar5 * 4) + 8) & 1) == 0) {
          local_14 = iVar6;
        }
        iVar5 = iVar5 + -1;
        iVar6 = local_14;
      } while (-1 < iVar5);
    }
    FUN_0067faa0(local_40);
    uVar7 = 0;
    if (0 < local_14) {
      do {
        if ((*(uint *)(in_ECX + 0x80) <= uVar7) ||
           (*(int *)(*(int *)(in_ECX + 0x78) + uVar7 * 4) == 0)) {
          uVar3 = *(undefined4 *)(in_ECX + 0x1c);
          piVar8 = &local_30;
          FUN_006d7870(local_60,uVar7);
          FUN_0040ddb0(piVar8,uVar3);
          if (local_38 + local_40[0] <= local_30) {
            ExceptionList = local_10;
            return;
          }
          if (local_40[0] < iStack_28 + local_30) {
            local_20 = param_1;
            if (*(char *)(param_1 + 2) != '\0') {
              *(undefined1 *)(param_1 + 2) = 0;
              (**(code **)(*(int *)*param_1 + 0x34))();
            }
            local_8 = 0;
            *(undefined1 *)(param_1 + 2) = 0;
            local_50 = local_30;
            uStack_4c = uStack_2c;
            iStack_48 = iStack_28;
            uStack_44 = uStack_24;
            (**(code **)(*(int *)*param_1 + 0x34))();
            cVar2 = (**(code **)(*(int *)*param_1 + 0x14))(&local_50);
            if (cVar2 != '\0') {
              uVar3 = FUN_006773f0(local_30,0);
              local_18 = CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)(in_ECX + 0x88));
              uVar4 = FUN_00697d20(uVar7);
              if ((uVar4 < *(uint *)(iVar1 + 0x80)) &&
                 (iVar5 = *(int *)(*(int *)(iVar1 + 0x78) + uVar4 * 4), iVar5 != 0)) {
                uVar3 = *(undefined4 *)(iVar5 + 4);
              }
              else {
                uVar3 = 0;
              }
              (**(code **)(*local_1c + 0xc))
                        (param_1,*(undefined4 *)(in_ECX + 0x84),uVar3,iStack_28,uStack_24,local_18);
            }
            local_8 = 1;
            if (*(char *)(param_1 + 2) == '\0') {
              (**(code **)(*(int *)*param_1 + 0x38))();
            }
            else {
              *(undefined1 *)(param_1 + 2) = 0;
            }
            local_8 = 0xffffffff;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_14);
    }
  }
  ExceptionList = local_10;
  return;
}

