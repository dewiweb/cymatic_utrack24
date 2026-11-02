// rea decompile_all
// name: FUN_0001881c
// address: 0x1881c
// body: available
// range: 0x1881c-0x18957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001881c(longlong param_1,int *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int iVar10;
  
  iVar10 = *param_2;
  uVar6 = FUN_00024054((longlong *)(DAT_00029268 + 0x120),iVar10);
  if (uVar6 == 0) {
    uVar7 = 0xe0000040;
  }
  else {
    lVar4 = *(longlong *)(uVar6 + 0x28);
    lVar8 = FUN_00018c54(param_1,iVar10);
    if (lVar8 == 0) {
      puVar9 = (ulonglong *)ExAllocatePoolWithTag(0,0x50,0x5f6e6577);
      if (puVar9 == (ulonglong *)0x0) {
        puVar9 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar9,0,0x50);
        puVar1 = puVar9 + 2;
        puVar9[1] = (ulonglong)puVar9;
        *puVar9 = (ulonglong)puVar9;
        puVar9[3] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
      }
      if (puVar9 == (ulonglong *)0x0) {
        uVar7 = 0xe0000002;
      }
      else {
        puVar9[4] = uVar6;
        if (*(char *)(uVar6 + 0x35) == '\0') {
          uVar7 = 0xe0000020;
        }
        else {
          if ((*(int *)(uVar6 + 0x48) < *(int *)(uVar6 + 0x3c)) &&
             ((*(char *)(uVar6 + 0x38) != '\0' || (*(int *)(uVar6 + 0x50) == 0)))) {
            *(int *)(uVar6 + 0x48) = *(int *)(uVar6 + 0x48) + 1;
            plVar5 = *(longlong **)(param_1 + 0x68);
            plVar3 = (longlong *)((longlong)puVar9 + *(longlong *)(param_1 + 0x70));
            *plVar3 = *plVar5;
            plVar3[1] = (longlong)plVar5;
            *(longlong **)(*plVar5 + 8) = plVar3;
            lVar8 = DAT_00029268;
            *plVar5 = (longlong)plVar3;
            piVar2 = (int *)(lVar4 + 0x28);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar8 + 0x780) = *(int *)(lVar8 + 0x780) + 1;
            return 0;
          }
          uVar7 = 0xe0000041;
        }
        FUN_000138d8((longlong *)(puVar9 + 5));
        ExFreePoolWithTag(puVar9,0);
      }
    }
    else {
      uVar7 = 0xe0000021;
    }
  }
  return uVar7;
}

