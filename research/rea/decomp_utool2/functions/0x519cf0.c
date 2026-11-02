// rea decompile_all
// name: FUN_00519cf0
// address: 0x519cf0
// body: available
// range: 0x519cf0-0x519f3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00519cf0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint uVar5;
  undefined4 uVar6;
  uint extraout_ECX_04;
  uint uVar7;
  int iVar8;
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
  puStack_c = &LAB_00709a8b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = FUN_006f6dd6(param_1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                          &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
  local_20 = 0;
  local_8 = 0;
  uVar5 = *(uint *)(param_1 + 4);
  iVar8 = *(int *)(uVar5 + 0x9c);
  if (iVar8 == 0) {
    local_14 = 0;
    uVar7 = local_14;
  }
  else {
    uVar7 = *(byte *)(iVar8 + 0x30) & 1;
    iVar8 = *(int *)(iVar8 + 0x14);
    local_14 = uVar7;
    while (-1 < iVar8 + -1) {
      uVar10 = FUN_0068fb80(0xfffffffe);
      uVar7 = uVar7 + (int)uVar10;
      uVar5 = extraout_ECX;
      iVar8 = (int)((ulonglong)uVar10 >> 0x20);
    }
  }
  local_14 = uVar7;
  iVar8 = 0;
  if (0 < (int)local_14) {
    do {
      uVar5 = 0;
      uVar7 = local_20;
      if ((*(int *)(*(int *)(param_1 + 4) + 0x9c) != 0) &&
         (iVar3 = FUN_0068fb00(iVar8), uVar5 = extraout_ECX_00, iVar3 != 0)) {
        iVar4 = FUN_006f6dd6(iVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0,uVar2);
        iVar3 = *(int *)(iVar4 + 0x40);
        iVar1 = *(int *)(local_18 + 0x40);
        if ((iVar1 == iVar3) &&
           ((uVar5 = *(uint *)(local_18 + 0x44), uVar5 == *(uint *)(iVar4 + 0x44) &&
            (*(int *)(local_18 + 0x48) == *(int *)(iVar4 + 0x48))))) {
          if (iVar1 < 0x3005) {
            if (iVar1 == 0x3004) {
              bVar9 = iVar3 == 0x3004;
            }
            else {
              if (0x1006 < iVar1) {
                if (iVar1 == 0x2001) {
                  local_1c = iVar4;
                  FUN_0040e3e0(&local_1c);
                  uVar5 = extraout_ECX_02;
                }
                goto LAB_00519ed6;
              }
              if (iVar1 == 0x1006) {
                bVar9 = iVar3 == 0x1006;
              }
              else {
                if (iVar1 == 0) goto LAB_00519e2d;
                if (iVar1 != 0x1003) goto LAB_00519ed6;
                bVar9 = iVar3 == 0x1003;
              }
            }
LAB_00519e27:
            if (bVar9) goto LAB_00519ed6;
          }
          else {
            if (iVar1 == 0x3007) {
              bVar9 = iVar3 == 0x3007;
              goto LAB_00519e27;
            }
            if (iVar1 != 0x7002) {
              if (iVar1 == 0x7005) {
                local_1c = iVar4;
                FUN_0040e3e0(&local_1c);
                uVar5 = extraout_ECX_03;
              }
              goto LAB_00519ed6;
            }
          }
LAB_00519e2d:
          local_1c = iVar4;
          FUN_0040e3e0(&local_1c);
          uVar5 = extraout_ECX_01;
        }
        else {
          iVar3 = local_20 + 1;
          if (0 < iVar3) {
            if (iVar3 < 0) {
              iVar3 = local_20 + 2;
            }
            FUN_00409cf0((iVar3 >> 1) + local_20 + 9 & 0xfffffff8);
          }
          uVar5 = local_20;
          uVar7 = local_20 + 1;
          if ((int *)(local_20 * 4) != (int *)0x0) {
            *(int *)(local_20 * 4) = iVar4;
          }
        }
      }
LAB_00519ed6:
      local_20 = uVar7;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_14);
  }
  uVar2 = 0;
  if (0 < (int)local_20) {
    bVar9 = local_20 != 0;
    do {
      if (bVar9) {
        uVar6 = *(undefined4 *)(uVar2 * 4);
      }
      else {
        uVar6 = 0;
      }
      FUN_006dff00(0,0,uVar6);
      uVar2 = uVar2 + 1;
      bVar9 = uVar2 < local_20;
      uVar5 = extraout_ECX_04;
    } while ((int)uVar2 < (int)local_20);
  }
  FUN_006dff00((*(byte *)(param_1 + 0x30) & 1) == 0,0,uVar5);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

