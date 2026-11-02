// rea decompile_all
// name: FUN_006a4c70
// address: 0x6a4c70
// body: available
// range: 0x6a4c70-0x6a4dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a4c70(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,double param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined8 local_34;
  undefined4 *local_2c;
  undefined4 local_8;
  
  if ((param_5 < 0.0) || (1.0 <= param_5)) {
    local_2c = param_6;
    local_34 = param_5;
    iStack_38 = param_4;
    iStack_3c = param_3;
    uStack_40 = param_2;
    puStack_44 = param_1;
    uStack_48 = 0x6a4dd2;
    FUN_006ddbb0();
  }
  else {
    local_2c = (undefined4 *)0x0;
    local_34 = (double)CONCAT44(0x1001900,&local_8);
    iStack_38 = 0x6a4cae;
    FUN_006e8e70();
    local_2c = (undefined4 *)0x0;
    local_34 = (double)CONCAT44(0x1001a00,&param_2);
    iStack_38 = 0x6a4cc0;
    FUN_006e8e70();
    local_2c = (undefined4 *)local_8;
    local_34 = (double)CONCAT44(0x6a4cd2,(int)local_34);
    FUN_00684a80();
    local_2c = (undefined4 *)param_2;
    local_34 = (double)CONCAT44(0x6a4ce1,(int)local_34);
    FUN_00684c50();
    iVar1 = param_4;
    iVar3 = param_3 + -2;
    param_5 = (double)iVar3 * param_5 + 6755399441055744.0;
    if (param_5._0_4_ < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_5._0_4_;
      if (iVar3 < param_5._0_4_) {
        iVar4 = iVar3;
      }
    }
    local_2c = (undefined4 *)0x0;
    iVar3 = *(int *)*param_1;
    local_34 = (double)CONCAT44(param_4 + -2,iVar4);
    iStack_38 = 1;
    iStack_3c = 0x6a4d2e;
    local_34._4_4_ = FUN_00472d90();
    local_34._0_4_ = 0x6a4d37;
    (**(code **)(iVar3 + 0x54))();
    puVar2 = param_6;
    if (*(char *)*param_6 != '\0') {
      iStack_38 = param_2;
      iStack_3c = local_8;
      uStack_40 = 0x6a4d5f;
      FUN_0067f090();
      iStack_38 = 0x6a4d69;
      FUN_00684c50();
      local_34._0_4_ = 0x6a4d7f;
      FUN_00684bc0();
      local_34._0_4_ = iVar1;
      iStack_38 = param_3;
      iStack_3c = 0;
      uStack_40 = 0x6a4d8f;
      FUN_00472d90();
      local_34 = (double)CONCAT44(local_34._4_4_,extraout_EDX);
      iStack_38 = 0x24;
      FUN_0040e4d0(&uStack_48);
      FUN_006830c0(puVar2);
      return;
    }
  }
  return;
}

