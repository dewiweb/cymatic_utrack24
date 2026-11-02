// rea decompile_all
// name: FUN_006f0450
// address: 0x6f0450
// body: available
// range: 0x6f0450-0x6f0508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0450(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  undefined4 local_18;
  undefined4 local_10;
  
  fVar1 = *(float *)(in_ECX + 0x8c);
  iVar7 = 5;
  iVar4 = *(int *)(param_2 + 8);
  if (*(char *)(in_ECX + 0xa6) != '\0') {
    iVar7 = 0x23;
  }
  iVar6 = FUN_006ed2a0(iVar4,*(undefined4 *)(param_2 + 0xc));
  fVar2 = *(float *)(in_ECX + 0x8c);
  iVar5 = *(int *)(in_ECX + 0x90);
  dVar3 = *(double *)(in_ECX + 0xa8);
  param_1[1] = (iVar4 - *(int *)(in_ECX + 0x84)) * iVar5;
  local_18 = SUB84(((double)iVar7 - (double)fVar2 * dVar3) + (double)(fVar2 * (float)iVar6) +
                   6755399441055744.0,0);
  *param_1 = local_18;
  local_10 = SUB84((double)fVar1 + 6755399441055744.0,0);
  param_1[2] = local_10;
  param_1[3] = iVar5;
  return;
}

