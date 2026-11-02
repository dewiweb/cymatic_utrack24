// rea decompile_all
// name: FUN_004abf39
// address: 0x4abf39
// body: available
// range: 0x4abf39-0x4ac14e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abf39(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *_Dst;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int *unaff_ESI;
  int local_14;
  size_t local_8;
  
  local_14 = 0;
  piVar11 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      iVar2 = *piVar11;
      if (0 < iVar2 + -1) {
        puVar12 = (uint *)(piVar11 + 1);
        uVar8 = *puVar12;
        iVar9 = 0;
        unaff_ESI[1] = (param_1[2] + local_14) * ((int *)*unaff_ESI)[2] + *(int *)*unaff_ESI;
        for (iVar2 = iVar2 + -2; iVar3 = (int)uVar8 >> 8, -1 < iVar2; iVar2 = iVar2 + -1) {
          uVar4 = puVar12[1];
          puVar12 = puVar12 + 2;
          uVar5 = *puVar12;
          if ((int)uVar5 >> 8 == iVar3) {
            iVar9 = iVar9 + (uVar5 - uVar8) * uVar4;
          }
          else {
            iVar9 = (int)((0x100 - (uVar8 & 0xff)) * uVar4 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                pbVar7 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar3 + unaff_ESI[1]);
                uVar8 = (uint)*(byte *)((int)unaff_ESI + 0xb) * (iVar9 + 1);
                *pbVar7 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar7 >> 8) + (char)(uVar8 >> 8);
              }
              else {
                pbVar7 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar3 + unaff_ESI[1]);
                *pbVar7 = (char)((0x100 - (uint)*(byte *)((int)unaff_ESI + 0xb)) * (uint)*pbVar7 >>
                                8) + *(char *)((int)unaff_ESI + 0xb);
              }
            }
            if (0 < (int)uVar4) {
              local_8 = ((int)uVar5 >> 8) - (iVar3 + 1);
              if (0 < (int)local_8) {
                uVar8 = unaff_ESI[2];
                iVar10 = uVar4 + 1;
                uVar6 = (uVar8 >> 8 & 0xff00ff) * iVar10;
                iVar9 = *(int *)(*unaff_ESI + 0xc);
                _Dst = (undefined1 *)(iVar9 * (iVar3 + 1) + unaff_ESI[1]);
                if ((char)(uVar6 >> 0x18) == -1) {
                  if (iVar9 == 1) {
                    _memset(_Dst,uVar6 >> 0x18,local_8);
                  }
                  else {
                    do {
                      *_Dst = 0xff;
                      _Dst = _Dst + iVar9;
                      local_8 = local_8 - 1;
                    } while (0 < (int)local_8);
                  }
                }
                else {
                  FUN_004be407(((uVar8 & 0xff00ff) * iVar10 >> 8 ^
                               (uVar8 >> 8 & 0xffff00ff) * iVar10) & 0xff00ff ^ uVar6,local_8);
                }
              }
            }
            iVar9 = (uVar5 & 0xff) * uVar4;
          }
          uVar8 = uVar5;
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          pbVar7 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar3 + unaff_ESI[1]);
          uVar8 = (uint)*(byte *)((int)unaff_ESI + 0xb);
          if (iVar9 < 0xff) {
            uVar8 = uVar8 * (iVar9 + 1) >> 8;
          }
          *pbVar7 = (char)((0x100 - uVar8) * (uint)*pbVar7 >> 8) + (char)uVar8;
        }
      }
      local_14 = local_14 + 1;
      piVar11 = piVar11 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

