// rea decompile_all
// name: FUN_0020572c
// address: 0x20572c
// body: available
// range: 0x20572c-0x205973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0020572c(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int unaff_r10;
  undefined8 uVar10;
  int aiStack_ac [34];
  
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (param_1[1] == 0) {
    *param_1 = *param_1 + 1;
    *(undefined1 *)(param_2 + 100) = 1;
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    param_1[1] = param_2;
  }
  else {
    iVar5 = param_1[1];
    iVar3 = 0;
    do {
      aiStack_ac[iVar3 + 1] = iVar5;
      iVar9 = iVar3 + 1;
      uVar10 = FUN_00172670(param_2,iVar5);
      uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
      iVar2 = (int)uVar10;
      iVar7 = extraout_r3;
      if (0 < iVar2) {
        iVar7 = 1;
      }
      if (iVar2 < 0) {
        iVar7 = 0;
      }
      if (iVar2 == 0) break;
      iVar2 = *(int *)(iVar5 + iVar7 * 4 + 0x5c);
      if (iVar2 == 0) {
LAB_002057cc:
        *param_1 = *param_1 + 1;
        *(undefined1 *)(param_2 + 100) = 0x81;
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (iVar7 == 0) {
          *(int *)(param_2 + 0x60) = iVar5;
        }
        else {
          *(byte *)(iVar5 + 100) = *(byte *)(iVar5 + 100) & 0x7f;
          *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(iVar5 + iVar7 * 4 + 0x5c);
        }
        iVar5 = iVar5 + iVar7 * 4;
        iVar2 = iVar3 + 2;
        iVar9 = 1;
        if (1 < iVar2) {
          unaff_r10 = 0x5c;
        }
        *(int *)(iVar5 + 0x5c) = param_2;
        if (iVar2 < 2) {
          return param_2;
        }
        do {
          if (iVar3 != 0) {
            iVar5 = aiStack_ac[iVar3 + 1];
            if (*(int *)(aiStack_ac[iVar3] + 0x60) == iVar5) {
              iVar7 = 1;
            }
            else {
              iVar7 = 0;
            }
          }
          iVar6 = aiStack_ac[iVar3 + 1];
          if (iVar6 != 0) {
            iVar5 = *(int *)(iVar6 + 0x5c);
          }
          if (iVar6 != 0 && iVar5 != 0) {
            if (((byte)(*(byte *)(iVar5 + 100) * '\x02') == (byte)(*(byte *)(iVar6 + 100) * '\x02'))
               && ((*(byte *)(iVar6 + 100) & 0x7f) != 0)) {
              if ((*(byte *)(iVar5 + 100) & 0x80) == 0) {
                uVar8 = *(undefined4 *)(iVar5 + 0x60);
              }
              else {
                uVar8 = 0;
              }
              *(undefined4 *)(iVar6 + 0x5c) = uVar8;
              *(int *)(iVar5 + 0x60) = iVar6;
              *(byte *)(iVar5 + 100) = *(byte *)(iVar5 + 100) & 0x7f;
              iVar6 = iVar5;
            }
          }
          aiStack_ac[iVar3 + 1] = iVar6;
          if ((((iVar6 != 0) && (bVar1 = *(byte *)(iVar6 + 100), (bVar1 & 0x80) == 0)) &&
              (iVar5 = *(int *)(iVar6 + 0x60), iVar5 != 0)) &&
             ((((*(byte *)(iVar5 + 100) & 0x80) == 0 && (*(int *)(iVar5 + 0x60) != 0)) &&
              (((*(byte *)(*(int *)(iVar5 + 0x60) + 100) & 0x7f) == (bVar1 & 0x7f) &&
               ((bVar1 & 0x7f) != 0)))))) {
            if (*(int *)(iVar5 + 0x5c) == 0) {
              *(byte *)(iVar6 + 100) = bVar1 | 0x80;
            }
            else {
              *(int *)(iVar6 + 0x60) = *(int *)(iVar5 + 0x5c);
            }
            *(int *)(iVar5 + 0x5c) = iVar6;
            *(char *)(iVar5 + 100) = *(char *)(iVar5 + 100) + '\x01';
            iVar6 = iVar5;
          }
          aiStack_ac[iVar3 + 1] = iVar6;
          if (iVar3 == 0) {
            param_1[1] = aiStack_ac[1];
            iVar5 = aiStack_ac[1];
          }
          else {
            iVar5 = aiStack_ac[iVar3];
            *(int *)(iVar5 + unaff_r10 + iVar7 * 4) = iVar6;
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar9 < iVar2);
        return param_2;
      }
      if (iVar7 != 0) {
        uVar4 = (uint)*(byte *)(iVar5 + 100);
      }
      if (iVar7 != 0 && (uVar4 & 0x80) != 0) goto LAB_002057cc;
      iVar5 = iVar2;
      iVar3 = iVar9;
    } while (iVar9 < 0x20);
    param_2 = 0;
  }
  return param_2;
}

