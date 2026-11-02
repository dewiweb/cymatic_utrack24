// rea decompile_all
// name: FUN_005f50f0
// address: 0x5f50f0
// body: available
// range: 0x5f50f0-0x5f5410 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f50f0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *in_EDX;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  iVar4 = in_ECX[1];
  *in_EDX = 0;
  iVar2 = *(int *)(iVar4 + 0x34);
  *(uint *)(iVar2 + 0x18) =
       (uint)*(ushort *)
              (&DAT_00bfd3f0 +
              ((uint)*(byte *)(iVar4 + 0xdf1) ^
              *(uint *)(&DAT_00bfd3f0 + (uint)*(byte *)(iVar4 + 0xdf0) * 4) >> 8) * 4) ^
       (*(uint *)(&DAT_00bfd3f0 + (uint)*(byte *)(iVar4 + 0xdf0) * 4) & 0xff) << 8;
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x14);
  iVar4 = FUN_005f4970();
  if (iVar4 != 0) {
    if (*(int *)*in_ECX == 2) {
      return 1;
    }
    iVar4 = FUN_005f6670(*(undefined4 *)(in_ECX[1] + 0x470));
    if (iVar4 != 0) {
      uVar5 = 0;
      if (*(int *)(in_ECX[1] + 0x470) != 0) {
        do {
          iVar4 = *(int *)(in_ECX[1] + 0x478);
          iVar2 = *(int *)(in_ECX[1] + 0x474);
          if (iVar2 == 1) {
LAB_005f51b2:
            bVar7 = uVar5 == 1;
LAB_005f51b5:
            if (bVar7) {
              iVar4 = iVar4 + 1;
            }
          }
          else {
            if (iVar2 == 2) {
              bVar7 = uVar5 == 0;
              goto LAB_005f51b5;
            }
            if (iVar2 == 3) goto LAB_005f51b2;
          }
          iVar4 = FUN_005f4770(iVar4,iVar4);
          if (iVar4 == 0) {
            return 0;
          }
          if (*(int *)*in_ECX == 2) {
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(in_ECX[1] + 0x470));
      }
      iVar4 = FUN_005f3e60();
      if (iVar4 != 0) {
        if (*(int *)*in_ECX == 2) {
          return 1;
        }
        uVar5 = FUN_005ff020();
        iVar4 = FUN_005feec0(0x10);
        if (iVar4 != 0) {
          if ((uVar5 & 0xffff) == local_8) {
            iVar4 = in_ECX[1];
            iVar2 = *(int *)(iVar4 + 0x474);
            if (iVar2 == 1) {
              uVar5 = 0;
              if (*(int *)(iVar4 + 0x468) != 0) {
                do {
                  piVar1 = (int *)(*(int *)(in_ECX[1] + 0x3c) + uVar5 * 4);
                  iVar4 = uVar5 * 4;
                  uVar5 = uVar5 + 1;
                  *piVar1 = *(int *)(*(int *)(in_ECX[1] + 0x38) + iVar4) - *piVar1;
                } while (uVar5 < *(uint *)(in_ECX[1] + 0x468));
              }
            }
            else if (iVar2 == 2) {
              uVar5 = 0;
              if (*(int *)(iVar4 + 0x468) != 0) {
                do {
                  piVar1 = (int *)(*(int *)(in_ECX[1] + 0x38) + uVar5 * 4);
                  iVar4 = uVar5 * 4;
                  uVar5 = uVar5 + 1;
                  *piVar1 = *piVar1 + *(int *)(*(int *)(in_ECX[1] + 0x3c) + iVar4);
                } while (uVar5 < *(uint *)(in_ECX[1] + 0x468));
              }
            }
            else if ((iVar2 == 3) && (uVar5 = 0, *(int *)(iVar4 + 0x468) != 0)) {
              do {
                uVar3 = *(uint *)(*(int *)(in_ECX[1] + 0x3c) + uVar5 * 4);
                piVar1 = (int *)(*(int *)(in_ECX[1] + 0x38) + uVar5 * 4);
                uVar6 = uVar3 & 1 | *piVar1 * 2;
                *piVar1 = (int)(uVar3 + uVar6) >> 1;
                *(int *)(*(int *)(in_ECX[1] + 0x3c) + uVar5 * 4) = (int)(uVar6 - uVar3) >> 1;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(in_ECX[1] + 0x468));
            }
          }
          else {
            if (*(int *)(in_ECX[1] + 0xe1c) == 0) {
              (**(code **)(in_ECX[1] + 0x1c))();
            }
            uVar5 = 0;
            if (*(int *)(in_ECX[1] + 0x470) != 0) {
              iVar4 = 0x38;
              do {
                _memset(*(void **)(iVar4 + in_ECX[1]),0,*(int *)(in_ECX[1] + 0x468) << 2);
                iVar4 = iVar4 + 4;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(in_ECX[1] + 0x470));
            }
          }
          *in_EDX = 1;
          iVar4 = *(int *)(in_ECX[1] + 0xe4);
          if (iVar4 != 0) {
            *(int *)(in_ECX[1] + 0xe0) = iVar4;
          }
          *(undefined4 *)(*in_ECX + 8) = *(undefined4 *)(in_ECX[1] + 0x470);
          *(undefined4 *)(*in_ECX + 0xc) = *(undefined4 *)(in_ECX[1] + 0x474);
          *(undefined4 *)(*in_ECX + 0x10) = *(undefined4 *)(in_ECX[1] + 0x478);
          *(undefined4 *)(*in_ECX + 0x14) = *(undefined4 *)(in_ECX[1] + 0x46c);
          *(undefined4 *)(*in_ECX + 0x18) = *(undefined4 *)(in_ECX[1] + 0x468);
          iVar4 = in_ECX[1];
          *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0x468) + *(uint *)(iVar4 + 0x480);
          *(uint *)(iVar4 + 0xec) =
               *(int *)(iVar4 + 0x484) +
               (uint)CARRY4(*(uint *)(iVar4 + 0x468),*(uint *)(iVar4 + 0x480));
          iVar4 = FUN_005f3b40(in_ECX[1] + 0x38);
          if (iVar4 == 0) {
            *(undefined4 *)*in_ECX = 2;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

