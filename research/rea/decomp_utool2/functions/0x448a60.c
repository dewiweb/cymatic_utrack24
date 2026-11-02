// rea decompile_all
// name: FUN_00448a60
// address: 0x448a60
// body: available
// range: 0x448a60-0x448c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448a60(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *in_EDX;
  void *local_2c;
  undefined4 *local_18;
  int local_10;
  undefined4 *local_8;
  
  local_8 = in_EDX;
  if (param_2 != 0) {
    while (param_3 != 0) {
      if (param_2 + param_3 == 2) {
        iVar1 = FUN_00445dc0(*local_8,*in_ECX);
        if (-1 < iVar1) {
          return;
        }
        uVar3 = *in_ECX;
        *in_ECX = *local_8;
        *local_8 = uVar3;
        return;
      }
      if ((param_2 <= param_3) && (iVar1 = FUN_004261d0(), param_2 <= iVar1)) {
        (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
        FUN_00426610(param_4);
        FUN_00426800(local_8);
        if (local_2c != (void *)0x0) {
          FID_conflict__free(local_2c);
        }
        FUN_00448e40(local_8,param_1,in_ECX,param_5,1);
        return;
      }
      iVar1 = FUN_004261d0();
      if (param_3 <= iVar1) {
        (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
        FUN_00426610(param_4);
        FUN_00426800(param_1);
        uVar3 = extraout_ECX;
        if (local_2c != (void *)0x0) {
          FID_conflict__free(local_2c);
          uVar3 = extraout_ECX_00;
        }
        FUN_00448ee0(**(undefined4 **)(param_4 + 0x10),(*(undefined4 **)(param_4 + 0x10))[1],param_1
                     ,param_5,uVar3);
        return;
      }
      if (param_3 < param_2) {
        local_10 = param_2 / 2;
        local_18 = (undefined4 *)FUN_00448f60(in_ECX + local_10);
        iVar2 = (int)local_18 - (int)local_8 >> 2;
      }
      else {
        iVar2 = param_3 / 2;
        local_18 = local_8 + iVar2;
        iVar1 = FUN_00448fc0(local_18,param_5);
        local_10 = iVar1 - (int)in_ECX >> 2;
      }
      param_2 = param_2 - local_10;
      in_ECX = (undefined4 *)FUN_00426b00(local_18,param_2,iVar2,param_4);
      FUN_00448a60(in_ECX,local_10,iVar2,param_4,param_5);
      param_3 = param_3 - iVar2;
      local_8 = local_18;
      if (param_2 == 0) {
        return;
      }
    }
  }
  return;
}

