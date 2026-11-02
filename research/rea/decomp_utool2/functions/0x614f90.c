// rea decompile_all
// name: FUN_00614f90
// address: 0x614f90
// body: available
// range: 0x614f90-0x61549d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00614f90(int param_1)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int local_10;
  uint local_c;
  ushort *local_8;
  
  local_c = 0xffffffff;
  iVar9 = 0x8a;
  uVar5 = (uint)*(ushort *)(in_EDX + 2);
  if (uVar5 != 0) {
    iVar9 = 7;
  }
  iVar4 = (uVar5 != 0) + 3;
  if (-1 < param_1) {
    local_8 = (ushort *)(in_EDX + 6);
    local_10 = param_1 + 1;
    iVar7 = 0;
    do {
      iVar8 = iVar7 + 1;
      uVar6 = (uint)*local_8;
      if ((iVar9 <= iVar8) || (uVar5 != uVar6)) {
        if (iVar8 < iVar4) {
          do {
            uVar10 = (uint)*(ushort *)(in_ECX + 0xa7e + uVar5 * 4);
            iVar9 = *(int *)(in_ECX + 0x16bc);
            if ((int)(0x10 - uVar10) < iVar9) {
              uVar11 = *(ushort *)(in_ECX + 0xa7c + uVar5 * 4);
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | uVar11 << ((byte)iVar9 & 0x1f);
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b8);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b9);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
              *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar10 - 0x10);
            }
            else {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) |
                   *(short *)(in_ECX + 0xa7c + uVar5 * 4) << ((byte)iVar9 & 0x1f);
              *(uint *)(in_ECX + 0x16bc) = iVar9 + uVar10;
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else if (uVar5 == 0) {
          iVar9 = *(int *)(in_ECX + 0x16bc);
          bVar3 = (byte)iVar9;
          sVar2 = (short)iVar7;
          if (iVar8 < 0xb) {
            uVar10 = (uint)*(ushort *)(in_ECX + 0xac2);
            if ((int)(0x10 - uVar10) < iVar9) {
              uVar11 = *(ushort *)(in_ECX + 0xac0);
              *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar11 << (bVar3 & 0x1f)
              ;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b8);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b9);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
              *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar10 - 0x10);
            }
            else {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | *(short *)(in_ECX + 0xac0) << (bVar3 & 0x1f);
              *(uint *)(in_ECX + 0x16bc) = iVar9 + uVar10;
            }
            iVar9 = *(int *)(in_ECX + 0x16bc);
            if (iVar9 < 0xe) {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | sVar2 + -2 << ((byte)iVar9 & 0x1f);
              iVar9 = iVar9 + 3;
LAB_00615453:
              *(int *)(in_ECX + 0x16bc) = iVar9;
            }
            else {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | sVar2 - 2U << ((byte)iVar9 & 0x1f);
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b8);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b9);
              cVar1 = *(char *)(in_ECX + 0x16bc);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xd;
              *(ushort *)(in_ECX + 0x16b8) = (ushort)(sVar2 - 2U) >> (0x10U - cVar1 & 0x1f);
            }
          }
          else {
            uVar10 = (uint)*(ushort *)(in_ECX + 0xac6);
            if ((int)(0x10 - uVar10) < iVar9) {
              uVar11 = *(ushort *)(in_ECX + 0xac4);
              *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar11 << (bVar3 & 0x1f)
              ;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b8);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b9);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
              *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar10 - 0x10);
            }
            else {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | *(short *)(in_ECX + 0xac4) << (bVar3 & 0x1f);
              *(uint *)(in_ECX + 0x16bc) = iVar9 + uVar10;
            }
            iVar9 = *(int *)(in_ECX + 0x16bc);
            if (iVar9 < 10) {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | sVar2 + -10 << ((byte)iVar9 & 0x1f);
              iVar9 = iVar9 + 7;
              goto LAB_00615453;
            }
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | sVar2 - 10U << ((byte)iVar9 & 0x1f);
            *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                 *(undefined1 *)(in_ECX + 0x16b8);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                 *(undefined1 *)(in_ECX + 0x16b9);
            cVar1 = *(char *)(in_ECX + 0x16bc);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -9;
            *(ushort *)(in_ECX + 0x16b8) = (ushort)(sVar2 - 10U) >> (0x10U - cVar1 & 0x1f);
          }
        }
        else {
          if (uVar5 != local_c) {
            uVar10 = (uint)*(ushort *)(in_ECX + 0xa7e + uVar5 * 4);
            iVar9 = *(int *)(in_ECX + 0x16bc);
            iVar8 = iVar7;
            if ((int)(0x10 - uVar10) < iVar9) {
              uVar11 = *(ushort *)(in_ECX + 0xa7c + uVar5 * 4);
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) | uVar11 << ((byte)iVar9 & 0x1f);
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b8);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                   *(undefined1 *)(in_ECX + 0x16b9);
              *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
              *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
              *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar10 - 0x10);
            }
            else {
              *(ushort *)(in_ECX + 0x16b8) =
                   *(ushort *)(in_ECX + 0x16b8) |
                   *(short *)(in_ECX + 0xa7c + uVar5 * 4) << ((byte)iVar9 & 0x1f);
              *(uint *)(in_ECX + 0x16bc) = iVar9 + uVar10;
            }
          }
          uVar10 = (uint)*(ushort *)(in_ECX + 0xabe);
          iVar9 = *(int *)(in_ECX + 0x16bc);
          if ((int)(0x10 - uVar10) < iVar9) {
            uVar11 = *(ushort *)(in_ECX + 0xabc);
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | uVar11 << ((byte)iVar9 & 0x1f);
            *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                 *(undefined1 *)(in_ECX + 0x16b8);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                 *(undefined1 *)(in_ECX + 0x16b9);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
            *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar10 - 0x10);
          }
          else {
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | *(short *)(in_ECX + 0xabc) << ((byte)iVar9 & 0x1f);
            *(uint *)(in_ECX + 0x16bc) = iVar9 + uVar10;
          }
          iVar9 = *(int *)(in_ECX + 0x16bc);
          if (iVar9 < 0xf) {
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | (short)iVar8 + -3 << ((byte)iVar9 & 0x1f);
            iVar9 = iVar9 + 2;
            goto LAB_00615453;
          }
          uVar11 = (short)iVar8 - 3;
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | uVar11 << ((byte)iVar9 & 0x1f);
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b8);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b9);
          cVar1 = *(char *)(in_ECX + 0x16bc);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xe;
          *(ushort *)(in_ECX + 0x16b8) = uVar11 >> (0x10U - cVar1 & 0x1f);
        }
        iVar8 = 0;
        local_c = uVar5;
        if (uVar6 == 0) {
          iVar9 = 0x8a;
          iVar4 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar9 = 6;
          iVar4 = 3;
        }
        else {
          iVar9 = 7;
          iVar4 = 4;
        }
      }
      local_8 = local_8 + 2;
      local_10 = local_10 + -1;
      uVar5 = uVar6;
      iVar7 = iVar8;
    } while (local_10 != 0);
  }
  return;
}

