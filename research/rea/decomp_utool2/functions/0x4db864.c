// rea decompile_all
// name: FUN_004db864
// address: 0x4db864
// body: available
// range: 0x4db864-0x4db968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004db864(double param_1,double *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double local_14;
  undefined8 local_c;
  
  uVar1 = __ctrlfp(0,0);
  __ctrlfp(DAT_00c76490,0xffff);
  uVar4 = SUB84(param_1,0);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = -NAN;
    iVar2 = __sptype(uVar4,uVar5);
    if (0 < iVar2) {
      if (iVar2 < 3) {
        *param_2 = param_1;
        local_14 = __copysign(0.0,param_1);
        __ctrlfp(uVar1,0xffff);
        goto LAB_004db95f;
      }
      if (iVar2 == 3) {
        *param_2 = param_1;
        return (float10)param_1;
      }
    }
    *param_2 = param_1 + 1.0;
    fVar3 = (float10)__except1(8,0x1c,uVar4,uVar5,param_1 + 1.0,uVar1);
  }
  else {
    fVar3 = (float10)FUN_004e43e8(uVar4,uVar5);
    *param_2 = (double)fVar3;
    fVar3 = (float10)param_1 - fVar3;
    local_14 = (double)fVar3;
    if ((float10)0 == fVar3) {
      local_c._6_2_ = (ushort)((ulonglong)(double)fVar3 >> 0x30);
      local_c = (double)CONCAT26(local_c._6_2_ | param_1._6_2_ & 0x8000,SUB86((double)fVar3,0));
      local_14 = local_c;
    }
    __ctrlfp(uVar1,0xffff);
LAB_004db95f:
    fVar3 = (float10)local_14;
  }
  return fVar3;
}

