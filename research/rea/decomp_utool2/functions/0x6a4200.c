// rea decompile_all
// name: FUN_006a4200
// address: 0x6a4200
// body: available
// range: 0x6a4200-0x6a4487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a4200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5
                 ,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined1 *puStack_84;
  float fStack_80;
  void **ppvStack_7c;
  undefined4 uStack_70;
  uint uStack_6c;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722ffc;
  local_10 = ExceptionList;
  uStack_6c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvStack_7c = (void **)&uStack_70;
  fStack_80 = 9.758324e-39;
  FUN_006e8e70();
  FUN_00684a80();
  ppvStack_7c = (void **)&uStack_70;
  fStack_80 = 9.758382e-39;
  FUN_006e8e70();
  FUN_00684c50();
  uStack_70 = 0;
  iVar1 = *(int *)*param_1;
  ppvStack_7c = (void **)param_6;
  fStack_80 = 9.758428e-39;
  FUN_00472d90();
  (**(code **)(iVar1 + 0x54))();
  puStack_84 = &stack0xffffff88;
  ppvStack_7c = (void **)0x0;
  fStack_80 = 2.3518497e-38;
  FUN_006e8e70();
  ppvStack_7c = (void **)0x6a42a9;
  FUN_00684c50();
  ppvStack_7c = (void **)param_2;
  fStack_80 = 0.0;
  puStack_84 = (undefined1 *)0x6a42bb;
  FUN_00472d90();
  FUN_0040e4d0(&puStack_84);
  FUN_00677150();
  if (((*(byte *)(param_9 + 0x69) & 0x10) == 0) &&
     ((*(int *)(param_9 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 1;
    local_8 = 0;
    fStack_80 = (float)param_8 * 0.45 + (float)param_6;
    fVar3 = (float)param_7 * 0.2 + (float)param_5;
    puStack_84 = (undefined1 *)0x6a43ac;
    ppvStack_7c = (void **)fVar3;
    FUN_006824f0();
    fStack_80 = (float)param_8 * 0.55 + (float)param_6;
    puStack_84 = (undefined1 *)0x6a4402;
    ppvStack_7c = (void **)fVar3;
    FUN_006824f0();
    puStack_84 = &stack0xffffff88;
    fStack_80 = 2.3519214e-38;
    ppvStack_7c = (void **)0x0;
    if (param_4 != '\0') {
      fStack_80 = 2.351778e-38;
    }
    FUN_006e8e70();
    ppvStack_7c = (void **)0x6a4428;
    FUN_00684c50();
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
      local_3c = 0x3f800000;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = 0x3f800000;
      local_28 = 0;
      ppvStack_7c = &local_5c;
      fStack_80 = 9.759104e-39;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    ppvStack_7c = (void **)0x6a4471;
    FID_conflict__free(local_5c);
  }
  ExceptionList = local_10;
  return;
}

