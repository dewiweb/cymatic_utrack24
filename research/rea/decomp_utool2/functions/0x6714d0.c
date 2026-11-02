// rea decompile_all
// name: FUN_006714d0
// address: 0x6714d0
// body: available
// range: 0x6714d0-0x67153b inclusive
// range: 0x671540-0x671729 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006714d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar11 = *(int *)(param_1 + 0xf8) - 1;
  iVar13 = *(int *)(iVar1 + 0x10);
  if (iVar13 < *(int *)(iVar1 + 0x14)) {
    do {
      for (uVar10 = *(uint *)(iVar1 + 0xc); uVar10 <= uVar11; uVar10 = uVar10 + 1) {
        iVar12 = 0;
        local_20 = 0;
        if (0 < *(int *)(param_1 + 0xe4)) {
          piVar6 = (int *)(param_1 + 0xe8);
          do {
            iVar3 = *piVar6;
            if (uVar10 < uVar11) {
              iVar8 = *(int *)(iVar3 + 0x34);
            }
            else {
              iVar8 = *(int *)(iVar3 + 0x44);
            }
            iVar4 = *(int *)(iVar3 + 0x40);
            local_18 = iVar13 << 3;
            local_1c = 0;
            if (0 < *(int *)(iVar3 + 0x38)) {
              iVar9 = *(int *)(iVar3 + 0x34);
              do {
                if ((*(uint *)(iVar1 + 8) < iVar2 - 1U) ||
                   (local_1c + iVar13 < *(int *)(iVar3 + 0x48))) {
                  (**(code **)(*(int *)(param_1 + 0x158) + 4))
                            (param_1,iVar3,*(undefined4 *)(param_2 + *(int *)(iVar3 + 4) * 4),
                             *(undefined4 *)(iVar1 + 0x18 + iVar12 * 4),local_18,iVar4 * uVar10,
                             iVar8);
                  if ((iVar8 < *(int *)(iVar3 + 0x34)) &&
                     (_memset(*(void **)(iVar1 + 0x18 + (iVar8 + iVar12) * 4),0,
                              (*(int *)(iVar3 + 0x34) - iVar8) * 0x80),
                     iVar8 < *(int *)(iVar3 + 0x34))) {
                    puVar14 = (undefined4 *)(iVar1 + (iVar8 + 6 + iVar12) * 4);
                    iVar9 = iVar8;
                    do {
                      iVar9 = iVar9 + 1;
                      *(undefined2 *)*puVar14 = *(undefined2 *)puVar14[-1];
                      puVar14 = puVar14 + 1;
                    } while (iVar9 < *(int *)(iVar3 + 0x34));
                  }
                }
                else {
                  puVar14 = (undefined4 *)(iVar1 + iVar12 * 4 + 0x18);
                  _memset((void *)*puVar14,0,iVar9 << 7);
                  iVar9 = 0;
                  if (0 < *(int *)(iVar3 + 0x34)) {
                    do {
                      iVar9 = iVar9 + 1;
                      *(undefined2 *)*puVar14 = **(undefined2 **)(iVar1 + 0x14 + iVar12 * 4);
                      puVar14 = puVar14 + 1;
                    } while (iVar9 < *(int *)(iVar3 + 0x34));
                  }
                }
                iVar9 = *(int *)(iVar3 + 0x34);
                local_1c = local_1c + 1;
                local_18 = local_18 + 8;
                iVar12 = iVar12 + iVar9;
              } while (local_1c < *(int *)(iVar3 + 0x38));
            }
            local_20 = local_20 + 1;
            piVar6 = piVar6 + 1;
          } while (local_20 < *(int *)(param_1 + 0xe4));
        }
        cVar5 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,iVar1 + 0x18);
        if (cVar5 == '\0') {
          *(int *)(iVar1 + 0x10) = iVar13;
          *(uint *)(iVar1 + 0xc) = uVar10;
          return 0;
        }
      }
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    } while (iVar13 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0xe4) < 2) {
    if (*(uint *)(iVar1 + 8) < *(int *)(param_1 + 0xe0) - 1U) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0xc);
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar7;
  }
  else {
    *(undefined4 *)(iVar1 + 0x14) = 1;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return 1;
}

