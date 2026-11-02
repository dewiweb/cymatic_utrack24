// rea decompile_all
// name: FUN_006cff90
// address: 0x6cff90
// body: available
// range: 0x6cff90-0x6d00cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_006cff90(float *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *in_ECX;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00726ad1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = (float)in_ECX[10];
  local_24 = (float)in_ECX[0xb];
  FUN_006e0ff0(&local_3c,in_ECX[6],in_ECX[0xd],in_ECX[0xe]);
  local_18 = (float)in_ECX[8];
  local_1c = (float)in_ECX[9];
  FUN_006e0ff0(&local_34,in_ECX[6],*in_ECX,in_ECX[1]);
  cVar2 = *(char *)((int)in_ECX + 0x3d);
  fVar4 = (float)in_ECX[0xc];
  uVar3 = *(undefined1 *)(in_ECX + 0xf);
  fVar5 = (float)in_ECX[7];
  fVar1 = (float)in_ECX[5];
  fVar6 = (float)in_ECX[4];
  *param_1 = local_34;
  param_1[1] = fStack_30;
  local_34 = SUB84((double)local_34 + 6755399441055744.0,0);
  param_1[2] = local_34;
  local_34 = SUB84((double)fStack_30 + 6755399441055744.0,0);
  param_1[3] = local_34;
  param_1[4] = fVar6;
  param_1[6] = param_2;
  param_1[5] = fVar1;
  param_1[7] = fVar5;
  param_1[8] = local_18;
  param_1[9] = local_1c;
  param_1[10] = local_20;
  param_1[0xb] = local_24;
  param_1[0xd] = local_3c;
  param_1[0xc] = fVar4;
  param_1[0xe] = local_38;
  *(undefined1 *)(param_1 + 0xf) = uVar3;
  *(bool *)((int)param_1 + 0x3d) = cVar2 != '\0';
  ExceptionList = local_10;
  return param_1;
}

