// rea decompile_all
// name: FUN_006407e0
// address: 0x6407e0
// body: available
// range: 0x6407e0-0x6408e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006407e0(int *param_1,undefined4 *param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int in_ECX;
  double dVar5;
  float fVar6;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  int local_10;
  double local_c;
  
  dVar5 = 6755399441055744.0;
  uStack_1c = *(undefined4 *)(in_ECX + 4);
  iVar1 = *(int *)(in_ECX + 0xc);
  iVar2 = *(int *)(in_ECX + 0x10);
  local_c = (double)((float)*(int *)(in_ECX + 8) * param_3) + 6755399441055744.0;
  uStack_18 = local_c._0_4_;
  fVar6 = param_3;
  local_14 = iVar1;
  local_10 = iVar2;
  puVar4 = (undefined4 *)FUN_00684d10(&param_3);
  uStack_1c = *puVar4;
  local_c._0_4_ = SUB84((double)((float)iVar1 * fVar6) + dVar5,0);
  local_14 = local_c._0_4_;
  local_c = (double)((float)iVar2 * fVar6) + dVar5;
  local_10 = local_c._0_4_;
  FUN_00641400(param_2,param_1);
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    (**(code **)(*(int *)*param_2 + 0x34))();
  }
  (**(code **)(*(int *)*param_2 + 0x48))(param_4);
  local_24 = 0x3f800000;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  local_14 = 0x3f800000;
  local_10 = 0;
  if (*param_1 != 0) {
    cVar3 = (**(code **)(*(int *)*param_2 + 0x30))();
    if (cVar3 == '\0') {
      (**(code **)(*(int *)*param_2 + 0x60))(param_1,&local_24);
    }
  }
  return;
}

