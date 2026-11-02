// rea decompile_all
// name: FUN_0001a910
// address: 0x1a910
// body: available
// range: 0x1a910-0x1adf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001a910(ulonglong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  
  puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x340,0x42737661);
  puVar9 = (ulonglong *)0x0;
  puVar5 = puVar9;
  if (puVar4 != (ulonglong *)0x0) {
    FUN_0001cf40(puVar4,0,0x340);
    uVar6 = *(ulonglong *)(param_1 + 0x18);
    puVar5 = puVar4 + 1;
    puVar4[2] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
    puVar4[0x25] = uVar6;
    puVar4[0x26] = param_1;
    FUN_000155e0((longlong)puVar4);
    FUN_0001cf40(puVar4 + 0x38,0,0x50);
    puVar4[0x3a] = (ulonglong)&LAB_00015850;
    *puVar4 = (ulonglong)&PTR_FUN_0001ed98;
    puVar4[0x3d] = (ulonglong)&LAB_00015870;
    FUN_000158b0((longlong)puVar4,param_4);
    *(undefined4 *)(puVar4 + 0x2f) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x17c) = 1;
    puVar4[0x37] = (ulonglong)FUN_00017d70;
    puVar4[0x38] = (ulonglong)FUN_00015d70;
    puVar4[0x3c] = (ulonglong)FUN_00018090;
    puVar5 = puVar4;
  }
  *(ulonglong **)(param_1 + 0xb8) = puVar5;
  if (puVar5 != (ulonglong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x98);
    plVar1 = (longlong *)((longlong)puVar5 + *(longlong *)(param_1 + 0xa0));
    lVar3 = *plVar8;
    plVar1[1] = (longlong)plVar8;
    *plVar1 = lVar3;
    *(longlong **)(*plVar8 + 8) = plVar1;
    *plVar8 = (longlong)plVar1;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,600,0x42737661);
    if (puVar5 != (ulonglong *)0x0) {
      FUN_0001cf40(puVar5,0,600);
      uVar6 = *(ulonglong *)(param_1 + 0x18);
      puVar9 = puVar5 + 1;
      puVar5[2] = (ulonglong)puVar9;
      *puVar9 = (ulonglong)puVar9;
      puVar5[0x25] = uVar6;
      puVar5[0x26] = param_1;
      FUN_000155e0((longlong)puVar5);
      FUN_0001cf40(puVar5 + 0x38,0,0x50);
      puVar5[0x3d] = (ulonglong)&LAB_00015870;
      puVar9 = puVar5 + 0x42;
      puVar5[0x3a] = (ulonglong)&LAB_00015850;
      *puVar5 = (ulonglong)&PTR_FUN_0001ed98;
      *(undefined4 *)(puVar5 + 0x29) = 0;
      puVar5[0x2a] = 0;
      *(undefined4 *)(puVar5 + 0x2b) = 0;
      puVar5[0x2c] = 0;
      *(undefined4 *)(puVar5 + 0x2d) = 1;
      *puVar9 = 0;
      puVar5[0x43] = 0;
      puVar5[0x44] = 0;
      puVar5[0x45] = 0;
      puVar5[0x46] = 0;
      puVar5[0x47] = 0;
      puVar5[0x48] = 0;
      puVar5[0x49] = 0;
      *(undefined4 *)puVar9 = 0x40;
      *(undefined4 *)((longlong)puVar5 + 0x214) = 0;
      *(undefined4 *)(puVar5 + 0x43) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x21c) = 0;
      *(undefined4 *)(puVar5 + 0x44) = 0x73647561;
      *(undefined4 *)((longlong)puVar5 + 0x224) = 0x100000;
      *(undefined4 *)(puVar5 + 0x45) = 0xaa000080;
      *(undefined4 *)((longlong)puVar5 + 0x22c) = 0x719b3800;
      *(undefined4 *)(puVar5 + 0x46) = 0x6dba3190;
      *(undefined4 *)((longlong)puVar5 + 0x234) = 0x11cf67bd;
      *(undefined4 *)(puVar5 + 0x47) = 0x2000f7a0;
      *(undefined4 *)((longlong)puVar5 + 0x23c) = 0xe456d1af;
      *(undefined4 *)(puVar5 + 0x48) = 0xf6417d6;
      *(undefined4 *)((longlong)puVar5 + 0x244) = 0x11d0c318;
      *(undefined4 *)(puVar5 + 0x49) = 0xa0003fa4;
      *(undefined4 *)((longlong)puVar5 + 0x24c) = 0x963122c9;
      puVar5[0x4a] = (ulonglong)puVar9;
      puVar5[0x2e] = (ulonglong)(puVar5 + 0x4a);
      *(undefined4 *)(puVar5 + 0x2f) = 2;
      *(undefined4 *)((longlong)puVar5 + 0x17c) = 0;
      *(undefined4 *)(puVar5 + 0x32) = 0;
      puVar5[0x33] = 0;
      puVar5[0x30] = (ulonglong)&DAT_0001ef50;
      *(undefined4 *)(puVar5 + 0x34) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x1a4) = 0;
      *(undefined4 *)(puVar5 + 0x35) = 0;
      puVar9 = puVar5;
    }
    *(ulonglong **)(param_1 + 0xc0) = puVar9;
    if (puVar9 != (ulonglong *)0x0) {
      puVar9[0x31] = (ulonglong)&DAT_0001efe0;
      plVar1 = *(longlong **)(param_1 + 0x98);
      lVar3 = *plVar1;
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xa0) + *(longlong *)(param_1 + 0xc0));
      plVar8[1] = (longlong)plVar1;
      *plVar8 = lVar3;
      *(longlong **)(*plVar1 + 8) = plVar8;
      *plVar1 = (longlong)plVar8;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar6 = FUN_000153c0(param_1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      *(undefined ***)(param_1 + 0x20) = &PTR_FUN_0001e410;
      *(undefined **)(param_1 + 0x58) = &DAT_0001e3f0;
      *(undefined4 *)(param_1 + 0x50) = 2;
      *(undefined **)(param_1 + 0x38) = &DAT_0001eff0;
      *(undefined **)(param_1 + 0x28) = &DAT_0001e590;
      FUN_0001b910(param_1 + 0x110,0,param_4);
      plVar1 = (longlong *)(param_1 + 200);
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      iVar2 = *(int *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 100) = 0x18;
      *(longlong **)(param_1 + 0x68) = plVar1;
      if (iVar2 == 0) {
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0x1f000;
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 0x70) = 2;
        puVar7 = &DAT_0001e470;
      }
      else {
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        *plVar1 = param_1 + 0x350;
        *(undefined4 *)(param_1 + 0x60) = 3;
        *(undefined **)(param_1 + 0xd0) = &DAT_0001ef88;
        *(undefined4 *)(param_1 + 0x70) = 4;
        *(undefined **)(param_1 + 0xd8) = &DAT_0001ef98;
        *(ulonglong *)(param_1 + 0xe0) = param_1 + 0x118;
        *(undefined **)(param_1 + 0xe8) = &DAT_0001efa8;
        *(undefined **)(param_1 + 0xf0) = &DAT_0001efb8;
        *(undefined8 *)(param_1 + 0x100) = 0x1f000;
        puVar7 = &DAT_0001e430;
      }
      *(undefined **)(param_1 + 0x78) = puVar7;
      uVar6 = FUN_00015520(param_1,param_2,param_3);
      return uVar6;
    }
  }
  return 0xc000009a;
}

