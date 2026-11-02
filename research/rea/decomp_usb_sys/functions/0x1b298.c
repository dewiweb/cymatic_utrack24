// rea decompile_all
// name: FUN_0001b298
// address: 0x1b298
// body: available
// range: 0x1b298-0x1b6ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0001b298(ulonglong param_1,char param_2,uint param_3,char param_4,int param_5,longlong param_6,
            undefined1 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int local_res20 [2];
  longlong local_38 [2];
  
  puVar7 = (ulonglong *)0x0;
  puVar8 = puVar7;
  if (param_4 == '\0') {
    puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,0x170,0x5f6e6577);
    if (puVar6 != (ulonglong *)0x0) {
      FUN_000264d0(puVar6,0,0x170);
      puVar8 = puVar6 + 6;
      puVar11 = puVar6 + 1;
      puVar6[2] = (ulonglong)puVar11;
      *puVar11 = (ulonglong)puVar11;
      puVar6[7] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      puVar6[8] = 8;
      puVar8 = puVar6 + 10;
      puVar6[0xb] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      puVar6[0xc] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x7b) = 1;
      *puVar6 = (ulonglong)&PTR_FUN_00028128;
      puVar8 = puVar6 + 0x10;
      puVar6[0x11] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      *(undefined4 *)((longlong)puVar6 + 0x134) = 1;
      *(undefined4 *)(puVar6 + 0x27) = 1;
      *(undefined4 *)((longlong)puVar6 + 0x13c) = 0x2000006;
      memcpy((void *)((longlong)puVar6 + 0x154),(undefined4 *)((longlong)puVar6 + 0x13c),0x18);
      *(undefined1 *)(puVar6 + 0xf) = 0;
      puVar8 = puVar6;
    }
  }
  else {
    puVar6 = (ulonglong *)ExAllocatePoolWithTag();
    if (puVar6 != (ulonglong *)0x0) {
      FUN_000264d0(puVar6,0,0x130);
      puVar8 = puVar6 + 6;
      puVar11 = puVar6 + 1;
      puVar6[2] = (ulonglong)puVar11;
      *puVar11 = (ulonglong)puVar11;
      puVar6[7] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      puVar6[8] = 8;
      puVar8 = puVar6 + 10;
      puVar6[0xb] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      puVar6[0xc] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      *puVar6 = (ulonglong)&PTR_FUN_00028100;
      puVar8 = puVar6 + 0x10;
      *(undefined1 *)((longlong)puVar6 + 0x7b) = 1;
      puVar6[0x11] = (ulonglong)puVar8;
      *puVar8 = (ulonglong)puVar8;
      *(undefined1 *)(puVar6 + 0xf) = 1;
      puVar8 = puVar6;
    }
  }
  if (puVar8 == (ulonglong *)0x0) {
    return 0xe0000002;
  }
  puVar8[4] = param_1;
  if (param_2 == '\0') {
    if (param_3 == 1) {
      *(undefined4 *)(puVar8 + 3) = 1;
    }
    else if (param_3 == 2) {
      *(undefined4 *)(puVar8 + 3) = 2;
    }
    else {
      *(undefined4 *)(puVar8 + 3) = 3;
    }
  }
  else if (param_2 == '\x01') {
    *(undefined4 *)(puVar8 + 3) = 100;
  }
  else if (param_2 == '\x02') {
    *(undefined4 *)(puVar8 + 3) = 0x65;
  }
  else {
    if (param_2 != -0x40) {
      (**(code **)*puVar8)(puVar8,1);
      return 0xe0000015;
    }
    *(undefined4 *)(puVar8 + 3) = 200;
  }
  uVar10 = 0;
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      puVar6 = FUN_0001b6f4(param_1,(ulonglong)puVar8,uVar5 + param_5,
                            *(char **)(param_6 + uVar10 * 8));
      if (puVar6 == (ulonglong *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
        puVar8 = puVar7;
        break;
      }
      bVar9 = (char)uVar10 + 1;
      uVar10 = (ulonglong)bVar9;
      uVar5 = (uint)bVar9;
    } while (bVar9 < param_3);
  }
  *(undefined1 *)((longlong)puVar8 + 0x74) = param_7;
  *(undefined1 *)((longlong)puVar8 + 0x75) = param_8;
  iVar4 = FUN_00013f24();
  *(int *)(puVar8 + 5) = (int)puVar8[5] + 1;
  lVar3 = DAT_00029268;
  *(int *)((longlong)puVar8 + 0x1c) = iVar4;
  plVar2 = *(longlong **)(lVar3 + 0x128);
  plVar1 = (longlong *)((longlong)puVar8 + *(longlong *)(lVar3 + 0x130));
  puVar6 = puVar8 + 6;
  *plVar1 = *plVar2;
  plVar1[1] = (longlong)plVar2;
  *(longlong **)(*plVar2 + 8) = plVar1;
  *plVar2 = (longlong)plVar1;
  puVar11 = puVar7;
  puVar12 = puVar7;
