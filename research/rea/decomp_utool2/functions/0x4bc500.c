// rea decompile_all
// name: FUN_004bc500
// address: 0x4bc500
// body: available
// range: 0x4bc500-0x4bc784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc500(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *in_ECX;
  void *local_54;
  undefined1 local_48 [24];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  undefined4 *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar3 = (undefined4 *)
           (**(code **)(*(int *)*in_ECX + 8))
                     (&local_18,&param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  piVar1 = (int *)*puVar3;
  *puVar3 = param_1;
  param_1 = piVar1;
  if (local_18 != (undefined4 *)0x0) {
    piVar1 = local_18 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_18)(1);
    }
  }
  if (param_1 != (int *)0x0) {
    if (in_ECX[0xb] == 0) {
      if (in_ECX[0xc] == 0) {
        iVar2 = *param_1;
        FUN_0067f7a0(&local_18);
        (**(code **)(iVar2 + 0x38))();
      }
      else {
        FUN_004bd2f0(in_ECX + 0xc,in_ECX + 0xd,param_1);
      }
    }
    else {
      FUN_0046f6b0(in_ECX[0xb] + 0x14);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0067ed80();
      pfVar4 = (float *)FUN_00464550(local_48,in_ECX + 0xd);
      param_2 = pfVar4[1];
      fStack_24 = pfVar4[3];
      local_20 = pfVar4[4];
      local_30 = *pfVar4;
      local_14 = pfVar4[5] - 0.5;
      fStack_28 = pfVar4[2] - 0.5;
      if ((((param_2 == 0.0) && (fStack_24 == 0.0)) && (local_30 == 1.0)) && (local_20 == 1.0)) {
        local_18 = (undefined4 *)CONCAT31(local_18._1_3_,1);
        local_20 = 1.0;
        local_1c = 0.0;
        local_30 = 1.0;
        fStack_2c = 0.0;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
      }
      else {
        local_18 = (undefined4 *)((uint)local_18._1_3_ << 8);
        fStack_2c = param_2;
        local_1c = local_14;
      }
      (**(code **)(*param_1 + 0x3c))();
      FID_conflict__free(local_54);
    }
    if (param_1 != (int *)0x0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_1)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

