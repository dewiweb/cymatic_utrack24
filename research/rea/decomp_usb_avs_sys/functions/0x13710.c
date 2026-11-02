// rea decompile_all
// name: FUN_00013710
// address: 0x13710
// body: available
// range: 0x13710-0x1383c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00013710(longlong param_1,undefined8 *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint local_18;
  undefined4 local_14 [3];
  
  puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,0x2000,0x6e4b6e4b);
  if (puVar3 != (ulonglong *)0x0) {
    FUN_0001cf40(puVar3,0,0x2000);
    iVar2 = FUN_00014ae0(param_2,param_3,puVar3,0x2000,&local_18,local_14);
    if (iVar2 == 0) {
      uVar4 = (ulonglong)param_5;
      if ((((uVar4 + 0x12 <= (ulonglong)local_18) && (*(short *)(uVar4 + (longlong)puVar3) == -2))
          && ((iVar2 = *(int *)(param_1 + 0x28), *(int *)(uVar4 + 4 + (longlong)puVar3) != iVar2 ||
              (*(ushort *)(uVar4 + 2 + (longlong)puVar3) != param_4)))) &&
         (uVar1 = *(ushort *)(uVar4 + 2 + (longlong)puVar3), uVar1 != 0)) {
        *(int *)(uVar4 + 4 + (longlong)puVar3) = iVar2;
        *(short *)(uVar4 + 2 + (longlong)puVar3) = (short)param_4;
        uVar1 = (short)((ulonglong)*(ushort *)(uVar4 + 0xc + (longlong)puVar3) /
                       (ulonglong)(longlong)(int)(uint)uVar1) * (short)param_4;
        *(ushort *)(uVar4 + 0xc + (longlong)puVar3) = uVar1;
        *(uint *)(uVar4 + 8 + (longlong)puVar3) = (uint)uVar1 * iVar2;
        FUN_00014a30(param_2,param_3,puVar3,local_18,local_14[0]);
      }
    }
    ExFreePoolWithTag(puVar3,0);
  }
  return;
}

