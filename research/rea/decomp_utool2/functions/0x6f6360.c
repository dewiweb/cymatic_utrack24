// rea decompile_all
// name: FUN_006f6360
// address: 0x6f6360
// body: available
// range: 0x6f6360-0x6f664f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006f6360(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 uVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_30;
  float10 local_28;
  
  if ((int)param_2 < 0x7ff00000) {
    if (param_2 < 0x40ff4000) {
      uVar5 = (int)ROUND(_DAT_00d04170 * (float10)(double)CONCAT44(param_2,param_1)) | 1;
      fVar6 = (float10)(int)uVar5;
      local_28 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)1.570796325802803 * fVar6)
                  - (float10)9.920935739593517e-10 * fVar6) - (float10)5.721188709663575e-18 * fVar6
                 ) - (float10)1.6446256936324258e-26 * fVar6;
    }
    else {
      uVar5 = param_2 >> 0x14 & 0x7ff;
      fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
      uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
      uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
      iVar4 = (int)(uVar5 - 0x41c) / 0x19;
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      fVar7 = fVar7 - fVar6;
      if ((int)(iVar4 * -0x19 + -0x41c + uVar5) < 0x11) {
        local_28 = _DAT_00d04140;
      }
      else {
        iVar3 = iVar4 * 8;
        iVar1 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        local_28 = (float10)*(double *)(&DAT_00d03e08 + iVar1) * fVar6 +
                   fVar7 * (float10)*(double *)(&DAT_00d03e00 + iVar3);
        uStack_5c = (uint)((unkuint10)local_28 >> 0x20);
        uStack_58 = (undefined2)((unkuint10)local_28 >> 0x40);
        local_28 = local_28 -
                   (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20);
      }
      fVar8 = (float10)*(double *)(&DAT_00d03e08 + iVar4 * 8) * fVar7 +
              (float10)*(double *)(&DAT_00d03e10 + iVar4 * 8) * fVar6;
      local_28 = local_28 +
                 fVar6 * (float10)*(double *)(&DAT_00d03e08 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_00d03e00 + iVar4 * 8) * fVar7;
      dVar2 = (double)(local_28 + fVar8);
      iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
      uVar9 = ___common_srl(dVar2,iVar3);
      uVar5 = (uint)uVar9 | 1;
      local_30 = (double)___common_sll(uVar5,(int)((ulonglong)uVar9 >> 0x20),iVar3);
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      local_28 = _DAT_00d04160 *
                 ((float10)*(double *)(&DAT_00d03e38 + iVar4 * 8) * fVar6 +
                  fVar7 * (float10)*(double *)(&DAT_00d03e30 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_00d03e30 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_00d03e28 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_00d03e20 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_00d03e28 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_00d03e20 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_00d03e18 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_00d03e10 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_00d03e18 + iVar4 * 8) * fVar6 +
                 fVar8 + (local_28 - (float10)local_30));
    }
    *param_3 = (double)local_28;
    return ~(uVar5 << 0x1e) & 0x80000000;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
  return 0;
}

