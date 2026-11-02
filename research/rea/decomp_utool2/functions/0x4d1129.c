// rea decompile_all
// name: FUN_004d1129
// address: 0x4d1129
// body: available
// range: 0x4d1129-0x4d13ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004d1129(int param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_14;
  int local_10;
  undefined8 local_c;
  
  uVar3 = __ctrlfp(0x133f,0xffff);
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2 & 0x7fffffff) != 0x7ff00000) || (param_1 != 0)) &&
       (((param_4 & 0x7fffffff) != 0x7ff00000 || (param_3 != 0)))) {
      local_c = (double)CONCAT44(0x7ff8,(undefined4)local_c);
      if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0))))
         || (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))
         ) {
        dVar8 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
        dVar2 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
        dVar1 = dVar8 + dVar2;
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
        uVar7 = 8;
        goto LAB_004d1368;
      }
      if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
        fVar5 = (float10)FUN_004dab40(param_1,(int)(CONCAT26(param_2._2_2_,
                                                             CONCAT24((undefined2)param_2,param_1))
                                                   >> 0x20),param_3,
                                      (int)(CONCAT26(param_4._2_2_,
                                                     CONCAT24((undefined2)param_4,param_3)) >> 0x20)
                                     );
        return fVar5;
      }
      __ctrlfp(uVar3,0xffff);
    }
    fVar5 = (float10)INFINITY;
  }
  else {
    dVar8 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    if (dVar8 < 0.0) {
      dVar8 = -dVar8;
    }
    dVar1 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    if (dVar1 < 0.0) {
      dVar1 = -dVar1;
    }
    local_c = dVar8;
    if (dVar8 < dVar1) {
      local_c = dVar1;
    }
    if (local_c == 0.0) {
      __ctrlfp(uVar3,0xffff);
      return (float10)0;
    }
    dVar8 = dVar8 / local_c;
    dVar1 = dVar1 / local_c;
    fVar5 = (float10)FUN_004d7180(&local_14);
    fVar5 = (float10)FUN_004daf32((double)fVar5);
    fVar6 = (float10)FUN_004daf32(SUB84(local_c,0),(int)((ulonglong)local_c >> 0x20),&local_10);
    local_c = (double)(fVar6 * (float10)(double)fVar5);
    iVar4 = FUN_004db006((double)(fVar6 * (float10)(double)fVar5));
    local_14 = iVar4 + local_10 + local_14;
    uVar7 = SUB84(local_c,0);
    uVar10 = (undefined4)((ulonglong)local_c >> 0x20);
    param_3 = SUB84(dVar1,0);
    uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (local_14 < 0x401) {
      if (local_14 < -0x3fd) {
        fVar5 = (float10)__set_exp(uVar7,uVar10,local_14 + 0x600);
        dVar1 = (double)fVar5;
        uVar7 = 0x12;
      }
      else {
        fVar5 = (float10)__set_exp(uVar7,uVar10,local_14);
        if ((uVar3 & 0x20) != 0) {
          __ctrlfp(uVar3,0xffff);
          return (float10)(double)fVar5;
        }
        dVar1 = (double)fVar5;
        uVar7 = 0x10;
      }
    }
    else {
      fVar5 = (float10)__set_exp(uVar7,uVar10,local_14 + -0x600);
      dVar1 = (double)fVar5;
      uVar7 = 0x11;
    }
LAB_004d1368:
    fVar5 = (float10)FUN_004da87e(uVar7,param_5,dVar8,param_3,uVar9,dVar1,uVar3);
  }
  return fVar5;
}

