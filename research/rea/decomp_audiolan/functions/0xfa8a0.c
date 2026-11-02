// rea decompile_all
// name: FUN_000fa8a0
// address: 0xfa8a0
// body: available
// range: 0xfa8a0-0xfab57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fa8a0(undefined4 param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar2 = FUN_0015e6f4();
  uVar3 = FUN_0015e708(param_1);
  if ((iVar2 == 0) || ((uVar3 & 3) != 0)) {
    *param_3 = 0;
  }
  else {
    iVar13 = 0;
    uVar12 = (uVar3 >> 2) * 3;
    if (*(char *)(iVar2 + uVar3 + -1) == '=') {
      if (*(char *)(iVar2 + uVar3 + -2) == '=') {
        iVar13 = 1;
        uVar12 = uVar12 - 2;
      }
      else {
        uVar12 = uVar12 - 1;
        iVar13 = 2;
      }
    }
    if (uVar12 <= *param_3) {
      uVar11 = 0;
      if (uVar3 != 4) {
        do {
          uVar4 = (uint)*(byte *)(iVar2 + uVar11);
          if (uVar4 - 0x41 < 0x1a) {
            uVar4 = uVar4 - 0x41 & 0xff;
          }
          else {
            if (uVar4 - 0x61 < 0x1a) {
              uVar4 = uVar4 - 0x47;
            }
            else {
              if (9 < uVar4 - 0x30) {
                if (uVar4 == 0x2b) {
                  uVar4 = 0x3e;
                }
                else {
                  uVar4 = 0x3f;
                }
                goto LAB_000fa954;
              }
              uVar4 = uVar4 + 4;
            }
            uVar4 = uVar4 & 0xff;
          }
LAB_000fa954:
          iVar8 = iVar2 + uVar11;
          uVar5 = (uint)*(byte *)(iVar8 + 1);
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 - 0x41 & 0xff;
          }
          else {
            if (uVar5 - 0x61 < 0x1a) {
              uVar5 = uVar5 - 0x47;
            }
            else {
              if (9 < uVar5 - 0x30) {
                if (uVar5 == 0x2b) {
                  uVar5 = 0x3e;
                }
                else {
                  uVar5 = 0x3f;
                }
                goto LAB_000fa990;
              }
              uVar5 = uVar5 + 4;
            }
            uVar5 = uVar5 & 0xff;
          }
LAB_000fa990:
          uVar6 = (uint)*(byte *)(iVar8 + 2);
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 - 0x41 & 0xff;
          }
          else {
            if (uVar6 - 0x61 < 0x1a) {
              uVar6 = uVar6 - 0x47;
            }
            else {
              if (9 < uVar6 - 0x30) {
                if (uVar6 == 0x2b) {
                  uVar6 = 0x3e;
                }
                else {
                  uVar6 = 0x3f;
                }
                goto LAB_000fa9c8;
              }
              uVar6 = uVar6 + 4;
            }
            uVar6 = uVar6 & 0xff;
          }
LAB_000fa9c8:
          uVar9 = (uint)*(byte *)(iVar8 + 3);
          if (uVar9 - 0x41 < 0x1a) {
            bVar7 = (byte)(uVar9 - 0x41);
          }
          else {
            if (uVar9 - 0x61 < 0x1a) {
              cVar1 = -0x47;
            }
            else {
              if (9 < uVar9 - 0x30) {
                if (uVar9 == 0x2b) {
                  bVar7 = 0x3e;
                }
                else {
                  bVar7 = 0x3f;
                }
                goto LAB_000faa00;
              }
              cVar1 = '\x04';
            }
            bVar7 = *(byte *)(iVar8 + 3) + cVar1;
          }
LAB_000faa00:
          *param_2 = (byte)(uVar4 << 2) | (byte)(uVar5 >> 4);
          uVar11 = uVar11 + 4;
          pbVar10 = param_2 + 2;
          param_2[1] = (byte)(uVar5 << 4) | (byte)(uVar6 >> 2);
          param_2 = param_2 + 3;
          *pbVar10 = bVar7 | (byte)(uVar6 << 6);
        } while (uVar11 < uVar3 - 4);
      }
      if (iVar13 == 2) {
        cVar1 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11));
        uVar3 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11 + 1));
        uVar11 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11 + 2));
        *param_2 = cVar1 << 2 | (byte)(uVar3 >> 4);
        param_2[1] = (byte)(uVar3 << 4) | (byte)(uVar11 >> 2);
      }
      else if (iVar13 == 1) {
        cVar1 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11));
        uVar3 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11 + 1));
        *param_2 = cVar1 << 2 | (byte)(uVar3 >> 4);
      }
      else {
        cVar1 = FUN_000fab58(*(undefined1 *)(iVar2 + uVar11));
        iVar2 = uVar11 + iVar2;
        uVar3 = FUN_000fab58(*(undefined1 *)(iVar2 + 1));
        uVar11 = FUN_000fab58(*(undefined1 *)(iVar2 + 2));
        bVar7 = FUN_000fab58(*(undefined1 *)(iVar2 + 3));
        *param_2 = cVar1 << 2 | (byte)(uVar3 >> 4);
        param_2[1] = (byte)(uVar3 << 4) | (byte)(uVar11 >> 2);
        param_2[2] = bVar7 | (byte)(uVar11 << 6);
      }
      *param_3 = uVar12;
      return 1;
    }
    *param_3 = uVar12;
  }
  return 0;
}

