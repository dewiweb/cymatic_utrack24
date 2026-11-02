// rea decompile_all
// name: FUN_0041f049
// address: 0x41f049
// body: available
// range: 0x41f049-0x41f1b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041f049(undefined4 *param_1,short param_2,int param_3,uint param_4,int param_5,int param_6
                 )

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  uVar5 = -iVar9;
  uVar7 = iVar9 + -1 + param_3 & uVar5;
  uVar6 = uVar5 & param_4;
  if ((int)uVar7 <= (int)uVar6) goto LAB_0041f164;
  uVar8 = *(uint *)(param_5 + 0xc);
  uVar2 = uVar8 & 7;
  if (uVar7 != iVar9 + uVar6) {
    return;
  }
  uVar3 = uVar6;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
LAB_0041f0a0:
      if ((*(int *)(param_5 + 0x1c) == param_6) && (*(int *)(param_5 + 0x10) < 1)) {
        if ((uVar8 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(int *)(param_6 + 0x1c) == param_5) && (*(int *)(param_5 + 0x14) == (int)param_2)) {
        if ((uVar8 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar2 == 1) goto LAB_0041f0fa;
    }
    else if (uVar2 != 4) {
      if (uVar2 != 5) {
        return;
      }
      goto LAB_0041f0a0;
    }
    uVar3 = (int)(param_3 + -1 + param_4) / 2 + param_1[2] & uVar5;
  }
LAB_0041f0fa:
  uVar5 = uVar7;
  if ((int)uVar3 < 0) {
LAB_0041f12a:
    uVar3 = uVar5;
    uVar8 = uVar6;
  }
  else {
    if ((int)(uint)*(ushort *)(param_1 + 0xe) <= (int)uVar3 >> ((byte)*param_1 & 0x1f)) {
      uVar3 = uVar6;
    }
    uVar5 = uVar3;
    uVar8 = uVar7;
    if (uVar3 == uVar7) goto LAB_0041f12a;
  }
  uVar7 = uVar3;
  iVar9 = (int)uVar8 >> ((byte)*param_1 & 0x1f);
  if (((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0xe))) &&
     ((*(byte *)((int)(short)(iVar9 >> 3) + param_1[0x25] + param_1[0xf]) &
      (byte)(0x80 >> ((byte)iVar9 & 7))) != 0)) {
    return;
  }
LAB_0041f164:
  iVar9 = (int)uVar7 >> ((byte)*param_1 & 0x1f);
  if ((-1 < iVar9) && (iVar9 < (int)(uint)*(ushort *)(param_1 + 0xe))) {
    sVar1 = (short)(iVar9 >> 3);
    if (sVar1 < *(short *)((int)param_1 + 0x9e)) {
      *(short *)((int)param_1 + 0x9e) = sVar1;
    }
    if (*(short *)(param_1 + 0x28) < sVar1) {
      *(short *)(param_1 + 0x28) = sVar1;
    }
    pbVar4 = (byte *)((int)sVar1 + param_1[0x25] + param_1[0xf]);
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)iVar9 & 7));
  }
  return;
}

