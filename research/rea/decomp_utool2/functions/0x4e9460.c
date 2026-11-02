// rea decompile_all
// name: FUN_004e9460
// address: 0x4e9460
// body: available
// range: 0x4e9460-0x4e962e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9460(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  FUN_004eb300(param_1);
  fVar1 = *(float *)(in_ECX + 0x198);
  if (*(float *)(in_ECX + 0x198) <= *(float *)(in_ECX + 0x160)) {
    fVar1 = *(float *)(in_ECX + 0x160);
  }
  local_c = *(float *)(in_ECX + 0x164) + 10.0;
  iVar2 = (int)((float)*(int *)(in_ECX + 0x84) - fVar1);
  iVar3 = (int)(local_c + 10.0);
  if (*(float *)(in_ECX + 0x19c) != (float)(undefined *)0x0) {
    iVar3 = (int)(*(float *)(in_ECX + 0x19c) + 20.0 + (float)iVar3);
  }
  iVar4 = 10;
  if ((*(int *)(in_ECX + 0x1ac) == 0) && ((*(byte *)(in_ECX + 0x2c4) & 2) == 0)) {
    iVar4 = (*(int *)(in_ECX + 0x88) - iVar3) / 2;
  }
  local_8 = iVar2 / 2;
  local_18 = (float)(*(int *)(in_ECX + 0x7c) + local_8);
  local_14 = (float)(*(int *)(in_ECX + 0x80) + iVar4 / 2);
  local_10 = (float)(*(int *)(in_ECX + 0x84) - iVar2);
  FUN_00684760(param_1,&local_18);
  local_18 = (float)(*(int *)(in_ECX + 0x7c) + local_8);
  if ((*(byte *)(in_ECX + 0x218) & 2) == 0) {
    local_c = *(float *)(in_ECX + 0x19c);
    iVar2 = *(int *)(in_ECX + 0x84) - iVar2;
    local_14 = (float)(*(int *)(in_ECX + 0x88) + *(int *)(in_ECX + 0x80)) - local_c;
  }
  else {
    local_14 = (float)(*(int *)(in_ECX + 0x1c4) + *(int *)(in_ECX + 0x1cc) + 0x14);
    iVar2 = *(int *)(in_ECX + 0x84) - iVar2;
    local_c = *(float *)(in_ECX + 0x19c);
  }
  local_c = local_c + 10.0;
  local_10 = (float)iVar2;
  FUN_00684760(param_1,&local_18);
  return;
}

