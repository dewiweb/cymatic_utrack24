// rea decompile_all
// name: FUN_005b2fd8
// address: 0x5b2fd8
// body: available
// range: 0x5b2fd8-0x5b322a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005b2fd8(int param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double local_14;
  int local_c;
  int local_8;
  
  uVar2 = __ctrlfp(0x133f,0xffff);
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) &&
       (((param_4._2_2_ & 0x7ff8) != 0x7ff0 || (((param_4 & 0x7ffff) == 0 && (param_3 == 0)))))) {
      if (((param_2._2_2_ & 0x7ff8) != 0x7ff8) && ((param_4._2_2_ & 0x7ff8) != 0x7ff8)) {
        __ctrlfp(uVar2,0xffff);
        return (float10)_DAT_009565a0;
      }
      fVar4 = (float10)__handle_qnan2();
      return fVar4;
    }
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
            (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    dVar8 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar6 = 8;
  }
  else {
    dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    if (dVar7 < 0.0) {
      dVar7 = -dVar7;
    }
    dVar8 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    if (dVar8 < 0.0) {
      dVar8 = -dVar8;
    }
    local_14 = dVar7;
    if (dVar7 < dVar8) {
      local_14 = dVar8;
    }
    if (local_14 == 0.0) {
      __ctrlfp(uVar2,0xffff);
      return (float10)0;
    }
    dVar7 = dVar7 / local_14;
    dVar8 = dVar8 / local_14;
    fVar4 = (float10)FUN_005afec4(dVar8 * dVar8 + dVar7 * dVar7,&local_c);
    fVar4 = (float10)FUN_005b9c28((double)fVar4);
    fVar5 = (float10)FUN_005b9c28(SUB84(local_14,0),(int)((ulonglong)local_14 >> 0x20),&local_8);
    dVar1 = (double)(fVar5 * (float10)(double)fVar4);
    iVar3 = FUN_005b9bb0(dVar1);
    local_c = iVar3 + local_8 + local_c;
    if (local_c < 0x401) {
      if (local_c < -0x3fd) {
        fVar4 = (float10)__set_exp(dVar1,local_c + 0x600);
        dVar1 = (double)fVar4;
        uVar6 = 0x12;
      }
      else {
        fVar4 = (float10)__set_exp(dVar1,local_c);
        dVar1 = (double)fVar4;
        if ((uVar2 & 0x20) != 0) {
          __ctrlfp(uVar2,0xffff);
          return (float10)dVar1;
        }
        uVar6 = 0x10;
      }
    }
    else {
      fVar4 = (float10)__set_exp(dVar1,local_c + -0x600);
      dVar1 = (double)fVar4;
      uVar6 = 0x11;
    }
  }
  fVar4 = (float10)__except2(uVar6,param_5,dVar7,dVar8,dVar1,uVar2);
  return fVar4;
}

