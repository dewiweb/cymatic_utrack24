// rea decompile_all
// name: FUN_0001bfc4
// address: 0x1bfc4
// body: available
// range: 0x1bfc4-0x1c31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001bfc4(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong extraout_RAX;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  int iVar14;
  longlong lVar15;
  uint local_res8 [2];
  
  lVar6 = 0;
  lVar15 = 0;
  if (param_1[0x36e] != 0) {
    ExFreePoolWithTag(param_1[0x36e],0);
    param_1[0x36e] = 0;
    *(undefined4 *)(param_1 + 0x372) = 0;
    param_1[0x36f] = 0;
  }
  uVar9 = 9;
  iVar14 = 0;
  do {
    puVar3 = FUN_00011878(uVar9,0x644f4342,'\x01');
    if (puVar3 == (ulonglong *)0x0) {
      iVar2 = -0x1ffffffe;
      break;
    }
    local_res8[0] = uVar9;
    iVar2 = FUN_0001be20((longlong)param_1,1,local_res8,puVar3);
    if (iVar2 < 0) {
      ExFreePoolWithTag(puVar3);
LAB_0001c0d0:
      puVar3 = (ulonglong *)0x0;
LAB_0001c0d2:
      if (-1 < iVar2) {
        uVar12 = 0xffffffff;
        pbVar13 = (byte *)((ulonglong)uVar9 + (longlong)puVar3);
        *(uint *)(param_1 + 0x372) = uVar9;
        param_1[0x36e] = (ulonglong)puVar3;
        param_1[0x36f] = (ulonglong)pbVar13;
        pbVar4 = FUN_0001bed0((longlong)param_1,(byte *)0x0,0xffffffff,0xffffffff,1,1);
        param_1[0x370] = (ulonglong)pbVar4;
        if (pbVar4 == (byte *)0x0) {
          iVar2 = -0x3fffffff;
        }
        puVar8 = (ulonglong *)(pbVar4 + *pbVar4);
        if ((ulonglong *)(pbVar4 + *pbVar4) == (ulonglong *)0x0) {
          puVar8 = puVar3;
        }
        goto LAB_0001c13a;
      }
      break;
    }
    if (local_res8[0] != uVar9) {
      ExFreePoolWithTag(puVar3);
      iVar2 = -0x1fffffff;
      goto LAB_0001c0d0;
    }
    if (*(ushort *)((longlong)puVar3 + 2) <= uVar9) goto LAB_0001c0d2;
    uVar9 = (uint)*(ushort *)((longlong)puVar3 + 2);
    ExFreePoolWithTag(puVar3,0);
    iVar14 = iVar14 + 1;
    iVar2 = -0x1fffffff;
  } while (iVar14 < 2);
  uVar12 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x372) = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  param_1[0x371] = 0;
  goto LAB_0001c0a1;
  while( true ) {
    if (*(byte *)((longlong)puVar8 + 1) == 4) goto LAB_0001c145;
    puVar8 = (ulonglong *)((longlong)puVar8 + (ulonglong)(byte)*puVar8);
    if ((byte)*puVar8 == 0) break;
LAB_0001c13a:
    if (pbVar13 + -2 <= puVar8) break;
  }
  puVar8 = (ulonglong *)0x0;
LAB_0001c145:
  param_1[0x371] = (ulonglong)puVar8;
LAB_0001c0a1:
  if (iVar2 < 0) goto LAB_0001c2f6;
  uVar9 = 0;
  while( true ) {
    uVar10 = (uint)uVar12;
    pbVar4 = FUN_0001bed0((longlong)param_1,(byte *)param_1[0x36e],uVar9,uVar10,uVar10,uVar10);
    if (pbVar4 == (byte *)0x0) break;
    uVar9 = uVar9 + 1;
  }
  uVar10 = (uVar9 + 1) * 0x10;
  puVar3 = FUN_00011878(uVar10,0x644f4342,'\x01');
  if (puVar3 == (ulonglong *)0x0) {
LAB_0001c319:
    iVar2 = -0x1ffffffe;
    lVar15 = lVar6;
  }
  else {
    FUN_000264d0(puVar3,0,(ulonglong)uVar10);
    uVar10 = 0;
    puVar8 = puVar3;
    if (uVar9 != 0) {
      do {
        uVar5 = USBD_ParseConfigurationDescriptorEx
                          (param_1[0x36e],param_1[0x36e],uVar10,0,0xffffffff,0xffffffff,0xffffffff);
        *puVar8 = uVar5;
        if (uVar5 == 0) {
          iVar2 = -0x1fffffff;
          goto LAB_0001c2d2;
        }
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar10 < uVar9);
    }
    lVar6 = USBD_CreateConfigurationRequestEx(param_1[0x36e],puVar3);
    if (lVar6 == 0) goto LAB_0001c319;
    if (uVar9 != 0) {
      puVar8 = puVar3 + 1;
      uVar5 = (ulonglong)uVar9;
      do {
        uVar1 = *puVar8;
        if ((uVar1 != 0) &&
           (uVar11 = (ulonglong)*(uint *)(uVar1 + 0x10), *(uint *)(uVar1 + 0x10) != 0)) {
          puVar7 = (undefined4 *)(uVar1 + 0x2c);
          do {
            puVar7[-1] = 0x10000;
            *puVar7 = 4;
            if (puVar7[-4] == 1) {
              *puVar7 = 0xc;
            }
            puVar7 = puVar7 + 6;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar8 = puVar8 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(undefined4 *)(lVar6 + 4) = 0xffffffff;
    lVar15 = lVar6;
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
      iVar2 = -0x3fffff63;
    }
    else {
      iVar2 = FUN_0001a36c((longlong)param_1,lVar6,*(uint *)(DAT_00029268 + 0x748));
      if (-1 < iVar2) {
        uVar10 = 0;
        puVar8 = puVar3;
        if (uVar9 != 0) {
          do {
            param_1 = FUN_0001c610((ulonglong)param_1,(ulonglong *)puVar8[1],(ulonglong *)*puVar8);
            if (extraout_RAX == 0) goto LAB_0001c319;
            uVar10 = uVar10 + 1;
            puVar8 = puVar8 + 2;
          } while (uVar10 < uVar9);
        }
        uVar5 = *(ulonglong *)(lVar6 + 0x20);
        *(undefined1 *)(param_1 + 0x377) = 1;
        param_1[0x373] = uVar5;
      }
    }
  }
LAB_0001c2d2:
  if (puVar3 != (ulonglong *)0x0) {
    ExFreePoolWithTag(puVar3,0);
  }
  if (lVar15 != 0) {
    ExFreePoolWithTag(lVar15,0);
  }
  if (-1 < iVar2) {
    return iVar2;
  }
LAB_0001c2f6:
  FUN_0001c574((longlong)param_1);
  return iVar2;
}

