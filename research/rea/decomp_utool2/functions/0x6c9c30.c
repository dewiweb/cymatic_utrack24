// rea decompile_all
// name: FUN_006c9c30
// address: 0x6c9c30
// body: available
// range: 0x6c9c30-0x6c9d22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_006c9c30(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int in_ECX;
  float local_10;
  
  fVar6 = *(float *)(in_ECX + 0x28);
  fVar7 = *(float *)(in_ECX + 0x20);
  fVar8 = *(float *)(in_ECX + 0x30);
  fVar9 = *(float *)(in_ECX + 0x18);
  fVar1 = *(float *)(in_ECX + 0x14);
  fVar2 = *(float *)(in_ECX + 0x34);
  fVar3 = *(float *)(in_ECX + 0x38);
  fVar10 = *(float *)(in_ECX + 0x2c);
  fVar11 = *(float *)(in_ECX + 0x24);
  cVar4 = *(char *)(in_ECX + 0x3d);
  uVar5 = *(undefined1 *)(in_ECX + 0x3c);
  fVar12 = *(float *)(in_ECX + 0x10);
  fVar13 = *(float *)(in_ECX + 0x1c);
  *param_1 = param_2;
  param_1[1] = param_3;
  local_10 = SUB84((double)param_2 + 6755399441055744.0,0);
  param_1[2] = local_10;
  local_10 = SUB84((double)param_3 + 6755399441055744.0,0);
  param_1[3] = local_10;
  param_1[4] = fVar12;
  param_1[6] = fVar9;
  param_1[7] = fVar13;
  param_1[5] = fVar1;
  param_1[9] = fVar11;
  param_1[8] = fVar7;
  param_1[10] = fVar6;
  param_1[0xb] = fVar10;
  param_1[0xc] = fVar8;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  *(undefined1 *)(param_1 + 0xf) = uVar5;
  *(bool *)((int)param_1 + 0x3d) = cVar4 != '\0';
  return param_1;
}

