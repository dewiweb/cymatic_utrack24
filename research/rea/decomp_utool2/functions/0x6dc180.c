// rea decompile_all
// name: FUN_006dc180
// address: 0x6dc180
// body: available
// range: 0x6dc180-0x6dc38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dc180(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  float fVar3;
  void **ppvStack_90;
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_24;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727bbd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX + -0x20;
  FUN_006ab460();
  cVar2 = param_4;
  FUN_006842b0(&ppvStack_90);
  FUN_006840c0(local_14);
  local_8 = 0;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  FID_conflict__free(local_24);
  iVar1 = *(int *)*param_1;
  ppvStack_90 = (void **)0x1;
  FUN_00472d90();
  (**(code **)(iVar1 + 0x54))();
  ppvStack_90 = (void **)((float)param_2 * 0.5);
  if (cVar2 == '\0') {
    fVar3 = 0.3;
  }
  else {
    fVar3 = 0.6;
  }
  local_70 = (void *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_54 = 1;
  local_8 = 1;
  FUN_006824f0((float)param_3 * fVar3);
  ppvStack_90 = (void **)&stack0xffffff74;
  FUN_006ab460(&param_4,0x1000600);
  FUN_006842b0();
  ppvStack_90 = (void **)0x6dc32f;
  FUN_00684c50();
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    local_50 = 0x3f800000;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 0x3f800000;
    local_3c = 0;
    ppvStack_90 = &local_70;
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  ppvStack_90 = (void **)0x6dc378;
  FID_conflict__free(local_70);
  ExceptionList = local_10;
  return;
}

