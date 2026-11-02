// rea decompile_all
// name: FUN_004abd91
// address: 0x4abd91
// body: available
// range: 0x4abd91-0x4abf38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abd91(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *_Dst;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *unaff_ESI;
  int iVar8;
  undefined1 uStack_25;
  size_t local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  piVar6 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar6 + -1;
      if (0 < local_10) {
        iVar8 = 0;
        puVar7 = (uint *)(piVar6 + 1);
        uVar4 = *puVar7;
        unaff_ESI[1] = (param_1[2] + local_14) * ((int *)*unaff_ESI)[2] + *(int *)*unaff_ESI;
        while( true ) {
          local_10 = local_10 + -1;
          iVar5 = (int)uVar4 >> 8;
          if (local_10 < 0) break;
          uVar2 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar3 = *puVar7;
          if ((int)uVar3 >> 8 == iVar5) {
            iVar8 = iVar8 + (uVar3 - uVar4) * uVar2;
            uVar4 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar4 & 0xff)) * uVar2 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                *(undefined1 *)(*(int *)(*unaff_ESI + 0xc) * iVar5 + unaff_ESI[1]) =
                     *(undefined1 *)((int)unaff_ESI + 0xb);
              }
              else {
                *(undefined1 *)(*(int *)(*unaff_ESI + 0xc) * iVar5 + unaff_ESI[1]) =
                     *(undefined1 *)((int)unaff_ESI + 0xb);
              }
            }
            if (0 < (int)uVar2) {
              local_18 = ((int)uVar3 >> 8) - (iVar5 + 1);
              if (0 < (int)local_18) {
                uVar4 = ((uint)unaff_ESI[2] >> 8 & 0xff00ff) * (uVar2 + 1);
                iVar8 = *(int *)(*unaff_ESI + 0xc);
                _Dst = (undefined1 *)(iVar8 * (iVar5 + 1) + unaff_ESI[1]);
                if (iVar8 == 1) {
                  _memset(_Dst,uVar4 >> 0x18,local_18);
                }
                else {
                  do {
                    uStack_25 = (undefined1)(uVar4 >> 0x18);
                    *_Dst = uStack_25;
                    _Dst = _Dst + iVar8;
                    local_18 = local_18 - 1;
                  } while (0 < (int)local_18);
                }
              }
            }
            iVar8 = (uVar3 & 0xff) * uVar2;
            uVar4 = uVar3;
          }
        }
        if (0 < iVar8 >> 8) {
          *(undefined1 *)(*(int *)(*unaff_ESI + 0xc) * iVar5 + unaff_ESI[1]) =
               *(undefined1 *)((int)unaff_ESI + 0xb);
        }
      }
      local_14 = local_14 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

