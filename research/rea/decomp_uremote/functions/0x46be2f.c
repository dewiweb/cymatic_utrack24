// rea decompile_all
// name: FUN_0046be2f
// address: 0x46be2f
// body: available
// range: 0x46be2f-0x46c2c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046be2f(void)

{
  ushort uVar1;
  int in_EAX;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  int in_EDX;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iStack_2c;
  int local_1c;
  uint local_18;
  ushort *local_10;
  uint local_c;
  
  local_18 = 0xffffffff;
  iVar7 = 7;
  iStack_2c = 4;
  if (*(ushort *)(in_ECX + 2) == 0) {
    iVar7 = 0x8a;
    iStack_2c = 3;
  }
  if (-1 < in_EDX) {
    local_10 = (ushort *)(in_ECX + 6);
    local_1c = in_EDX + 1;
    iVar6 = 0;
    local_c = (uint)*(ushort *)(in_ECX + 2);
    do {
      uVar3 = (uint)*local_10;
      iVar5 = iVar6 + 1;
      if ((iVar7 <= iVar5) || (local_c != uVar3)) {
        if (iVar5 < iStack_2c) {
          do {
            uVar8 = (uint)*(ushort *)(in_EAX + 0xa7e + local_c * 4);
            bVar2 = (byte)*(int *)(in_EAX + 0x16bc);
            if ((int)(0x10 - uVar8) < *(int *)(in_EAX + 0x16bc)) {
              uVar4 = *(ushort *)(in_EAX + 0xa7c + local_c * 4);
              *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar4 << (bVar2 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              iVar7 = *(int *)(in_EAX + 0x16bc);
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) |
                   *(short *)(in_EAX + 0xa7c + local_c * 4) << (bVar2 & 0x1f);
            }
            iVar5 = iVar5 + -1;
            *(uint *)(in_EAX + 0x16bc) = iVar7 + uVar8;
          } while (iVar5 != 0);
        }
        else {
          if (local_c == 0) {
            iVar7 = *(int *)(in_EAX + 0x16bc);
            bVar2 = (byte)iVar7;
            if (iVar5 < 0xb) {
              uVar4 = *(ushort *)(in_EAX + 0xac2);
              if ((int)(0x10 - (uint)uVar4) < iVar7) {
                uVar1 = *(ushort *)(in_EAX + 0xac0);
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | uVar1 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b8);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b9);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
                *(ushort *)(in_EAX + 0x16b8) =
                     uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
              }
              else {
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xac0) << (bVar2 & 0x1f);
              }
              iVar7 = iVar7 + (uint)uVar4;
              iVar6 = iVar6 + -2;
              *(int *)(in_EAX + 0x16bc) = iVar7;
              if (iVar7 < 0xe) {
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
                iVar7 = iVar7 + 3;
LAB_0046c28e:
                *(int *)(in_EAX + 0x16bc) = iVar7;
                goto LAB_0046c294;
              }
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              uVar4 = (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
              iVar7 = *(int *)(in_EAX + 0x16bc) + -0xd;
            }
            else {
              uVar4 = *(ushort *)(in_EAX + 0xac6);
              if ((int)(0x10 - (uint)uVar4) < iVar7) {
                uVar1 = *(ushort *)(in_EAX + 0xac4);
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | uVar1 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b8);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b9);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
                *(ushort *)(in_EAX + 0x16b8) =
                     uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
              }
              else {
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xac4) << (bVar2 & 0x1f);
              }
              iVar7 = iVar7 + (uint)uVar4;
              iVar6 = iVar6 + -10;
              *(int *)(in_EAX + 0x16bc) = iVar7;
              if (iVar7 < 10) {
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
                iVar7 = iVar7 + 7;
                goto LAB_0046c28e;
              }
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              uVar4 = (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
              iVar7 = *(int *)(in_EAX + 0x16bc) + -9;
            }
          }
          else {
            if (local_c != local_18) {
              uVar8 = (uint)*(ushort *)(in_EAX + 0xa7e + local_c * 4);
              bVar2 = (byte)*(int *)(in_EAX + 0x16bc);
              if ((int)(0x10 - uVar8) < *(int *)(in_EAX + 0x16bc)) {
                uVar4 = *(ushort *)(in_EAX + 0xa7c + local_c * 4);
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) | uVar4 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b8);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b9);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
                *(ushort *)(in_EAX + 0x16b8) =
                     uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
              }
              else {
                iVar7 = *(int *)(in_EAX + 0x16bc);
                *(ushort *)(in_EAX + 0x16b8) =
                     *(ushort *)(in_EAX + 0x16b8) |
                     *(short *)(in_EAX + 0xa7c + local_c * 4) << (bVar2 & 0x1f);
              }
              *(uint *)(in_EAX + 0x16bc) = iVar7 + uVar8;
              iVar5 = iVar6;
            }
            uVar4 = *(ushort *)(in_EAX + 0xabe);
            iVar7 = *(int *)(in_EAX + 0x16bc);
            if ((int)(0x10 - (uint)uVar4) < iVar7) {
              uVar1 = *(ushort *)(in_EAX + 0xabc);
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | uVar1 << ((byte)iVar7 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b8);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b9);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
              *(ushort *)(in_EAX + 0x16b8) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | *(short *)(in_EAX + 0xabc) << ((byte)iVar7 & 0x1f)
              ;
            }
            iVar7 = iVar7 + (uint)uVar4;
            iVar5 = iVar5 + -3;
            *(int *)(in_EAX + 0x16bc) = iVar7;
            if (iVar7 < 0xf) {
              *(ushort *)(in_EAX + 0x16b8) =
                   *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar5 << ((byte)iVar7 & 0x1f));
              iVar7 = iVar7 + 2;
              goto LAB_0046c28e;
            }
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar5 << ((byte)iVar7 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            uVar4 = (ushort)iVar5 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
            iVar7 = *(int *)(in_EAX + 0x16bc) + -0xe;
          }
          *(ushort *)(in_EAX + 0x16b8) = uVar4;
          *(int *)(in_EAX + 0x16bc) = iVar7;
        }
LAB_0046c294:
        iVar5 = 0;
        local_18 = local_c;
        if (uVar3 == 0) {
          iVar7 = 0x8a;
        }
        else {
          if (local_c != uVar3) {
            iVar7 = 7;
            iStack_2c = 4;
            goto LAB_0046c2b7;
          }
          iStack_2c = 6;
          iVar7 = iStack_2c;
        }
        iStack_2c = 3;
      }
LAB_0046c2b7:
      local_10 = local_10 + 2;
      local_1c = local_1c + -1;
      iVar6 = iVar5;
      local_c = uVar3;
    } while (local_1c != 0);
  }
  return;
}

