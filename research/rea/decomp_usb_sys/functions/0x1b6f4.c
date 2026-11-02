// rea decompile_all
// name: FUN_0001b6f4
// address: 0x1b6f4
// body: available
// range: 0x1b6f4-0x1b955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong * FUN_0001b6f4(ulonglong param_1,ulonglong param_2,undefined4 param_3,char *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  
  puVar6 = (ulonglong *)0x0;
  if (*(char *)(param_2 + 0x78) == '\0') {
    puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x128,0x5f6e6577);
    if (puVar5 != (ulonglong *)0x0) {
      FUN_000264d0(puVar5,0,0x128);
      puVar6 = puVar5 + 0xb;
      puVar1 = puVar5 + 1;
      puVar5[2] = (ulonglong)puVar1;
      *puVar1 = (ulonglong)puVar1;
      puVar5[0xc] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0xd] = 0;
      puVar6 = puVar5 + 0xe;
      puVar5[0xf] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0x10] = 0;
      puVar6 = puVar5 + 0x11;
      puVar5[0x12] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0x13] = 0x20;
      *(undefined1 *)((longlong)puVar5 + 0x114) = 0;
      puVar6 = puVar5;
      goto LAB_0001b816;
    }
  }
  else {
    puVar5 = (ulonglong *)ExAllocatePoolWithTag();
    if (puVar5 != (ulonglong *)0x0) {
      FUN_000264d0(puVar5,0,0x118);
      puVar6 = puVar5 + 0xb;
      puVar1 = puVar5 + 1;
      puVar5[2] = (ulonglong)puVar1;
      *puVar1 = (ulonglong)puVar1;
      puVar5[0xc] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0xd] = 0;
      puVar6 = puVar5 + 0xe;
      puVar5[0xf] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0x10] = 0;
      puVar6 = puVar5 + 0x11;
      puVar5[0x12] = (ulonglong)puVar6;
      *puVar6 = (ulonglong)puVar6;
      puVar5[0x13] = 0x20;
      *(undefined1 *)((longlong)puVar5 + 0x114) = 1;
      puVar6 = puVar5;
LAB_0001b816:
      *puVar6 = (ulonglong)&PTR_FUN_00027bf8;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
    }
  }
  if (puVar6 == (ulonglong *)0x0) {
    return (ulonglong *)0x0;
  }
  puVar6[4] = param_1;
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 < 1) {
LAB_0001b928:
    (**(code **)*puVar6)(puVar6,1);
    return (ulonglong *)0x0;
  }
  if (iVar4 < 4) {
    *(undefined4 *)(puVar6 + 3) = 1;
LAB_0001b8ae:
    *(undefined1 *)((longlong)puVar6 + 0x39) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 0x7fffffff;
  }
  else {
    if (iVar4 != 100) {
      if (iVar4 != 0x65) {
        if (iVar4 != 200) goto LAB_0001b928;
        *(undefined4 *)(puVar6 + 3) = 3;
        *(undefined1 *)((longlong)puVar6 + 0x35) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
        *(undefined1 *)(puVar6 + 7) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x36) = 0;
        *(undefined4 *)(puVar6 + 8) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x39) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x44) = 1;
        goto LAB_0001b8cc;
      }
      *(undefined4 *)(puVar6 + 3) = 2;
      goto LAB_0001b8ae;
    }
    *(undefined4 *)(puVar6 + 3) = 2;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x39) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 1;
  }
  *(undefined1 *)((longlong)puVar6 + 0x35) = 1;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x7fffffff;
  *(undefined1 *)((longlong)puVar6 + 0x36) = 1;
  *(undefined4 *)(puVar6 + 8) = 0x7fffffff;
LAB_0001b8cc:
  *(undefined1 *)((longlong)puVar6 + 0x37) = 1;
  *(undefined4 *)(puVar6 + 6) = param_3;
  *(char *)((longlong)puVar6 + 0x34) = (char)param_3;
  FUN_000117c0((char *)((longlong)puVar6 + 0xc4),param_4,0x28);
  iVar4 = FUN_00013f24();
  puVar6[5] = param_2;
  *(int *)((longlong)puVar6 + 0x1c) = iVar4;
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar2 = (longlong *)((longlong)puVar6 + *(longlong *)(param_2 + 0x40));
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  return puVar6;
}

