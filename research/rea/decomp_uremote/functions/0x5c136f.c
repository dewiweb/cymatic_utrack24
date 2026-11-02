// rea decompile_all
// name: FUN_005c136f
// address: 0x5c136f
// body: available
// range: 0x5c136f-0x5c147f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c136f(double param_1,double *param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_c;
  
  uVar2 = __ctrlfp(0,0);
  __ctrlfp(DAT_00956ea0,0xffff);
  uVar5 = SUB84(param_1,0);
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = _DAT_009565a8;
    iVar3 = __sptype(uVar5,uVar6);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        *param_2 = param_1;
        local_c = __copysign(0.0,param_1);
        __ctrlfp(uVar2,0xffff);
        goto LAB_005c1478;
      }
      if (iVar3 == 3) {
        *param_2 = param_1;
        fVar4 = (float10)__handle_qnan1(0x1c,uVar5,uVar6,uVar2);
        return fVar4;
      }
    }
    *param_2 = param_1 + 1.0;
    fVar4 = (float10)__except1(8,0x1c,uVar5,uVar6,param_1 + 1.0,uVar2);
  }
  else {
    fVar4 = (float10)__frnd(uVar5,uVar6);
    *param_2 = (double)fVar4;
    dVar1 = (double)((float10)param_1 - fVar4);
    local_c = dVar1;
    if (dVar1 == 0.0) {
      local_c._6_2_ = (ushort)((ulonglong)dVar1 >> 0x30);
      local_c = (double)CONCAT26(local_c._6_2_ | param_1._6_2_ & 0x8000,SUB86(dVar1,0));
    }
    __ctrlfp(uVar2,0xffff);
LAB_005c1478:
    fVar4 = (float10)local_c;
  }
  return fVar4;
}

