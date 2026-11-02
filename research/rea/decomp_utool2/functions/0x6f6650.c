// rea decompile_all
// name: FUN_006f6650
// address: 0x6f6650
// body: available
// range: 0x6f6650-0x6f6959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006f6650(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_40;
  float10 local_38;
  
  if (0x7fefffff < (int)param_2) {
    *(undefined4 *)param_3 = 0xffffffff;
    *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
    return 0;
  }
  if (param_2 < 0x40ff4000) {
    uVar4 = (int)ROUND(_DAT_00d041b0 * (float10)(double)CONCAT44(param_2,param_1)) + 1U & 0xfffffffe
    ;
    fVar6 = (float10)(int)uVar4;
    local_38 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)0.7853981629014015 * fVar6)
                - (float10)4.960467869796759e-10 * fVar6) - (float10)2.8605943548317875e-18 * fVar6)
               - fVar6 * (float10)8.223128468162129e-27;
  }
  else {
    uVar4 = param_2 >> 0x14 & 0x7ff;
    fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
    uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
    iVar5 = (int)(uVar4 - 0x41c) / 0x19;
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    fVar7 = fVar7 - fVar6;
    if ((int)(iVar5 * -0x19 + -0x41c + uVar4) < 0x11) {
      local_38 = _DAT_00d04150;
    }
    else {
      iVar3 = iVar5 * 8;
      iVar1 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      local_38 = (float10)*(double *)(&DAT_00d03fa8 + iVar1) * fVar6 +
                 fVar7 * (float10)*(double *)(&DAT_00d03fa0 + iVar3);
      uStack_5c = (uint)((unkuint10)local_38 >> 0x20);
      uStack_58 = (undefined2)((unkuint10)local_38 >> 0x40);
      local_38 = local_38 - (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20)
      ;
    }
    fVar8 = fVar6 * (float10)*(double *)(&DAT_00d03fb0 + iVar5 * 8) +
            fVar7 * (float10)*(double *)(&DAT_00d03fa8 + iVar5 * 8);
    local_38 = local_38 +
               fVar6 * (float10)*(double *)(&DAT_00d03fa8 + iVar5 * 8) +
               (float10)*(double *)(&DAT_00d03fa0 + iVar5 * 8) * fVar7;
    dVar2 = (double)(local_38 + fVar8);
    iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
    lVar9 = ___common_srl(dVar2,iVar3);
    uVar4 = (uint)(lVar9 + 1) & 0xfffffffe;
    local_40 = (double)___common_sll(uVar4,(int)((ulonglong)(lVar9 + 1) >> 0x20),iVar3);
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    local_38 = (fVar6 * (float10)*(double *)(&DAT_00d03fd0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_00d03fc8 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_00d03fc8 + iVar5 * 8) +
                (float10)*(double *)(&DAT_00d03fc0 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_00d03fc0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_00d03fb8 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_00d03fb0 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_00d03fb8 + iVar5 * 8) * fVar6 +
                (local_38 - (float10)local_40) + fVar8 +
               (float10)*(double *)(&DAT_00d03fd0 + iVar5 * 8) * fVar7 +
               fVar6 * (float10)*(double *)(&DAT_00d03fd8 + iVar5 * 8)) * _DAT_00d041a0;
  }
  iVar5 = (int)uVar4 >> 1;
  if (_DAT_00d041a0 < local_38) {
    iVar5 = iVar5 + -3;
    local_38 = local_38 - _DAT_00d04160;
  }
  *param_3 = (double)local_38;
  return iVar5;
}

