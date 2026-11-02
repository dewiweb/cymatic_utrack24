// rea decompile_all
// name: FUN_0041f237
// address: 0x41f237
// body: available
// range: 0x41f237-0x41f3a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041f237(undefined4 *param_1,short param_2,int param_3,uint param_4,int param_5,int param_6
                 )

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar8 = param_1[1];
  uVar7 = iVar8 + -1 + param_3 & -iVar8;
  uVar3 = -iVar8 & param_4;
  uVar6 = uVar7;
  if ((int)uVar7 <= (int)uVar3) goto LAB_0041f35d;
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar4 = uVar1 & 7;
  if (uVar7 != uVar3 + iVar8) {
    return;
  }
  uVar5 = uVar3;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
LAB_0041f290:
      if ((*(int *)(param_5 + 0x1c) == param_6) && (*(int *)(param_5 + 0x10) < 1)) {
        if ((uVar1 & 0x10) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if ((*(int *)(param_6 + 0x1c) == param_5) && (*(int *)(param_5 + 0x14) == (int)param_2)) {
        if ((uVar1 & 0x20) == 0) {
          return;
        }
        if ((int)(param_4 - param_3) < (int)param_1[2]) {
          return;
        }
      }
      if (uVar4 == 1) goto LAB_0041f2eb;
    }
    else if (uVar4 != 4) {
      if (uVar4 != 5) {
        return;
      }
      goto LAB_0041f290;
    }
    uVar5 = (int)(param_3 + -1 + param_4) / 2 + param_1[2] & -iVar8;
  }
LAB_0041f2eb:
  if ((int)uVar5 < 0) {
LAB_0041f31a:
    uVar7 = uVar3;
  }
  else {
    uVar6 = uVar5;
    if ((int)param_1[0x1a] <= (int)uVar5 >> ((byte)*param_1 & 0x1f)) {
      uVar6 = uVar3;
    }
    if (uVar6 == uVar7) goto LAB_0041f31a;
  }
  iVar8 = (int)uVar7 >> ((byte)*param_1 & 0x1f);
  pbVar9 = (byte *)((((int)param_2 >> 3) - param_1[0x1c] * iVar8) + param_1[0xf]);
  if (0 < (int)param_1[0x1c]) {
    pbVar9 = pbVar9 + (param_1[0x1a] + -1) * param_1[0x1c];
  }
  if (((-1 < iVar8) && (iVar8 < (int)param_1[0x1a])) &&
     ((*pbVar9 & (byte)(0x80 >> ((byte)param_2 & 7))) != 0)) {
    return;
  }
LAB_0041f35d:
  iVar8 = (int)uVar6 >> ((byte)*param_1 & 0x1f);
  if ((-1 < iVar8) && (iVar8 < (int)param_1[0x1a])) {
    iVar2 = param_1[0x1c];
    pbVar9 = (byte *)((((int)param_2 >> 3) - iVar2 * iVar8) + param_1[0xf]);
    if (0 < iVar2) {
      pbVar9 = pbVar9 + (param_1[0x1a] + -1) * iVar2;
    }
    *pbVar9 = *pbVar9 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  return;
}