LAB_0001b539:
  if (puVar11 == (ulonglong *)0x0) {
    if ((ulonglong *)*puVar6 == puVar6) goto LAB_0001b62d;
    puVar11 = (ulonglong *)((longlong)*puVar6 - puVar8[8]);
  }
  else {
    puVar11 = *(ulonglong **)(puVar8[8] + (longlong)puVar11);
    if (puVar11 == puVar6) goto LAB_0001b62d;
    puVar11 = (ulonglong *)((longlong)puVar11 - puVar8[8]);
  }
  if (puVar11 == (ulonglong *)0x0) goto LAB_0001b62d;
  FUN_000117c0((char *)((longlong)puVar11 + 0xec),(char *)((longlong)puVar11 + 0xc4),0x28);
  local_38[1] = 0;
  local_38[0] = 0;
  uVar5 = FUN_00016f70(local_38 + 1,local_38,(longlong)puVar11);
  if ((int)uVar5 < 0) {
    if (local_38[0] != 0) {
      ZwClose();
    }
    FUN_00016db0(local_38 + 1);
  }
  else {
    FUN_000115bc(local_38,L"Nickname",(char *)((longlong)puVar11 + 0xec),0x28,
                 (char *)((longlong)puVar11 + 0xc4));
    if (local_38[0] != 0) {
      ZwClose();
    }
    FUN_00016db0(local_38 + 1);
    uVar5 = 0;
  }
  if (((int)uVar5 < 0) && (-1 < (int)puVar12)) {
    puVar12 = (ulonglong *)(ulonglong)uVar5;
  }
  goto LAB_0001b539;
LAB_0001b62d:
  local_38[0] = 0;
  iVar4 = FUN_000232d4((longlong)puVar8,local_38);
  if (-1 < iVar4) {
    *(undefined1 *)((longlong)puVar8 + 0x7b) = 1;
    local_res20[0] = 1;
    FUN_00011568(local_38,L"CreateSoundDevice",local_res20,1);
    if (local_res20[0] == 0) {
      *(undefined1 *)((longlong)puVar8 + 0x7b) = 0;
    }
    if (((int)puVar8[3] == 200) && (*(char *)((longlong)puVar8 + 0x7b) != '\0')) {
      do {
        if (puVar7 == (ulonglong *)0x0) {
          if ((ulonglong *)*puVar6 == puVar6) break;
          puVar7 = (ulonglong *)((longlong)*puVar6 - puVar8[8]);
        }
        else {
          puVar7 = *(ulonglong **)((longlong)puVar7 + puVar8[8]);
          if (puVar7 == puVar6) break;
          puVar7 = (ulonglong *)((longlong)puVar7 - puVar8[8]);
        }
        if (puVar7 == (ulonglong *)0x0) break;
        *(undefined4 *)((longlong)puVar7 + 0x44) = 1;
      } while( true );
    }
  }
  if (local_38[0] != 0) {
    ZwClose();
  }
  return 0;
}

