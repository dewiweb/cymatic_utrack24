// rea decompile_all
// name: FUN_006dc060
// address: 0x6dc060
// body: available
// range: 0x6dc060-0x6dc17e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dc060(undefined4 param_1,undefined4 *param_2,float param_3,int *param_4,float *param_5)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727b92;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((char)param_2 == '\0') {
    ExceptionList = &local_10;
    FUN_006dc390(&param_2);
    local_18 = param_3;
    local_8 = 0;
    fVar5 = (float)param_2[5];
    if ((int)param_3 < 1) {
      local_18 = SUB84((double)(fVar5 * 1.3) + 6755399441055744.0,0);
      fVar5 = local_18;
    }
    else if ((float)(int)param_3 / 1.3 < fVar5) {
      FUN_00680a80(uVar4);
    }
    pfVar3 = param_5;
    *param_5 = local_18;
    FUN_006831f0(param_1);
    FUN_004363b0();
    *param_4 = (int)fVar5 + (int)*pfVar3 * 2;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_2 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*param_2)(1);
      }
    }
    ExceptionList = local_10;
    return;
  }
  *param_4 = 0x32;
  if (0 < (int)param_3) {
    *param_5 = (float)((int)param_3 / 2);
    return;
  }
  *param_5 = 1.4013e-44;
  return;
}

