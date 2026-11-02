// rea decompile_all
// name: FUN_000faba0
// address: 0xfaba0
// body: available
// range: 0xfaba0-0xfaec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000faba0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)DAT_000faec8 >> 0x21);
  uVar5 = FUN_0010e798(param_1,((uint)((ulonglong)(param_3 * 8 + 0x11) * (ulonglong)DAT_000faec8 >>
                                      0x20) & 0x3ffff) >> 2);
  FUN_0010e240(uVar5,&DAT_000faecc);
  iVar6 = FUN_0015e6f4(uVar5);
  iVar10 = 0;
  uVar4 = uVar1 * 3;
  uVar12 = 0;
  if (uVar4 != 0) {
    do {
      bVar8 = *(byte *)(param_2 + uVar12);
      bVar2 = *(byte *)(param_2 + uVar12 + 1);
      bVar9 = *(byte *)(param_2 + uVar12 + 2);
      bVar3 = bVar8 >> 2;
      if (bVar3 < 0x1a) {
        cVar7 = bVar3 + 0x41;
      }
      else if (bVar3 < 0x34) {
        cVar7 = bVar3 + 0x47;
      }
      else if (bVar3 < 0x3e) {
        cVar7 = bVar3 - 4;
      }
      else if (bVar3 == 0x3e) {
        cVar7 = '+';
      }
      else {
        cVar7 = '/';
      }
      *(char *)(iVar6 + iVar10) = cVar7;
      bVar8 = (bVar8 & 3) << 4 | bVar2 >> 4;
      if (bVar8 < 0x1a) {
        cVar7 = bVar8 + 0x41;
      }
      else if (bVar8 < 0x34) {
        cVar7 = bVar8 + 0x47;
      }
      else if (bVar8 < 0x3e) {
        cVar7 = bVar8 - 4;
      }
      else if (bVar8 == 0x3e) {
        cVar7 = '+';
      }
      else {
        cVar7 = '/';
      }
      *(char *)(iVar6 + iVar10 + 1) = cVar7;
      bVar8 = (bVar2 & 0xf) << 2 | bVar9 >> 6;
      if (bVar8 < 0x1a) {
        cVar7 = bVar8 + 0x41;
      }
      else if (bVar8 < 0x34) {
        cVar7 = bVar8 + 0x47;
      }
      else if (bVar8 < 0x3e) {
        cVar7 = bVar8 - 4;
      }
      else if (bVar8 == 0x3e) {
        cVar7 = '+';
      }
      else {
        cVar7 = '/';
      }
      bVar9 = bVar9 & 0x3f;
      *(char *)(iVar6 + iVar10 + 2) = cVar7;
      iVar11 = iVar10 + 3;
      if (bVar9 < 0x1a) {
        cVar7 = bVar9 + 0x41;
      }
      else if (bVar9 < 0x34) {
        cVar7 = bVar9 + 0x47;
      }
      else if (bVar9 < 0x3e) {
        cVar7 = bVar9 - 4;
      }
      else if (bVar9 == 0x3e) {
        cVar7 = '+';
      }
      else {
        cVar7 = '/';
      }
      uVar12 = uVar12 + 3;
      iVar10 = iVar10 + 4;
      *(char *)(iVar6 + iVar11) = cVar7;
    } while (uVar12 < uVar4);
  }
  iVar11 = uVar1 * -3 + param_3;
  if (iVar11 == 2) {
    bVar8 = *(byte *)(param_2 + uVar12);
    bVar2 = *(byte *)(param_2 + uVar12 + 1);
    bVar9 = bVar8 >> 2;
    if (bVar9 < 0x1a) {
      cVar7 = bVar9 + 0x41;
    }
    else if (bVar9 < 0x34) {
      cVar7 = bVar9 + 0x47;
    }
    else if (bVar9 < 0x3e) {
      cVar7 = bVar9 - 4;
    }
    else if (bVar9 == 0x3e) {
      cVar7 = '+';
    }
    else {
      cVar7 = '/';
    }
    *(char *)(iVar6 + iVar10) = cVar7;
    bVar8 = (bVar8 & 3) << 4 | bVar2 >> 4;
    if (bVar8 < 0x1a) {
      cVar7 = bVar8 + 0x41;
    }
    else if (bVar8 < 0x34) {
      cVar7 = bVar8 + 0x47;
    }
    else if (bVar8 < 0x3e) {
      cVar7 = bVar8 - 4;
    }
    else if (bVar8 == 0x3e) {
      cVar7 = '+';
    }
    else {
      cVar7 = '/';
    }
    *(char *)(iVar6 + iVar10 + 1) = cVar7;
    bVar8 = (bVar2 & 0xf) * '\x04';
    if (bVar8 < 0x1a) {
      cVar7 = bVar8 + 0x41;
    }
    else if (bVar8 < 0x34) {
      cVar7 = bVar8 + 0x47;
    }
    else if (bVar8 < 0x3e) {
      cVar7 = bVar8 - 4;
    }
    else if (bVar8 == 0x3e) {
      cVar7 = '+';
    }
    else {
      cVar7 = '/';
    }
    *(char *)(iVar6 + iVar10 + 2) = cVar7;
    iVar11 = iVar10 + 3;
    iVar10 = iVar10 + 4;
    *(undefined1 *)(iVar6 + iVar11) = 0x3d;
  }
  else if (iVar11 == 1) {
    bVar8 = *(byte *)(param_2 + uVar12);
    bVar2 = bVar8 >> 2;
    if (bVar2 < 0x1a) {
      cVar7 = bVar2 + 0x41;
    }
    else if (bVar2 < 0x34) {
      cVar7 = bVar2 + 0x47;
    }
    else if (bVar2 < 0x3e) {
      cVar7 = bVar2 - 4;
    }
    else if (bVar2 == 0x3e) {
      cVar7 = '+';
    }
    else {
      cVar7 = '/';
    }
    *(char *)(iVar6 + iVar10) = cVar7;
    bVar8 = (bVar8 & 3) * '\x10';
    if (bVar8 < 0x1a) {
      cVar7 = bVar8 + 0x41;
    }
    else if (bVar8 < 0x34) {
      cVar7 = bVar8 + 0x47;
    }
    else if (bVar8 < 0x3e) {
      cVar7 = bVar8 - 4;
    }
    else if (bVar8 == 0x3e) {
      cVar7 = '+';
    }
    else {
      cVar7 = '/';
    }
    *(char *)(iVar6 + iVar10 + 1) = cVar7;
    *(undefined1 *)(iVar6 + iVar10 + 2) = 0x3d;
    iVar11 = iVar10 + 3;
    iVar10 = iVar10 + 4;
    *(undefined1 *)(iVar6 + iVar11) = 0x3d;
  }
  *(undefined1 *)(iVar6 + iVar10) = 0;
  return;
}

