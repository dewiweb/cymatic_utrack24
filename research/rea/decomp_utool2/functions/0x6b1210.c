// rea decompile_all
// name: FUN_006b1210
// address: 0x6b1210
// body: available
// range: 0x6b1210-0x6b1395 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1210(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  void *local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072388a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = in_ECX + 0x1e;
  FUN_0040ec60(piVar1);
  local_8 = 0;
  if (in_ECX[0x1d] == 0) {
    if (in_ECX[0x1f] != 0) {
      FID_conflict__free((void *)*piVar1);
      *piVar1 = 0;
      in_ECX[0x1f] = 0;
    }
    uVar7 = 0;
    in_ECX[0x20] = 0;
    if (0 < in_ECX[0xc]) {
      bVar8 = in_ECX[0xc] != 0;
      do {
        if (bVar8) {
          uVar3 = *(undefined4 *)(in_ECX[10] + uVar7 * 4);
        }
        else {
          uVar3 = 0;
        }
        iVar4 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0,uVar2);
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x80) == 0) {
            local_14 = 0;
          }
          else {
            local_14 = *(int *)(*(int *)(iVar4 + 0x80) + 8);
          }
          iVar4 = in_ECX[0x20];
          iVar5 = iVar4 + 1;
          if (in_ECX[0x1f] < iVar5) {
            if (iVar5 < 0) {
              iVar5 = iVar4 + 2;
            }
            FUN_00409cf0((iVar5 >> 1) + iVar4 + 9 & 0xfffffff8);
          }
          iVar4 = in_ECX[0x20];
          in_ECX[0x20] = iVar4 + 1;
          piVar6 = (int *)(*piVar1 + iVar4 * 4);
          if (piVar6 != (int *)0x0) {
            *piVar6 = local_14;
          }
        }
        uVar7 = uVar7 + 1;
        bVar8 = uVar7 < (uint)in_ECX[0xc];
      } while ((int)uVar7 < in_ECX[0xc]);
    }
  }
  else if (in_ECX[0x21] != 0) {
    iVar4 = *(int *)(in_ECX[0x21] + 0x80);
    if (iVar4 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *(int *)(iVar4 + 8);
    }
    if (local_14 != 0) {
      FUN_00415ff0(local_14);
      FUN_0040e3e0(&local_14);
    }
  }
  if (in_ECX[0x20] == local_18) {
    iVar4 = in_ECX[0x20] + -1;
    if (-1 < iVar4) {
      piVar6 = (int *)((int)local_20 + iVar4 * 4);
      do {
        if (*(int *)((*piVar1 - (int)local_20) + (int)piVar6) != *piVar6) goto LAB_006b1371;
        piVar6 = piVar6 + -1;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  else {
LAB_006b1371:
    (**(code **)(*in_ECX + 0xb0))();
  }
  FID_conflict__free(local_20);
  ExceptionList = local_10;
  return;
}

