// rea decompile_all
// name: FUN_00012480
// address: 0x12480
// body: available
// range: 0x12480-0x125aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00012480(ulonglong param_1,char *param_2,char *param_3,char *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0xb8,0x5f6e6577);
  if (puVar4 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar4,0,0xb8);
    puVar1 = puVar4 + 3;
    puVar4[4] = (ulonglong)puVar1;
    *puVar1 = (ulonglong)puVar1;
    *puVar4 = (ulonglong)&PTR_FUN_00027f40;
    puVar4[6] = param_1;
    puVar4[0x12] = (ulonglong)&PTR_LAB_00027fa0;
    puVar1 = puVar4 + 0x14;
    puVar4[0x15] = (ulonglong)puVar1;
    *puVar1 = (ulonglong)puVar1;
    puVar4[0x16] = 0x10;
    *(undefined4 *)(puVar4 + 1) = 0x11110006;
  }
  if (puVar4 == (ulonglong *)0x0) {
    uVar6 = 0xc000009a;
  }
  else {
    uVar5 = FUN_00013124((longlong)puVar4,param_2,param_3,param_4);
    uVar6 = uVar5 & 0xffffffff;
    if ((int)uVar5 < 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0xa8);
      plVar2 = (longlong *)((longlong)puVar4 + *(longlong *)(param_1 + 0xb0));
      *plVar2 = *plVar3;
      plVar2[1] = (longlong)plVar3;
      *(longlong **)(*plVar3 + 8) = plVar2;
      *plVar3 = (longlong)plVar2;
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      IoInvalidateDeviceRelations(*(undefined8 *)(param_1 + 0x70),0);
    }
  }
  return uVar6;
}

