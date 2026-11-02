// rea decompile_all
// name: FUN_00426390
// address: 0x426390
// body: available
// range: 0x426390-0x426566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426390(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  void *local_2c;
  undefined4 *local_18;
  int local_10;
  undefined4 *local_8;
  
  local_8 = in_EDX;
  if (param_2 != 0) {
    while (param_3 != 0) {
      if (param_2 + param_3 == 2) {
        uVar1 = *local_8;
        uVar2 = *in_ECX;
        iVar3 = FUN_00425020();
        if (-1 < iVar3) {
          return;
        }
        *in_ECX = uVar1;
        *local_8 = uVar2;
        return;
      }
      if ((param_2 <= param_3) && (iVar3 = FUN_004261d0(), param_2 <= iVar3)) {
        (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
        FUN_00426610(param_4);
        FUN_00426800(local_8);
        if (local_2c != (void *)0x0) {
          FID_conflict__free(local_2c);
        }
        FUN_00426860(local_8,param_1,in_ECX,*(undefined4 *)(param_4 + 0x10),1);
        return;
      }
      iVar3 = FUN_004261d0();
      if (param_3 <= iVar3) {
        (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
        FUN_00426610(param_4);
        FUN_00426800(param_1);
        if (local_2c != (void *)0x0) {
          FID_conflict__free(local_2c);
        }
        FUN_004268f0(**(undefined4 **)(param_4 + 0x10),(*(undefined4 **)(param_4 + 0x10))[1],param_1
                    );
        return;
      }
      if (param_3 < param_2) {
        local_10 = param_2 / 2;
        local_18 = (undefined4 *)FUN_00426970(in_ECX + local_10,in_ECX);
        iVar4 = (int)local_18 - (int)local_8 >> 2;
      }
      else {
        iVar4 = param_3 / 2;
        local_18 = local_8 + iVar4;
        iVar3 = FUN_00426a40(local_18,local_8);
        local_10 = iVar3 - (int)in_ECX >> 2;
      }
      param_2 = param_2 - local_10;
      in_ECX = (undefined4 *)FUN_00426b00(local_18,param_2,iVar4,param_4);
      FUN_00426390(in_ECX,local_10,iVar4,param_4,param_5);
      param_3 = param_3 - iVar4;
      local_8 = local_18;
      if (param_2 == 0) {
        return;
      }
    }
  }
  return;
}

