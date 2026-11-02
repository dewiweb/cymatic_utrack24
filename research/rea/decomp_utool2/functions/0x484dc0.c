// rea decompile_all
// name: FUN_00484dc0
// address: 0x484dc0
// body: available
// range: 0x484dc0-0x484f48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484dc0(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar3;
  int iVar2;
  int *in_ECX;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uStack_32;
  int local_2c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  piVar4 = (int *)*in_ECX;
  iVar6 = piVar4[2] * 0x10 + *piVar4;
  local_2c = *piVar4;
  if (local_2c != iVar6) {
    do {
      FUN_0044db90(&local_18,in_ECX + 1);
      if ((0 < (int)local_10) && (0 < local_c)) {
        iVar2 = local_c + local_14;
        for (iVar8 = local_14; iVar8 < iVar2; iVar8 = iVar8 + 1) {
          piVar4 = (int *)*param_1;
          uVar10 = param_1[2];
          iVar7 = iVar8 * piVar4[2] + *piVar4;
          param_1[1] = iVar7;
          iVar9 = piVar4[3];
          piVar4 = (int *)(iVar9 * local_18 + iVar7);
          uVar1 = (undefined1)uVar10;
          uVar3 = (undefined1)(uVar10 >> 8);
          uStack_32 = (undefined1)(uVar10 >> 0x10);
          uVar11 = local_10;
          if (iVar9 == 3) {
            if ((char)param_1[6] == '\0') {
              uVar10 = local_10;
              if ((local_10 & 0xffffffe0) != 0) {
                for (; (8 < (int)uVar10 && (((uint)piVar4 & 7) != 0));
                    piVar4 = (int *)((int)piVar4 + 3)) {
                  *(undefined1 *)piVar4 = uVar1;
                  *(undefined1 *)((int)piVar4 + 1) = uVar3;
                  *(undefined1 *)((int)piVar4 + 2) = uStack_32;
                  uVar10 = uVar10 - 1;
                }
                if (4 < (int)uVar10) {
                  iVar9 = (uVar10 - 5 >> 2) + 1;
                  uVar10 = uVar10 + iVar9 * -4;
                  do {
                    *piVar4 = param_1[3];
                    piVar4[1] = param_1[4];
                    piVar4[2] = param_1[5];
                    piVar4 = piVar4 + 3;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
              }
              iVar9 = uVar10 - 1;
              if (-1 < iVar9) {
                puVar5 = (undefined1 *)((int)piVar4 + 2);
                do {
                  iVar9 = iVar9 + -1;
                  puVar5[-2] = uVar1;
                  puVar5[-1] = uVar3;
                  *puVar5 = uStack_32;
                  puVar5 = puVar5 + 3;
                } while (-1 < iVar9);
              }
            }
            else {
              _memset(piVar4,uVar10 >> 0x10 & 0xff,local_10 * 3);
            }
          }
          else {
            do {
              *(undefined1 *)piVar4 = uVar1;
              uVar11 = uVar11 - 1;
              *(undefined1 *)((int)piVar4 + 1) = uVar3;
              *(undefined1 *)((int)piVar4 + 2) = uStack_32;
              piVar4 = (int *)((int)piVar4 + iVar9);
            } while (0 < (int)uVar11);
          }
        }
      }
      local_2c = local_2c + 0x10;
    } while (local_2c != iVar6);
  }
  return;
}

