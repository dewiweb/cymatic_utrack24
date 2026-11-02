// rea decompile_all
// name: FUN_0001be30
// address: 0x1be30
// body: available
// range: 0x1be30-0x1c54c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001be30(ulonglong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *(undefined4 *)(param_1 + 0xd8) = 0x6994ad04;
  *(undefined4 *)(param_1 + 0xdc) = 0x11d093ef;
  *(undefined4 *)(param_1 + 0xe0) = 0xa000cca3;
  *(undefined4 *)(param_1 + 0xe4) = 0x963122c9;
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 0xe8) = 0x65e8773e;
    *(undefined4 *)(param_1 + 0xec) = 0x11d08f56;
    *(undefined4 *)(param_1 + 0xf0) = 0xa000b9a3;
    *(undefined4 *)(param_1 + 0xf4) = 0x963122c9;
    puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,0x2e8,0x42737661);
    puVar2 = (ulonglong *)0x0;
    puVar4 = puVar2;
    if (puVar3 != (ulonglong *)0x0) {
      FUN_0001cf40(puVar3,0,0x2e8);
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      puVar4 = puVar3 + 1;
      puVar3[2] = (ulonglong)puVar4;
      *puVar4 = (ulonglong)puVar4;
      puVar3[0x25] = uVar5;
      puVar3[0x26] = param_1;
      FUN_000155e0((longlong)puVar3);
      FUN_0001cf40(puVar3 + 0x38,0,0x50);
      *puVar3 = (ulonglong)&PTR_FUN_0001ed98;
      puVar3[0x3d] = (ulonglong)&LAB_00015870;
      puVar3[0x3a] = (ulonglong)&LAB_00015850;
      FUN_00015ea0((longlong)puVar3,1);
      puVar4 = puVar3;
    }
    *(ulonglong **)(param_1 + 200) = puVar4;
    if (puVar4 != (ulonglong *)0x0) {
      puVar4[0x31] = (ulonglong)&DAT_0001f018;
      plVar7 = *(longlong **)(param_1 + 0x98);
      lVar1 = *plVar7;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + *(longlong *)(param_1 + 200));
      plVar6[1] = (longlong)plVar7;
      *plVar6 = lVar1;
      *(longlong **)(*plVar7 + 8) = plVar6;
      *plVar7 = (longlong)plVar6;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,600,0x42737661);
      if (puVar4 != (ulonglong *)0x0) {
        FUN_0001cf40(puVar4,0,600);
        uVar5 = *(ulonglong *)(param_1 + 0x18);
        puVar2 = puVar4 + 1;
        puVar4[2] = (ulonglong)puVar2;
        *puVar2 = (ulonglong)puVar2;
        puVar4[0x25] = uVar5;
        puVar4[0x26] = param_1;
        FUN_000155e0((longlong)puVar4);
        FUN_0001cf40(puVar4 + 0x38,0,0x50);
        puVar4[0x3d] = (ulonglong)&LAB_00015870;
        puVar4[0x3a] = (ulonglong)&LAB_00015850;
        puVar2 = puVar4 + 0x42;
        *puVar4 = (ulonglong)&PTR_FUN_0001ed98;
        *(undefined4 *)(puVar4 + 0x29) = 0;
        puVar4[0x2a] = 0;
        *(undefined4 *)(puVar4 + 0x2b) = 0;
        puVar4[0x2c] = 0;
        *(undefined4 *)(puVar4 + 0x2d) = 1;
        *puVar2 = 0;
        puVar4[0x43] = 0;
        puVar4[0x44] = 0;
        puVar4[0x45] = 0;
        puVar4[0x46] = 0;
        puVar4[0x47] = 0;
        puVar4[0x48] = 0;
        puVar4[0x49] = 0;
        *(undefined4 *)puVar2 = 0x40;
        *(undefined4 *)((longlong)puVar4 + 0x214) = 0;
        *(undefined4 *)(puVar4 + 0x43) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x21c) = 0;
        *(undefined4 *)(puVar4 + 0x44) = 0x73647561;
        *(undefined4 *)((longlong)puVar4 + 0x224) = 0x100000;
        *(undefined4 *)(puVar4 + 0x45) = 0xaa000080;
        *(undefined4 *)((longlong)puVar4 + 0x22c) = 0x719b3800;
        *(undefined4 *)(puVar4 + 0x46) = 0x6dba3190;
        *(undefined4 *)((longlong)puVar4 + 0x234) = 0x11cf67bd;
        *(undefined4 *)(puVar4 + 0x47) = 0x2000f7a0;
        *(undefined4 *)((longlong)puVar4 + 0x23c) = 0xe456d1af;
        *(undefined4 *)(puVar4 + 0x48) = 0xf6417d6;
        *(undefined4 *)((longlong)puVar4 + 0x244) = 0x11d0c318;
        *(undefined4 *)(puVar4 + 0x49) = 0xa0003fa4;
        *(undefined4 *)((longlong)puVar4 + 0x24c) = 0x963122c9;
        puVar4[0x4a] = (ulonglong)puVar2;
        puVar4[0x2e] = (ulonglong)(puVar4 + 0x4a);
        *(undefined4 *)(puVar4 + 0x2f) = 2;
        *(undefined4 *)((longlong)puVar4 + 0x17c) = 0;
        *(undefined4 *)(puVar4 + 0x32) = 0;
        puVar4[0x33] = 0;
        puVar4[0x30] = (ulonglong)&DAT_0001ef50;
        *(undefined4 *)(puVar4 + 0x34) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x1a4) = 0;
        *(undefined4 *)(puVar4 + 0x35) = 0;
        puVar2 = puVar4;
      }
      *(ulonglong **)(param_1 + 0xd0) = puVar2;
      if (puVar2 != (ulonglong *)0x0) {
        puVar2[0x31] = (ulonglong)&DAT_0001ed48;
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + *(longlong *)(param_1 + 0xd0));
        goto LAB_0001c4a8;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = 0x65e8773d;
    *(undefined4 *)(param_1 + 0xec) = 0x11d08f56;
    *(undefined4 *)(param_1 + 0xf0) = 0xa000b9a3;
    *(undefined4 *)(param_1 + 0xf4) = 0x963122c9;
    puVar2 = (ulonglong *)ExAllocatePoolWithTag(0);
    if (puVar2 == (ulonglong *)0x0) {
      puVar2 = (ulonglong *)0x0;
    }
    else {
      FUN_0001cf40(puVar2,0,600);
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      puVar4 = puVar2 + 1;
      puVar2[2] = (ulonglong)puVar4;
      *puVar4 = (ulonglong)puVar4;
      puVar2[0x25] = uVar5;
      puVar2[0x26] = param_1;
      FUN_000155e0((longlong)puVar2);
      FUN_0001cf40(puVar2 + 0x38,0,0x50);
      puVar2[0x3d] = (ulonglong)&LAB_00015870;
      puVar2[0x3a] = (ulonglong)&LAB_00015850;
      puVar4 = puVar2 + 0x42;
      *puVar2 = (ulonglong)&PTR_FUN_0001ed98;
      *(undefined4 *)(puVar2 + 0x29) = 0;
      puVar2[0x2a] = 0;
      *(undefined4 *)(puVar2 + 0x2b) = 0;
      puVar2[0x2c] = 0;
      *(undefined4 *)(puVar2 + 0x2d) = 1;
      *puVar4 = 0;
      puVar2[0x43] = 0;
      puVar2[0x44] = 0;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x47] = 0;
      puVar2[0x48] = 0;
      puVar2[0x49] = 0;
      *(undefined4 *)puVar4 = 0x40;
      *(undefined4 *)((longlong)puVar2 + 0x214) = 0;
      *(undefined4 *)(puVar2 + 0x43) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x21c) = 0;
      *(undefined4 *)(puVar2 + 0x44) = 0x73647561;
      *(undefined4 *)((longlong)puVar2 + 0x224) = 0x100000;
      *(undefined4 *)(puVar2 + 0x45) = 0xaa000080;
      *(undefined4 *)((longlong)puVar2 + 0x22c) = 0x719b3800;
      *(undefined4 *)(puVar2 + 0x46) = 0x6dba3190;
      *(undefined4 *)((longlong)puVar2 + 0x234) = 0x11cf67bd;
      *(undefined4 *)(puVar2 + 0x47) = 0x2000f7a0;
      *(undefined4 *)((longlong)puVar2 + 0x23c) = 0xe456d1af;
      *(undefined4 *)(puVar2 + 0x48) = 0xf6417d6;
      *(undefined4 *)((longlong)puVar2 + 0x244) = 0x11d0c318;
      *(undefined4 *)(puVar2 + 0x49) = 0xa0003fa4;
      *(undefined4 *)((longlong)puVar2 + 0x24c) = 0x963122c9;
      puVar2[0x4a] = (ulonglong)puVar4;
      puVar2[0x2e] = (ulonglong)(puVar2 + 0x4a);
      *(undefined4 *)(puVar2 + 0x2f) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x17c) = 0;
      *(undefined4 *)(puVar2 + 0x32) = 0;
      puVar2[0x33] = 0;
      puVar2[0x30] = (ulonglong)&DAT_0001ef40;
      *(undefined4 *)(puVar2 + 0x34) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1a4) = 0;
      *(undefined4 *)(puVar2 + 0x35) = 0;
    }
    puVar4 = (ulonglong *)0x0;
    *(ulonglong **)(param_1 + 0xc0) = puVar2;
    if (puVar2 != (ulonglong *)0x0) {
      puVar2[0x31] = (ulonglong)&DAT_0001ed48;
      plVar7 = *(longlong **)(param_1 + 0x98);
      lVar1 = *plVar7;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + *(longlong *)(param_1 + 0xc0));
      plVar6[1] = (longlong)plVar7;
      *plVar6 = lVar1;
      *(longlong **)(*plVar7 + 8) = plVar6;
      *plVar7 = (longlong)plVar6;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      puVar2 = (ulonglong *)ExAllocatePoolWithTag(0,0x2e8,0x42737661);
      if (puVar2 != (ulonglong *)0x0) {
        FUN_0001cf40(puVar2,0,0x2e8);
        uVar5 = *(ulonglong *)(param_1 + 0x18);
        puVar4 = puVar2 + 1;
        puVar2[2] = (ulonglong)puVar4;
        *puVar4 = (ulonglong)puVar4;
        puVar2[0x25] = uVar5;
        puVar2[0x26] = param_1;
        FUN_000155e0((longlong)puVar2);
        FUN_0001cf40(puVar2 + 0x38,0,0x50);
        puVar2[0x3d] = (ulonglong)&LAB_00015870;
        puVar2[0x3a] = (ulonglong)&LAB_00015850;
        *puVar2 = (ulonglong)&PTR_FUN_0001ed98;
        FUN_00015ea0((longlong)puVar2,2);
        puVar4 = puVar2;
      }
      *(ulonglong **)(param_1 + 0xb8) = puVar4;
      if (puVar4 != (ulonglong *)0x0) {
        plVar7 = (longlong *)((longlong)puVar4 + *(longlong *)(param_1 + 0xa0));
LAB_0001c4a8:
        plVar6 = *(longlong **)(param_1 + 0x98);
        *plVar7 = *plVar6;
        plVar7[1] = (longlong)plVar6;
        *(longlong **)(*plVar6 + 8) = plVar7;
        *plVar6 = (longlong)plVar7;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        uVar5 = FUN_000153c0(param_1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(undefined **)(param_1 + 0x28) = &DAT_0001e590;
        *(undefined ***)(param_1 + 0x20) = &PTR_FUN_0001e290;
        *(undefined4 *)(param_1 + 0x50) = 2;
        *(undefined **)(param_1 + 0x68) = &DAT_0001e2b0;
        *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 100) = 0x18;
        *(undefined4 *)(param_1 + 0x70) = 2;
        *(undefined **)(param_1 + 0x78) = &DAT_0001e2c8;
        uVar5 = FUN_00015520(param_1,param_2,param_3);
        return uVar5;
      }
    }
  }
  return 0xc000009a;
}

