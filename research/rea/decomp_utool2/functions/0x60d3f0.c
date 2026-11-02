// rea decompile_all
// name: FUN_0060d3f0
// address: 0x60d3f0
// body: available
// range: 0x60d3f0-0x60d5c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060d3f0(int *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int local_14;
  undefined1 auStack_10 [4];
  int local_c;
  int local_8;
  
  iVar2 = param_2;
  (**(code **)(*in_ECX + 0xcc))(param_2,in_ECX[0x2c],&local_c,&local_8);
  (**(code **)(*in_ECX + 0xcc))(in_ECX[0x48],in_ECX[0x2c],&param_2,auStack_10);
  local_c = local_c - (in_ECX[0x2b] + param_2);
  iVar1 = in_ECX[0x2d];
  if ((1 << ((char)iVar2 + (char)(iVar2 / 0xc) * -0xc & 0x1fU) & 0x54aU) == 0) {
    if (iVar1 == 0) {
      iVar1 = in_ECX[7];
      *param_1 = local_c;
      param_1[1] = 0;
      param_1[3] = iVar1;
      param_1[2] = local_8;
      return;
    }
    if (iVar1 == 1) {
      iVar1 = in_ECX[6];
      param_1[1] = local_c;
      *param_1 = 0;
      param_1[2] = iVar1;
      param_1[3] = local_8;
      return;
    }
    if (iVar1 == 2) {
      iVar1 = in_ECX[7];
      iVar2 = in_ECX[6];
      *param_1 = 0;
      param_1[1] = (iVar1 - local_c) - local_8;
      param_1[2] = iVar2;
      param_1[3] = local_8;
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      iVar2 = in_ECX[7];
    }
    else {
      iVar2 = in_ECX[6];
    }
    local_14 = SUB84((double)((float)iVar2 * (float)in_ECX[0x2a]) + 6755399441055744.0,0);
    if (iVar1 == 0) {
      *param_1 = local_c;
      param_1[1] = 0;
      param_1[2] = local_8;
      param_1[3] = local_14;
      return;
    }
    if (iVar1 == 1) {
      *param_1 = in_ECX[6] - local_14;
      param_1[1] = local_c;
      param_1[2] = local_14;
      param_1[3] = local_8;
      return;
    }
    if (iVar1 == 2) {
      param_1[1] = (in_ECX[7] - local_c) - local_8;
      *param_1 = 0;
      param_1[3] = local_8;
      param_1[2] = local_14;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

