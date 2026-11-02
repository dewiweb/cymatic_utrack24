// rea decompile_all
// name: FUN_0052e450
// address: 0x52e450
// body: available
// range: 0x52e450-0x52e634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e450(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c9c8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_006f6dd6(param_1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                          &TargetExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
  uVar8 = 0;
  local_20 = 0;
  local_8 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x9c);
  if (iVar7 == 0) {
    local_14 = 0;
    uVar6 = local_14;
  }
  else {
    uVar6 = *(byte *)(iVar7 + 0x30) & 1;
    iVar7 = *(int *)(iVar7 + 0x14);
    local_14 = uVar6;
    while (-1 < iVar7 + -1) {
      uVar10 = FUN_0068fb80(0xfffffffe);
      uVar6 = uVar6 + (int)uVar10;
      iVar7 = (int)((ulonglong)uVar10 >> 0x20);
    }
  }
  local_14 = uVar6;
  iVar7 = 0;
  if (0 < (int)local_14) {
    do {
      if ((*(int *)(*(int *)(param_1 + 4) + 0x9c) != 0) && (iVar3 = FUN_0068fb00(iVar7), iVar3 != 0)
         ) {
        iVar4 = FUN_006f6dd6(iVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &TargetExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
        iVar3 = *(int *)(iVar4 + 0x40);
        iVar1 = *(int *)(local_18 + 0x40);
        if (iVar1 == iVar3) {
          if (iVar1 < 0x1005) {
            if (iVar1 == 0x1004) {
              bVar9 = iVar3 == 0x1004;
            }
            else {
              if (iVar1 == 0) goto LAB_0052e58b;
              if (iVar1 != 0x1003) goto LAB_0052e5c7;
              bVar9 = iVar3 == 0x1003;
            }
          }
          else {
            if (iVar1 != 0x1006) {
              if (iVar1 != 0x3002) goto LAB_0052e5c7;
              goto LAB_0052e58b;
            }
            bVar9 = iVar3 == 0x1006;
          }
          if (!bVar9) {
            local_1c = iVar4;
            FUN_0040e3e0(&local_1c);
            uVar8 = local_20;
          }
        }
        else {
LAB_0052e58b:
          iVar3 = uVar8 + 1;
          uVar6 = uVar8;
          if (0 < iVar3) {
            if (iVar3 < 0) {
              iVar3 = uVar8 + 2;
            }
            FUN_00409cf0((iVar3 >> 1) + uVar8 + 9 & 0xfffffff8);
            uVar6 = local_20;
          }
          uVar8 = uVar6 + 1;
          local_20 = uVar8;
          if ((int *)(uVar6 * 4) != (int *)0x0) {
            *(int *)(uVar6 * 4) = iVar4;
          }
        }
      }
LAB_0052e5c7:
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_14);
  }
  uVar2 = 0;
  if (0 < (int)uVar8) {
    bVar9 = uVar8 != 0;
    do {
      if (bVar9) {
        uVar5 = *(undefined4 *)(uVar2 * 4);
      }
      else {
        uVar5 = 0;
      }
      FUN_006dff00(0,0,uVar5);
      uVar2 = uVar2 + 1;
      bVar9 = uVar2 < uVar8;
    } while ((int)uVar2 < (int)uVar8);
  }
  FUN_006dff00((*(byte *)(param_1 + 0x30) & 1) == 0,0,param_1);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

