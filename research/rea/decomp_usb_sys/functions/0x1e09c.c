// rea decompile_all
// name: FUN_0001e09c
// address: 0x1e09c
// body: available
// range: 0x1e09c-0x1e328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong * FUN_0001e09c(longlong param_1,int *param_2,ulonglong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  
  lVar9 = DAT_00029268 + 0x18;
  puVar6 = (ulonglong *)0x0;
  KeWaitForSingleObject(lVar9,0,0,0,0);
  uVar4 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),*param_2);
  if (uVar4 == 0) goto LAB_0001e2ff;
  puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x98,0x5f6e6577);
  puVar10 = puVar6;
  if (puVar5 != (ulonglong *)0x0) {
    FUN_000264d0(puVar5,0,0x98);
    puVar5[1] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
    puVar10 = puVar5 + 2;
    puVar5[3] = (ulonglong)puVar10;
    *puVar10 = (ulonglong)puVar10;
    puVar10 = puVar5 + 4;
    puVar5[5] = (ulonglong)puVar10;
    *puVar10 = (ulonglong)puVar10;
    *(undefined4 *)(puVar5 + 10) = 1000;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x5c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar5 + 100) = 0xffffffffffffffff;
    puVar10 = puVar5;
  }
  if (puVar10 == (ulonglong *)0x0) goto LAB_0001e2ff;
  puVar10[6] = uVar4;
  puVar10[9] = param_3;
  puVar10[8] = *(ulonglong *)(param_1 + 8);
  lVar3 = DAT_00029268;
  if (*(int *)(uVar4 + 0x18) == 200) {
    plVar1 = *(longlong **)(uVar4 + 0x30);
    if ((((plVar1 != (longlong *)(uVar4 + 0x30)) &&
         (uVar7 = (longlong)plVar1 - *(longlong *)(uVar4 + 0x40), uVar7 != 0)) &&
        (*(char *)(uVar7 + 0x37) != '\0')) && (*(int *)(uVar7 + 0x50) < *(int *)(uVar7 + 0x44))) {
      puVar10[7] = uVar7;
      *(int *)(uVar7 + 0x50) = *(int *)(uVar7 + 0x50) + 1;
      goto LAB_0001e2bd;
    }
  }
  else if (param_4 == *(int *)(DAT_00029268 + 0x6fc)) {
    plVar1 = (longlong *)(param_1 + 0x10);
    puVar5 = puVar6;
    do {
      puVar8 = puVar6;
      if (puVar5 == (ulonglong *)0x0) {
        if ((longlong *)*plVar1 == plVar1) goto LAB_0001e1eb;
        puVar5 = (ulonglong *)(*plVar1 - *(longlong *)(param_1 + 0x20));
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (longlong)puVar5);
        if (plVar2 == plVar1) goto LAB_0001e1eb;
        puVar5 = (ulonglong *)((longlong)plVar2 - *(longlong *)(param_1 + 0x20));
      }
      if ((puVar5 == (ulonglong *)0x0) || (puVar8 = puVar5, *(int *)(puVar5[6] + 0x1c) == *param_2))
      goto LAB_0001e1eb;
    } while( true );
  }
  goto LAB_0001e2f4;
LAB_0001e25d:
  if (puVar6 == (ulonglong *)0x0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_0001e28b;
    puVar6 = (ulonglong *)(*plVar1 - *(longlong *)(uVar4 + 0x40));
  }
  else {
    plVar2 = *(longlong **)((longlong)puVar6 + *(longlong *)(uVar4 + 0x40));
    if (plVar2 == plVar1) goto LAB_0001e28b;
    puVar6 = (ulonglong *)((longlong)plVar2 - *(longlong *)(uVar4 + 0x40));
  }
  if (puVar6 == (ulonglong *)0x0) goto LAB_0001e28b;
  *(int *)(puVar6 + 10) = (int)puVar6[10] + 1;
  goto LAB_0001e25d;
LAB_0001e28b:
  *(int *)(lVar3 + 0x764) = *(int *)(lVar3 + 0x764) + 1;
LAB_0001e2bd:
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar1 = (longlong *)((longlong)puVar10 + *(longlong *)(param_1 + 0x20));
  *plVar1 = *plVar2;
  plVar1[1] = (longlong)plVar2;
  *(longlong **)(*plVar2 + 8) = plVar1;
  *plVar2 = (longlong)plVar1;
  *(int *)(uVar4 + 0x28) = *(int *)(uVar4 + 0x28) + 1;
LAB_0001e2e4:
  KeReleaseMutex(lVar9,0);
  return puVar10;
LAB_0001e1eb:
  if (puVar8 == (ulonglong *)0x0) {
    plVar1 = (longlong *)(uVar4 + 0x30);
    puVar5 = puVar6;
    do {
      if (puVar5 == (ulonglong *)0x0) {
        if ((longlong *)*plVar1 == plVar1) goto LAB_0001e25d;
        puVar5 = (ulonglong *)(*plVar1 - *(longlong *)(uVar4 + 0x40));
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(uVar4 + 0x40) + (longlong)puVar5);
        if (plVar2 == plVar1) goto LAB_0001e25d;
        puVar5 = (ulonglong *)((longlong)plVar2 - *(longlong *)(uVar4 + 0x40));
      }
      if (puVar5 == (ulonglong *)0x0) goto LAB_0001e25d;
    } while ((((*(char *)((longlong)puVar5 + 0x37) != '\0') &&
              ((int)puVar5[10] < *(int *)((longlong)puVar5 + 0x44))) &&
             (((char)puVar5[7] != '\0' || ((int)puVar5[9] == 0)))) &&
            ((*(char *)((longlong)puVar5 + 0x39) != '\0' || (*(int *)((longlong)puVar5 + 0x4c) == 0)
             )));
    ExFreePoolWithTag(puVar10,0);
    puVar10 = puVar6;
    goto LAB_0001e2e4;
  }
LAB_0001e2f4:
  ExFreePoolWithTag(puVar10,0);
LAB_0001e2ff:
  KeReleaseMutex(lVar9,0);
  return (ulonglong *)0x0;
}

