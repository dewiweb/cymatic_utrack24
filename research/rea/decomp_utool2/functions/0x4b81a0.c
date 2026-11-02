// rea decompile_all
// name: FUN_004b81a0
// address: 0x4b81a0
// body: available
// range: 0x4b81a0-0x4b82f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004b81a0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = 0;
  iVar2 = *param_2;
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      if (*(int *)(*piVar1 + 4) == iVar2) goto LAB_004b82df;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x18));
  }
  iVar3 = FUN_006f6dd6(iVar2,0,&juce::ImagePixelData::RTTI_Type_Descriptor,
                       &juce::OpenGLFrameBufferImage::RTTI_Type_Descriptor,0);
  if ((iVar3 != 0) && ((int *)(iVar3 + 0x30) != (int *)0x0)) {
    iVar2 = *(int *)(iVar3 + 0x30);
    if (iVar2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined4 *)(iVar2 + 0xc);
    }
    iVar2 = *param_2;
    if (iVar2 == 0) {
      uStack_2c = 0;
      uStack_28 = 0;
    }
    else {
      uStack_2c = *(undefined4 *)(iVar2 + 0xc);
      uStack_28 = *(undefined4 *)(iVar2 + 0x10);
    }
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    param_1[3] = 0x3f800000;
    param_1[4] = 0x3f800000;
    return param_1;
  }
  operator_new(0x28);
  iVar2 = FUN_004b8300(in_ECX,iVar2);
  iVar3 = *(int *)(in_ECX + 0x18) + 1;
  if (*(int *)(in_ECX + 0x14) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0x18) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  *(int *)(in_ECX + 0x18) = iVar3 + 1;
  *(int *)(*(int *)(in_ECX + 0x10) + iVar3 * 4) = iVar2;
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + *(int *)(iVar2 + 0x20);
  if (*(uint *)(in_ECX + 0x20) < *(uint *)(in_ECX + 0x1c)) {
    do {
      if ((*(int *)(in_ECX + 0x18) < 2) || (*(int *)(in_ECX + 0x1c) == 0)) break;
      FUN_004b8560();
    } while (*(uint *)(in_ECX + 0x20) < *(uint *)(in_ECX + 0x1c));
  }
LAB_004b82df:
  FUN_004b83d0(param_1);
  return param_1;
}

