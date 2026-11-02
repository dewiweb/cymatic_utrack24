// rea decompile_all
// name: FUN_00484f50
// address: 0x484f50
// body: available
// range: 0x484f50-0x4850fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484f50(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 uStack_32;
  int local_2c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  piVar6 = (int *)*in_ECX;
  iVar8 = piVar6[2] * 0x10 + *piVar6;
  local_2c = *piVar6;
  if (local_2c != iVar8) {
    do {
      FUN_0044db90(&local_18,in_ECX + 1);
      if ((0 < (int)local_10) && (0 < local_c)) {
        iVar5 = local_14 + local_c;
        uVar12 = local_10;
        for (iVar3 = local_14; iVar3 < iVar5; iVar3 = iVar3 + 1) {
          piVar6 = (int *)*param_1;
          iVar2 = *piVar6 + piVar6[2] * iVar3;
          param_1[1] = iVar2;
          iVar11 = piVar6[3];
          piVar6 = (int *)(iVar11 * local_18 + iVar2);
          if (*(char *)((int)param_1 + 0xb) == -1) {
            uVar9 = param_1[2];
            uVar1 = (undefined1)uVar9;
            uVar4 = (undefined1)(uVar9 >> 8);
            uStack_32 = (undefined1)(uVar9 >> 0x10);
            uVar10 = uVar12;
            if (iVar11 == 3) {
              if ((char)param_1[6] == '\0') {
                uVar9 = uVar12;
                if ((uVar12 & 0xffffffe0) != 0) {
                  for (; (8 < (int)uVar9 && (((uint)piVar6 & 7) != 0));
                      piVar6 = (int *)((int)piVar6 + 3)) {
                    *(undefined1 *)piVar6 = uVar1;
                    *(undefined1 *)((int)piVar6 + 1) = uVar4;
                    *(undefined1 *)((int)piVar6 + 2) = uStack_32;
                    uVar9 = uVar9 - 1;
                  }
                  if (4 < (int)uVar9) {
                    iVar11 = (uVar9 - 5 >> 2) + 1;
                    uVar9 = uVar9 + iVar11 * -4;
                    do {
                      *piVar6 = param_1[3];
                      piVar6[1] = param_1[4];
                      piVar6[2] = param_1[5];
                      piVar6 = piVar6 + 3;
                      iVar11 = iVar11 + -1;
                      uVar12 = local_10;
                    } while (iVar11 != 0);
                  }
                }
                iVar11 = uVar9 - 1;
                if (-1 < iVar11) {
                  puVar7 = (undefined1 *)((int)piVar6 + 2);
                  do {
                    iVar11 = iVar11 + -1;
                    puVar7[-2] = uVar1;
                    puVar7[-1] = uVar4;
                    *puVar7 = uStack_32;
                    puVar7 = puVar7 + 3;
                  } while (-1 < iVar11);
                }
              }
              else {
                _memset(piVar6,uVar9 >> 0x10 & 0xff,uVar12 * 3);
              }
            }
            else {
              do {
                *(undefined1 *)piVar6 = uVar1;
                uVar10 = uVar10 - 1;
                *(undefined1 *)((int)piVar6 + 1) = uVar4;
                *(undefined1 *)((int)piVar6 + 2) = uStack_32;
                piVar6 = (int *)((int)piVar6 + iVar11);
              } while (0 < (int)uVar10);
            }
          }
          else {
            FUN_0048b420(piVar6,param_1[2],uVar12);
          }
        }
      }
      local_2c = local_2c + 0x10;
    } while (local_2c != iVar8);
  }
  return;
}

