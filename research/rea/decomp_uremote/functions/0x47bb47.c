// rea decompile_all
// name: FUN_0047bb47
// address: 0x47bb47
// body: available
// range: 0x47bb47-0x47bf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047bb47(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8,float *param_9)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  ushort uVar8;
  undefined2 uVar9;
  int iVar7;
  float *in_ECX;
  float *in_EDX;
  
  uVar8 = (ushort)((uint)in_EAX >> 0x10);
  iVar7 = (uint)uVar8 << 0x10;
  if ((param_5 == param_3) &&
     (iVar7 = CONCAT22(uVar8,(ushort)(param_6 < param_4) << 8 |
                             (ushort)(NAN(param_6) || NAN(param_4)) << 10 |
                             (ushort)(param_6 == param_4) << 0xe), param_6 == param_4)) {
    *in_EDX = param_3;
    *in_ECX = param_4;
    *param_9 = 0.0;
    return CONCAT31((int3)((uint)iVar7 >> 8),1);
  }
  fVar2 = param_3 - param_1;
  fVar3 = param_4 - param_2;
  param_7 = param_7 - param_5;
  param_8 = param_8 - param_6;
  fVar5 = fVar2 * param_8 - fVar3 * param_7;
  uVar8 = (ushort)((uint)iVar7 >> 0x10);
  if (fVar5 == 0.0) {
    iVar7 = (uint)uVar8 << 0x10;
    if ((fVar2 != 0.0) ||
       (iVar7 = CONCAT22(uVar8,(ushort)(0.0 < fVar3) << 8 | (ushort)NAN(fVar3) << 10 |
                               (ushort)(fVar3 == 0.0) << 0xe), fVar3 != 0.0)) {
      uVar8 = (ushort)((uint)iVar7 >> 0x10);
      iVar7 = (uint)uVar8 << 0x10;
      if ((param_7 != 0.0) ||
         (iVar7 = CONCAT22(uVar8,(ushort)(0.0 < param_8) << 8 | (ushort)NAN(param_8) << 10 |
                                 (ushort)(param_8 == 0.0) << 0xe), param_8 != 0.0)) {
        uVar9 = (undefined2)((uint)iVar7 >> 0x10);
        if (fVar3 == 0.0) {
          if (param_8 != 0.0) {
            param_8 = (param_2 - param_6) / param_8;
            param_5 = param_8 * param_7 + param_5;
            *in_EDX = param_5;
            *in_ECX = param_2;
            fVar2 = (param_5 - param_3) * (param_5 - param_3);
            *param_9 = fVar2;
            if (param_1 < param_3 == param_5 < param_3) {
              *param_9 = -fVar2;
            }
            if (0.0 < param_8 == (param_8 == 0.0)) {
              return 0;
            }
            bVar1 = 1.0 < param_8;
            goto LAB_0047bcb3;
          }
LAB_0047bccb:
          if (fVar3 != 0.0) {
            fVar3 = (param_6 - param_2) / fVar3;
            *in_EDX = fVar2 * fVar3 + param_1;
            *in_ECX = param_6;
            fVar2 = (fVar3 - 1.0) * fVar2;
            fVar2 = fVar2 * fVar2;
            *param_9 = fVar2;
            if (fVar3 < 1.0) {
              *param_9 = -fVar2;
            }
            if (NAN(fVar3) || 0.0 < fVar3 == (fVar3 == 0.0)) {
              return 0;
            }
            if (fVar3 < 1.0 == (fVar3 == 1.0)) {
              return 0;
            }
            return 1;
          }
        }
        else if (param_8 == 0.0) goto LAB_0047bccb;
        bVar1 = param_7 == 0.0;
        iVar7 = CONCAT22(uVar9,(ushort)(0.0 < param_7) << 8 | (ushort)NAN(param_7) << 10 |
                               (ushort)bVar1 << 0xe);
        if (fVar2 == 0.0) {
          if (!bVar1) {
            param_7 = (param_1 - param_5) / param_7;
            *in_EDX = param_1;
            param_6 = param_7 * param_8 + param_6;
            *in_ECX = param_6;
            fVar2 = (param_6 - param_4) * (param_6 - param_4);
            *param_9 = fVar2;
            if (param_2 < param_4 == param_6 < param_4) {
              *param_9 = -fVar2;
            }
            if (0.0 < param_7 == (param_7 == 0.0)) {
              return 0;
            }
            bVar1 = 1.0 < param_7;
            goto LAB_0047bcb3;
          }
        }
        else if (!bVar1) goto LAB_0047be62;
        iVar7 = CONCAT22(uVar9,(ushort)(0.0 < fVar2) << 8 | (ushort)NAN(fVar2) << 10 |
                               (ushort)(fVar2 == 0.0) << 0xe);
        if (fVar2 != 0.0) {
          fVar2 = (param_5 - param_1) / fVar2;
          *in_EDX = param_5;
          *in_ECX = fVar3 * fVar2 + param_2;
          fVar3 = (fVar2 - 1.0) * fVar3;
          fVar3 = fVar3 * fVar3;
          *param_9 = fVar3;
          if (fVar2 < 1.0) {
            *param_9 = -fVar3;
          }
          if (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) {
            return 0;
          }
          bVar1 = 1.0 < fVar2;
LAB_0047bcb3:
          if (bVar1) {
            return 0;
          }
          return 1;
        }
      }
    }
LAB_0047be62:
    *in_EDX = (param_3 + param_5) * 0.5;
    *in_ECX = (param_4 + param_6) * 0.5;
LAB_0047be89:
    *param_9 = 0.0;
  }
  else {
    fVar6 = (param_7 * (param_2 - param_6) - param_8 * (param_1 - param_5)) / fVar5;
    *in_EDX = fVar2 * fVar6 + param_1;
    *in_ECX = fVar3 * fVar6 + param_2;
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      fVar4 = fVar2 * (param_2 - param_6) - fVar3 * (param_1 - param_5);
      iVar7 = (uint)uVar8 << 0x10;
      if ((!NAN(fVar4) && 0.0 < fVar4 != (fVar4 == 0.0)) &&
         (iVar7 = CONCAT22(uVar8,(ushort)(fVar5 < fVar4) << 8 |
                                 (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                                 (ushort)(fVar5 == fVar4) << 0xe), fVar5 < fVar4 == 0)) {
        iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),1);
        goto LAB_0047be89;
      }
      uVar8 = (ushort)((uint)iVar7 >> 0x10);
    }
    fVar2 = (fVar3 * fVar3 + fVar2 * fVar2) * (fVar6 - 1.0) * (fVar6 - 1.0);
    *param_9 = fVar2;
    iVar7 = CONCAT22(uVar8,(ushort)(fVar6 < 1.0) << 8 | (ushort)NAN(fVar6) << 10 |
                           (ushort)(fVar6 == 1.0) << 0xe);
    if (fVar6 < 1.0) {
      *param_9 = -fVar2;
    }
  }
  return iVar7;
}

