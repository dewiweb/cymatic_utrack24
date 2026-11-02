// rea decompile_all
// name: FUN_00687fc0
// address: 0x687fc0
// body: available
// range: 0x687fc0-0x68820e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00687fc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float in_XMM0_Da;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_8 = 0x96;
  local_14 = 0x1e;
  if ((undefined **)*in_ECX == juce::Slider::Pimpl::PopupDisplayComponent::vftable) {
    FUN_006831f0(in_ECX + 0x2f);
    FUN_004363b0();
    local_8 = (int)in_XMM0_Da + 0x12;
    local_14 = (int)(*(float *)(in_ECX[0x2e] + 0x14) * 1.6);
  }
  else {
    (*(code *)((undefined **)*in_ECX)[0x2c])(&local_8,&local_14);
  }
  in_ECX[0x1c] = param_1;
  in_ECX[0x1d] = param_1;
  in_ECX[0x1e] = local_8;
  iVar2 = local_8 + param_1 * 2;
  in_ECX[0x1f] = local_14;
  local_10 = param_1 * 2 + local_14;
  local_14 = iVar2;
  if (in_ECX[3] == 0) {
    piVar1 = (int *)FUN_006cf9c0(local_38);
  }
  else {
    piVar1 = (int *)FUN_006e6400(local_28);
  }
  local_18 = piVar1[2];
  uVar5 = in_ECX[0x22];
  if ((uVar5 & 1) == 0) {
    param_1 = -1;
  }
  else {
    iVar2 = param_4 - piVar1[1];
    param_1 = 0;
    if (0 < iVar2) {
      param_1 = iVar2;
    }
    uVar5 = in_ECX[0x22];
  }
  if ((uVar5 & 2) == 0) {
    local_8 = -1;
  }
  else {
    iVar2 = ((piVar1[1] - param_4) - param_6) + piVar1[3];
    local_8 = 0;
    if (0 < iVar2) {
      local_8 = iVar2;
    }
  }
  if ((uVar5 & 4) == 0) {
    local_c = -1;
  }
  else {
    iVar2 = param_3 - *piVar1;
    local_c = 0;
    if (0 < iVar2) {
      local_c = iVar2;
    }
  }
  if ((uVar5 & 8) == 0) {
    iVar2 = -1;
  }
  else {
    iVar4 = ((*piVar1 - param_3) - param_5) + local_18;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
  }
  if ((param_6 * 2 < param_5) && ((local_10 + 0x14 < param_1 || (local_10 + 0x14 < local_8)))) {
    iVar2 = 0;
    local_c = 0;
  }
  else if ((param_5 < param_6 / 2) && ((local_14 + 0x14 < local_c || (local_14 + 0x14 < iVar2)))) {
    local_8 = 0;
    param_1 = 0;
  }
  iVar4 = local_c;
  if (local_c < iVar2) {
    iVar4 = iVar2;
  }
  iVar3 = param_1;
  if (param_1 < local_8) {
    iVar3 = local_8;
  }
  if (iVar3 < iVar4) {
    param_4 = param_4 + param_6 / 2;
    in_ECX[0x21] = local_10 / 2;
    if (iVar2 < local_c) {
      param_2 = in_ECX[0x1e] + in_ECX[0x1c] + param_2;
    }
    else {
      param_3 = param_3 + param_5;
      param_2 = in_ECX[0x1c] - param_2;
    }
    in_ECX[0x20] = param_2;
  }
  else {
    param_3 = param_5 / 2 + param_3;
    in_ECX[0x20] = local_14 / 2;
    if (param_1 < local_8) {
      param_4 = param_4 + param_6;
      in_ECX[0x21] = in_ECX[0x1d] - param_2;
    }
    else {
      in_ECX[0x21] = in_ECX[0x1f] + in_ECX[0x1d] + param_2;
    }
  }
  FUN_006e9790(param_3 - in_ECX[0x20],param_4 - in_ECX[0x21],local_14,local_10);
  return;
}

