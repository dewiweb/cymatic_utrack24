// rea decompile_all
// name: FUN_00688c50
// address: 0x688c50
// body: available
// range: 0x688c50-0x688e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688c50(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *lParam;
  wint_t wVar3;
  wint_t wVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(in_ECX + 0x30);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x28) + iVar1 * 4);
      uVar11 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar11) {
        iVar9 = uVar11 * 0xc;
        do {
          if (uVar11 < *(uint *)(iVar2 + 0xc)) {
            piVar5 = (int *)(*(int *)(iVar2 + 4) + iVar9);
            iVar7 = *piVar5;
            iVar10 = piVar5[1];
            iVar6 = piVar5[2];
          }
          else {
            iVar7 = 0;
            iVar10 = 0;
            iVar6 = 0;
          }
          if ((param_1[1] == iVar10) &&
             (((param_1[2] == iVar6 || (param_1[2] == 0)) || (iVar6 == 0)))) {
            iVar10 = *param_1;
            if (iVar10 == iVar7) {
LAB_00688d13:
              if (uVar11 < *(uint *)(iVar2 + 0xc)) {
                iVar7 = *(uint *)(iVar2 + 0xc) - 1;
                iVar10 = *(int *)(iVar2 + 4) + iVar9;
                *(int *)(iVar2 + 0xc) = iVar7;
                iVar7 = iVar7 - uVar11;
                if (0 < iVar7) {
                  FUN_004c1df0(iVar10,iVar10 + 0xc,iVar7 * 0xc);
                }
                iVar7 = *(int *)(iVar2 + 0xc);
                iVar10 = 0;
                if (0 < iVar7 * 2) {
                  iVar10 = iVar7 * 2;
                }
                if (iVar10 < *(int *)(iVar2 + 8)) {
                  if (iVar7 < 5) {
                    iVar7 = 5;
                  }
                  if (iVar7 < *(int *)(iVar2 + 8)) {
                    FUN_0041c930(iVar7);
                  }
                }
              }
              if (0 < *(int *)(in_ECX + 0x1c)) {
                piVar5 = (int *)(*(int *)(in_ECX + 0xc) + 0xc);
                LOCK();
                iVar7 = *piVar5;
                if (iVar7 == 0) {
                  *piVar5 = 1;
                  iVar7 = 0;
                }
                UNLOCK();
                if (iVar7 == 0) {
                  lParam = *(undefined4 **)(in_ECX + 0xc);
                  if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
                    LOCK();
                    lParam[1] = lParam[1] + 1;
                    UNLOCK();
                    BVar8 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
                    if (BVar8 != 0) goto LAB_00688de0;
                  }
                  if (lParam != (undefined4 *)0x0) {
                    piVar5 = lParam + 1;
                    LOCK();
                    *piVar5 = *piVar5 + 1;
                    UNLOCK();
                    LOCK();
                    iVar7 = *piVar5;
                    *piVar5 = *piVar5 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)*lParam)(1);
                    }
                  }
                  LOCK();
                  *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
                  UNLOCK();
                }
              }
            }
            else if ((iVar10 < 0x100) && (iVar7 < 0x100)) {
              wVar3 = _towlower((wint_t)iVar10);
              wVar4 = _towlower((wint_t)iVar7);
              if (wVar3 == wVar4) goto LAB_00688d13;
            }
          }
LAB_00688de0:
          iVar9 = iVar9 + -0xc;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
    }
  }
  return;
}

