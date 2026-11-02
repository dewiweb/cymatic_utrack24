// rea decompile_all
// name: FUN_0020849c
// address: 0x20849c
// body: available
// range: 0x20849c-0x2086df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0020849c(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte unaff_r7;
  int iVar9;
  undefined4 uVar10;
  int unaff_r10;
  bool bVar11;
  bool bVar12;
  int aiStack_ac [34];
  
  *(undefined4 *)(param_2 + 0xfc) = 0;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  if (param_1[1] == 0) {
    *param_1 = *param_1 + 1;
    *(undefined1 *)(param_2 + 0x100) = 1;
    *(undefined4 *)(param_2 + 0xfc) = 0;
    *(undefined4 *)(param_2 + 0xf8) = 0;
    param_1[1] = param_2;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_2 + 0xf2);
    iVar3 = param_1[1];
    iVar5 = 0;
    do {
      aiStack_ac[iVar5 + 1] = iVar3;
      uVar2 = (uint)*(ushort *)(iVar3 + 0xf2);
      iVar4 = iVar5 + 1;
      bVar12 = uVar8 < uVar2;
      bVar11 = uVar8 == uVar2;
      if (!bVar12 && !bVar11) {
        uVar2 = 1;
      }
      if (bVar12) {
        uVar2 = 0;
      }
      if (bVar11) break;
      iVar6 = *(int *)(iVar3 + uVar2 * 4 + 0xf8);
      if (iVar6 == 0) {
LAB_00208538:
        iVar4 = 0x81;
        *param_1 = *param_1 + 1;
        *(undefined1 *)(param_2 + 0x100) = 0x81;
        *(undefined4 *)(param_2 + 0xf8) = 0;
        if (uVar2 == 0) {
          *(int *)(param_2 + 0xfc) = iVar3;
        }
        else {
          *(byte *)(iVar3 + 0x100) = *(byte *)(iVar3 + 0x100) & 0x7f;
          iVar4 = *(int *)(iVar3 + uVar2 * 4 + 0xf8);
          *(int *)(param_2 + 0xfc) = iVar4;
        }
        iVar9 = iVar5 + 2;
        iVar6 = 1;
        if (1 < iVar9) {
          unaff_r10 = 0xf8;
        }
        *(int *)(iVar3 + uVar2 * 4 + 0xf8) = param_2;
        if (iVar9 < 2) {
          return param_2;
        }
        do {
          if (iVar5 != 0) {
            if (*(int *)(aiStack_ac[iVar5] + 0xfc) == aiStack_ac[iVar5 + 1]) {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          iVar3 = aiStack_ac[iVar5 + 1];
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + 0xf8);
          }
          if (iVar3 != 0 && iVar4 != 0) {
            if (((byte)(*(byte *)(iVar4 + 0x100) * '\x02') ==
                 (byte)(*(byte *)(iVar3 + 0x100) * '\x02')) &&
               ((*(byte *)(iVar3 + 0x100) & 0x7f) != 0)) {
              if ((*(byte *)(iVar4 + 0x100) & 0x80) == 0) {
                uVar10 = *(undefined4 *)(iVar4 + 0xfc);
              }
              else {
                uVar10 = 0;
              }
              *(undefined4 *)(iVar3 + 0xf8) = uVar10;
              *(int *)(iVar4 + 0xfc) = iVar3;
              *(byte *)(iVar4 + 0x100) = *(byte *)(iVar4 + 0x100) & 0x7f;
              iVar3 = iVar4;
            }
          }
          aiStack_ac[iVar5 + 1] = iVar3;
          if ((((iVar3 != 0) && (bVar1 = *(byte *)(iVar3 + 0x100), (bVar1 & 0x80) == 0)) &&
              (iVar7 = *(int *)(iVar3 + 0xfc), iVar4 = iVar7, iVar7 != 0)) &&
             ((((*(byte *)(iVar7 + 0x100) & 0x80) == 0 && (*(int *)(iVar7 + 0xfc) != 0)) &&
              (((*(byte *)(*(int *)(iVar7 + 0xfc) + 0x100) & 0x7f) == (bVar1 & 0x7f) &&
               ((bVar1 & 0x7f) != 0)))))) {
            if (*(int *)(iVar7 + 0xf8) == 0) {
              *(byte *)(iVar3 + 0x100) = bVar1 | 0x80;
            }
            else {
              *(int *)(iVar3 + 0xfc) = *(int *)(iVar7 + 0xf8);
            }
            *(int *)(iVar7 + 0xf8) = iVar3;
            iVar4 = *(byte *)(iVar7 + 0x100) + 1;
            *(char *)(iVar7 + 0x100) = (char)iVar4;
            iVar3 = iVar7;
          }
          aiStack_ac[iVar5 + 1] = iVar3;
          if (iVar5 == 0) {
            param_1[1] = aiStack_ac[1];
          }
          else {
            iVar4 = aiStack_ac[iVar5];
            *(int *)(iVar4 + unaff_r10 + uVar2 * 4) = iVar3;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar6 < iVar9);
        return param_2;
      }
      if (uVar2 != 0) {
        unaff_r7 = *(byte *)(iVar3 + 0x100);
      }
      if (uVar2 != 0 && (unaff_r7 & 0x80) != 0) goto LAB_00208538;
      iVar3 = iVar6;
      iVar5 = iVar4;
    } while (iVar4 < 0x20);
    param_2 = 0;
  }
  return param_2;
}

