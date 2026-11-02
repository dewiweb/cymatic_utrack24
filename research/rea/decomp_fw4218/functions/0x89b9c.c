// rea decompile_all
// name: FUN_00089b9c
// address: 0x89b9c
// body: available
// range: 0x89b9c-0x89f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00089d98) */

bool FUN_00089b9c(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_28;
  
  local_28 = 0;
  bVar10 = 1;
  uVar4 = (**(code **)(*param_2 + 4))(param_2,0x80,&local_28);
  iVar11 = 0;
  do {
    iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,2000);
    if (-1 < iVar5) {
      if (iVar5 == 0x15) {
        bVar3 = false;
        break;
      }
      if (iVar5 == 0x18) {
        iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,1000);
        if (iVar5 == 0x18) {
LAB_00089eb0:
          (**(code **)(*param_1 + 0x18))(param_1,6);
          (**(code **)(*param_1 + 0x20))(param_1);
          return false;
        }
      }
      else if (iVar5 == 0x43) {
        bVar3 = true;
        break;
      }
    }
    iVar11 = iVar11 + 1;
    if (299 < iVar11) {
LAB_00089e5c:
      (**(code **)(*param_1 + 0x18))(param_1,0x18);
      (**(code **)(*param_1 + 0x18))(param_1,0x18);
      (**(code **)(*param_1 + 0x18))(param_1,0x18);
      (**(code **)(*param_1 + 0x20))(param_1);
      return false;
    }
  } while( true );
LAB_00089c48:
  *(byte *)((int)param_1 + 9) = bVar10;
  *(undefined1 *)(param_1 + 2) = 1;
  *(byte *)((int)param_1 + 10) = ~bVar10;
  bVar13 = local_28 == 0x80;
  iVar11 = local_28;
  if (0x80 < local_28) {
    iVar11 = 0x80;
  }
  iVar5 = local_28 + -0x80;
  if (0x80 >= local_28) {
    bVar13 = iVar11 == 0;
    iVar5 = iVar11;
  }
  if (!bVar13 && iVar5 < 0 == (0x80 < local_28 && SBORROW4(local_28,0x80))) {
    FUN_00003c18((int)param_1 + 0xb,0x80);
    if (iVar11 == 0) {
      *(undefined1 *)((int)param_1 + 0xb) = 0x1a;
    }
    else {
      FUN_000039e0((int)param_1 + 0xb,uVar4,iVar11);
      if (iVar11 < 0x80) {
        *(undefined1 *)((int)param_1 + iVar11 + 0xb) = 0x1a;
      }
    }
    if (!bVar3) {
      cVar8 = *(char *)((int)param_1 + 0xb);
      cVar2 = (char)param_1[3];
      iVar11 = 0x3f;
      pcVar7 = (char *)((int)param_1 + 0xb);
      do {
        cVar8 = cVar8 + cVar2;
        cVar2 = pcVar7[3];
        cVar8 = cVar8 + pcVar7[2];
        iVar11 = iVar11 + -1;
        pcVar7 = pcVar7 + 2;
      } while (iVar11 != 0);
      iVar5 = 0;
      iVar11 = 0;
      *(char *)((int)param_1 + 0x8b) = *(char *)((int)param_1 + 0x8a) + cVar8;
      goto LAB_00089da0;
    }
    bVar1 = *(byte *)(param_1 + 3);
    uVar6 = (uint)*(ushort *)(DAT_00089f40 + (uint)*(byte *)((int)param_1 + 0xb) * 2);
    iVar11 = 0x3f;
    pbVar9 = (byte *)((int)param_1 + 0xb);
    do {
      uVar12 = (uint)bVar1;
      bVar1 = pbVar9[3];
      uVar6 = ((uint)*(ushort *)(DAT_00089f40 + (uVar12 ^ uVar6 >> 8) * 2) ^ uVar6 << 8) &
              0xff00ffff;
      iVar11 = iVar11 + -1;
      uVar6 = ((uint)*(ushort *)(DAT_00089f40 + ((uint)pbVar9[2] ^ uVar6 >> 8) * 2) ^ uVar6 << 8) &
              0xff00ffff;
      pbVar9 = pbVar9 + 2;
    } while (iVar11 != 0);
    iVar5 = 0;
    uVar6 = ((uint)*(ushort *)
                    (DAT_00089f40 + ((uint)*(byte *)((int)param_1 + 0x8a) ^ uVar6 >> 8) * 2) ^
            uVar6 << 8) & 0xff00ffff;
    *(char *)((int)param_1 + 0x8b) = (char)(uVar6 >> 8);
    *(char *)(param_1 + 0x23) = (char)uVar6;
    do {
      iVar11 = 0;
LAB_00089da0:
      do {
        (**(code **)(*param_1 + 0x18))(param_1,*(undefined1 *)((int)param_1 + iVar11 + 8));
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(bVar3 + 0x84));
      iVar11 = (**(code **)(*param_1 + 0x1c))(param_1,1000);
      if (-1 < iVar11) {
        if (iVar11 == 6) goto LAB_00089e08;
        if ((iVar11 == 0x18) &&
           (iVar11 = (**(code **)(*param_1 + 0x1c))(param_1,1000), iVar11 == 0x18))
        goto LAB_00089eb0;
      }
      iVar5 = iVar5 + 1;
      if (0x18 < iVar5) goto LAB_00089e5c;
    } while( true );
  }
  iVar11 = 0;
  goto LAB_00089ee0;
LAB_00089e08:
  bVar10 = bVar10 + 1;
  uVar4 = (**(code **)(*param_2 + 4))(param_2,0x80,&local_28);
  goto LAB_00089c48;
  while (iVar11 = iVar11 + 1, iVar11 < 10) {
LAB_00089ee0:
    (**(code **)(*param_1 + 0x18))(param_1,4);
    iVar5 = (**(code **)(*param_1 + 0x1c))(param_1,2000);
    if (iVar5 == 6) break;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  return iVar5 == 6;
}

