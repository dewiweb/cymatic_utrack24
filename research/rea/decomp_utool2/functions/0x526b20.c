// rea decompile_all
// name: FUN_00526b20
// address: 0x526b20
// body: available
// range: 0x526b20-0x526c2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526b20(int param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    bVar8 = *(int *)(param_1 + 0x14) != 0;
    do {
      if (bVar8) {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar7 * 4);
      }
      else {
        uVar5 = 0;
      }
      iVar2 = FUN_006f6dd6(uVar5,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                           &ProjectExplorerItem_Playlist::RTTI_Type_Descriptor,0);
      if (iVar2 == 0) {
        if (uVar7 < *(uint *)(param_1 + 0x14)) {
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar7 * 4);
        }
        else {
          uVar5 = 0;
        }
        uVar5 = FUN_006f6dd6(uVar5,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &ProjectExplorerItem_PlaylistSubfolder::RTTI_Type_Descriptor,0);
        *param_3 = 1;
        FUN_00526b20(uVar5,param_2,param_3);
      }
      else {
        iVar6 = param_2[2] + 1;
        if (param_2[1] < iVar6) {
          iVar3 = iVar6;
          if (iVar6 < 0) {
            iVar3 = param_2[2] + 2;
          }
          uVar4 = (iVar3 >> 1) + 8 + iVar6 & 0xfffffff8;
          if (param_2[1] != uVar4) {
            if ((int)uVar4 < 1) {
              FID_conflict__free((void *)*param_2);
              *param_2 = 0;
            }
            else if (*param_2 == 0) {
              iVar6 = FUN_004c554b();
              *param_2 = iVar6;
            }
            else {
              iVar6 = FUN_004c553b(*param_2,uVar4 << 2);
              *param_2 = iVar6;
            }
            param_2[1] = uVar4;
          }
        }
        iVar6 = param_2[2];
        param_2[2] = iVar6 + 1;
        piVar1 = (int *)(*param_2 + iVar6 * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar2;
        }
      }
      uVar7 = uVar7 + 1;
      bVar8 = uVar7 < *(uint *)(param_1 + 0x14);
    } while ((int)uVar7 < (int)*(uint *)(param_1 + 0x14));
  }
  return;
}

